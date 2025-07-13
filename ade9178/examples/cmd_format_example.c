/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/*============= I N C L U D E S =============*/

#include "ADE911X_addr_def.h"
#include "ade9178.h"
#include "ade9178_default.h"
#include "ade_crc.h"
#include "adi_ade9178_cmd_format.h"
#include "adi_evb.h"
#include "message.h"
#include <string.h>

/*=============  D E F I N I T I O N S  =============*/

/** RWB - Read/Write bit definition for register read */
#define RWB_READ 1
/** RWB - Read/Write bit definition for register write */
#define RWB_WRITE 0

/** Device - ADE9178 */
#define DEVICE_ADE9178 0x00
/** Device - ADC0 */
#define DEVICE_ADC0 0x01
/** Device - ADC1 */
#define DEVICE_ADC1 0x02
/** Device - ADC2 */
#define DEVICE_ADC2 0x03
/** Device - ADC3 */
#define DEVICE_ADC3 0x04
/** Device - All ADCs */
#define DEVICE_ALL_ADC 0x05
/** fullscale code for WATT and VA output*/
#define POWER_FS_CODE 85829040

/*=============  D A T A   =============*/

static ADI_ADE9178_CMD command;             // Command structure
static ADI_EVB_CONFIG evbConfig;            // EVB configuration
static void *hEvb;                          // Handle to EVB
static volatile uint8_t isHostRdy = 0;      // Flag for HOST_RDY signal
static volatile uint8_t isHostErr = 0;      // Flag for HOST_ERR signal
static ADI_ADE9178_RESPONSE responseBuffer; // Response Data from ADE9178.
/*============= F U N C T I O N S =============*/

static void IrqGPIOCallback(uint32_t port, uint32_t flag);
static uint32_t SendCmdAndGetResponse(uint8_t device, uint16_t addr, uint8_t readWriteBit,
                                      uint8_t numRegisters, int32_t *pData);
static uint32_t WriteAndReadAde9178Register();
static uint32_t WriteAndReadAdc0Register();
static uint32_t WriteAndReadAllAdcRegister();
static uint32_t ValidateFrameCrc(uint8_t *pFrame, uint8_t numBytes);
static void AssembleCommand(uint8_t device, uint16_t addr, uint8_t readWriteBit,
                            uint8_t numRegisters, int32_t data);
static void ConfigureAndInitAdcs(void);
static uint32_t ReadWattPosEgy();

int main()
{
    ADI_EVB_CONFIG *pEvbConfig = &evbConfig;
    int32_t boardStatus = 0;
    int32_t egyReadCount = 0;
    uint32_t status = 0;
    // Assign GPIO interrupt callback
    pEvbConfig->gpioConfig.pfGpioCallback = IrqGPIOCallback;

    // Initialize GPIO, SPI, and UART interfaces required for ADE9178 communication and data
    // transfer to host
    boardStatus = EvbInit(&hEvb, pEvbConfig);

    if (boardStatus == 0)
    {
        EvbInitMessageBuffer();

        printf("\n**************** ADE9178 Command Format Example ******************\n");

        printf("This example demonstrates basic communication with the ADE9178.\n");


        // Enable IRQ for HOST_RDY and HOST_ERR pins
        EvbEnableAllGPIOIrq();

        EvbResetAde(); // Reset the ADE9178 and ADCs

        // Configure and initialize ADCs
        ConfigureAndInitAdcs();

        // Example: Write and read ADE9178 register
        WriteAndReadAde9178Register();

        // Example: Write and read ADC0 register
        WriteAndReadAdc0Register();

        // Example: Write and read all ADC registers
        WriteAndReadAllAdcRegister();
        printf("Total Active Energy (Phase A) values in a loop...\n");

        // Reads the Total Active Energy registers continuously
        while (egyReadCount < 10)
        {
            status = ReadWattPosEgy();
            egyReadCount++;
            if (status != 0)
            {
                printf("Error reading Total Active Energy (Phase A) register.\n");
            }
        }
        // This is to ensure that the messages are flushed and ready for transmission
        // before the program ends.

        printf("\n**************** Example Completed ******************\n");

        EvbFlushMessages();

        while (1)
        {
            // Keep the program running to allow transmission of data
            // or implement other functionality as needed
        }
    }
    else
    {
    }
}

/**
 * @brief Configures and initializes the ADCs connected to the ADE9178.
 *        This function sets up the ADC configuration registers and starts the ADC run.
 */
static void ConfigureAndInitAdcs(void)
{
    // Configure the ADCs connected are 4, so the ADC_REDIRECT0 and ADC_REDIRECT1 registers is set
    // to the default values. These registers to be updated based on the ADCs connected to the
    // ADE9178.
    int32_t data;

    // Configure the number of ADC's connected
    data = ADE9178_REG_ADC_CONFIG_RESET;
    SendCmdAndGetResponse(DEVICE_ADE9178, ADE9178_REG_ADC_CONFIG, RWB_WRITE, 1, &data);

    // Update the ADC_REDIRECT0 and ADC_REDIRECT1 registers to be updated if the ADCs connected are
    // different than the default value.
    data = ADE9178_REG_ADC_REDIRECT0_RESET;
    SendCmdAndGetResponse(DEVICE_ADE9178, ADE9178_REG_ADC_REDIRECT0, RWB_WRITE, 1, &data);

    data = ADE9178_REG_ADC_REDIRECT1_RESET;
    SendCmdAndGetResponse(DEVICE_ADE9178, ADE9178_REG_ADC_REDIRECT1, RWB_WRITE, 1, &data);

    // Example: Initialize ADC and start ADC run
    // Set ADC_CONTROL register to initialize and start ADC for the measurements
    data = ADE9178_BITM_ADC_CONTROL_ADC_RUN | ADE9178_BITM_ADC_CONTROL_ADC_INIT;
    SendCmdAndGetResponse(DEVICE_ADE9178, ADE9178_REG_ADC_CONTROL, RWB_WRITE, 1, &data);
}

/**
 * @brief Writes to and reads from an ADE9178 register.
 *        Demonstrates register write and read using the command format.
 */
static uint32_t WriteAndReadAde9178Register(void)
{
    int32_t data = 0x12345678;
    uint32_t status = 0;
    uint16_t addr = ADE9178_REG_AVGAIN;
    uint8_t numRegisters = 1;
    printf("Reading ADE9178 register");

    // Write value to register
    status = SendCmdAndGetResponse(DEVICE_ADE9178, addr, RWB_WRITE, numRegisters, &data);

    // Prepare to read back value
    data = 0x0;
    status = SendCmdAndGetResponse(DEVICE_ADE9178, addr, RWB_READ, numRegisters, &data);

    if (status == 0)
    {
        printf("ADE9178 address:0x%04X  Value:0x%08X\n", addr, data);
    }
    else
    {
        printf("Error reading ADE9178 register at address:0x%04X\n", addr);
    }
    return status;
}

/**
 * @brief Writes to and reads from the scratch register of ADC0.
 *        Demonstrates ADC register access.
 */
static uint32_t WriteAndReadAdc0Register(void)
{
    int32_t data = 0x3;
    int32_t scratchData;
    uint32_t status = 0;
    uint8_t numRegisters = 1;
    uint16_t addr = ADDR_ADE911X_MAP0_SCRATCH;
    ADI_ADE9178_1x2xADC_RESPONSE response = {0};

    printf("Reading ADC0 SCRATCH registers");

    // Write value to ADC0 scratch register
    status = SendCmdAndGetResponse(DEVICE_ADC0, addr, RWB_WRITE, numRegisters, &data);

    // Use response struct as buffer for reading
    memset(&response, 0, sizeof(response));
    status = SendCmdAndGetResponse(DEVICE_ADC0, addr, RWB_READ, numRegisters, (int32_t *)&response);
    scratchData = response.adc0Data;

    if (status == 0)
    {
        printf("ADC0 address:0x%04X  Value:0x%02X\n", addr, scratchData);
    }
    else
    {
        printf("Error reading ADC0 register at address:0x%04X\n", addr);
    }
    return status;
}

/**
 * @brief Writes to and reads from the scratch register of all ADCs.
 *        Demonstrates multi-register ADC access.
 */
static uint32_t WriteAndReadAllAdcRegister(void)
{
    int32_t data = 0x2;
    uint32_t status = 0;
    uint8_t numRegisters = 2;
    uint16_t addr = ADDR_ADE911X_MAP0_SCRATCH;
    ADI_ADE9178_3x4xADC_RESPONSE response = {0}; // Use struct as buffer

    printf("Reading all ADC SCRATCH registers");

    // Write value to all ADC scratch registers
    status = SendCmdAndGetResponse(DEVICE_ALL_ADC, ADDR_ADE911X_MAP0_SCRATCH, RWB_WRITE, 1, &data);

    // Read back values from all ADC scratch registers
    memset(&response, 0, sizeof(response));
    status = SendCmdAndGetResponse(DEVICE_ALL_ADC, ADDR_ADE911X_MAP0_SCRATCH, RWB_READ,
                                   numRegisters, (int32_t *)&response);
    if (status == 0)
    {
        printf("ADC0 address:0x%04X  Value:0x%02X\n", addr, response.adc0Data);
        printf("ADC1 address:0x%04X  Value:0x%02X\n", addr, response.adc1Data);
        printf("ADC2 address:0x%04X  Value:0x%02X\n", addr, response.adc2Data);
        printf("ADC3 address:0x%04X  Value:0x%02X\n", addr, response.adc3Data);
    }
    else
    {
        printf("Error reading ADC Registers at address:0x%04X\n", addr);
    }
    return status;
}

/**
 * @brief Reads the Phase A Accumulated Positive Total Active Energy from ADE9178.
 *        This function reads the low and high parts of the register and converts the energy
 *        value into watt-seconds. The result is sent to the host via UART.
 */
static uint32_t ReadWattPosEgy(void)
{
    int32_t wattPosLo = 0x0;
    int32_t wattPosHi = 0x0;
    int64_t egyValue;
    int64_t egyHi;
    float egyWattSec; // units in Watt-seconds
    uint32_t status = 0;
    uint16_t addr = ADE9178_REG_AWATTHR_POS_LO;
    int32_t numSample = 4000; // Number of samples to average over

    status = SendCmdAndGetResponse(DEVICE_ADE9178, addr, RWB_READ, 1, &wattPosLo);

    addr = ADE9178_REG_AWATTHR_POS_HI;
    status = SendCmdAndGetResponse(DEVICE_ADE9178, addr, RWB_READ, 1, &wattPosHi);

    // Refer to Table 14 in the ADE9178 datasheet for conversion equation
    egyHi = (int64_t)wattPosHi << 13;
    egyValue = (egyHi | (uint32_t)wattPosLo);
    egyWattSec = (float)egyValue / (float)POWER_FS_CODE;
    egyWattSec = egyWattSec / (float)numSample;

    if (status == 0)
    {
        printf("0x%04x\n", egyValue);
    }
    return status;
}

/**
 * @brief Assembles a command frame to send to the device.
 *        Refer to the datasheet for more details on command formatting.
 * @param device Device ID (e.g., DEVICE_ADE9178, DEVICE_ADC0, etc.)
 * @param addr Register address to read/write.
 * @param readWriteBit 1 for read, 0 for write.
 * @param numRegisters Number of registers to read/write.
 * @param data Data to write (for write operations).
 */
void AssembleCommand(uint8_t device, uint16_t addr, uint8_t readWriteBit, uint8_t numRegisters,
                     int32_t data)
{
    ADI_ADE9178_CMD *pCmd = &command;
    pCmd->addr = addr;
    pCmd->rwb = readWriteBit & 0x1;
    pCmd->device = device & 0x7;
    pCmd->numRegisters = numRegisters;
    pCmd->data = data;
    // Calculate CRC for the command frame (excluding CRC field itself)
    pCmd->crc = AdeCalculateCrc16((uint8_t *)pCmd, sizeof(ADI_ADE9178_CMD) - ADI_ADE9178_CRC_SIZE);
}

/**
 * @brief Sends a command to the device and receives the response.
 *        Handles waiting for HOST_RDY/HOST_ERR and CRC validation.
 * @param device Device ID (e.g., DEVICE_ADE9178, DEVICE_ADC0, etc.)
 * @param addr Register address to read/write.
 * @param readWriteBit 1 for read, 0 for write.
 * @param numRegisters Number of registers to read/write.
 * @param pData Pointer to data buffer for read/write operations.
 * @return Status of the operation (0 for success, non-zero for error).
 */
uint32_t SendCmdAndGetResponse(uint8_t device, uint16_t addr, uint8_t readWriteBit,
                               uint8_t numRegisters, int32_t *pData)
{
    uint32_t numBytesToReceive = 0;
    uint32_t status = 0;
    uint32_t numCmdBytes = sizeof(ADI_ADE9178_CMD);

    // Assemble command frame
    AssembleCommand(device, addr, readWriteBit, numRegisters, *pData);

    // Reset host ready/error flags
    isHostRdy = 0;
    isHostErr = 0;

    // Start SPI transmit to ADE9178
    EvbAdeSpiTransmitAsync(hEvb, (uint8_t *)&command, numCmdBytes);

    // Wait for HOST_RDY or HOST_ERR signal from ADE9178
    while (isHostRdy == 0 && isHostErr == 0)
    {
    }

    // For write or error, response size is fixed; for read, it's numRegisters * 4 bytes
    if (readWriteBit == RWB_WRITE || isHostErr == 1)
    {
        numBytesToReceive = ADI_ADE9178_RESPONSE_SIZE;
    }
    else
    {
        numBytesToReceive = numRegisters * ADI_ADE9178_RESPONSE_SIZE;
    }

    numBytesToReceive += ADI_ADE9178_CRC_SIZE; // Add CRC size to response
    // Reset host ready/error flags
    isHostRdy = 0;
    isHostErr = 0;

    // Start SPI receive from ADE9178 and wait for response
    EvbAdeSpiReceiveAsync(hEvb, (uint8_t *)&responseBuffer.data[0], numBytesToReceive);
    while (isHostRdy == 0 && isHostErr == 0)
    {
    }

    // Validate CRC of received frame
    status = ValidateFrameCrc((uint8_t *)&responseBuffer.data[0], numBytesToReceive);
    if (status == 0)
    {
        memcpy(pData, &responseBuffer.data[0], numBytesToReceive - ADI_ADE9178_CRC_SIZE);
    }
    return status;
}

/**
 * @brief GPIO interrupt callback for HOST_RDY and HOST_ERR signals.
 *        Sets flags when signals are detected.
 * @param port GPIO port number
 * @param flag GPIO pin flags indicating which pin triggered the interrupt
 */
void IrqGPIOCallback(uint32_t port, uint32_t flag)
{
    // Handle GPIO interrupt for HOST_RDY and HOST_ERR signals
    // Set isHostRdy or isHostErr flags based on which pin triggered the interrupt
    uint32_t pinState = 0;
    if (port == (uint32_t)BOARD_CFG_ADECOMM_PORT)
    {
        if ((flag & BOARD_CFG_HOST_RDY_PIN) != 0)
        {
            pinState = EvbGetPinState((uint32_t)BOARD_CFG_ADECOMM_PORT, BOARD_CFG_HOST_RDY_PIN);
            if (pinState == 0)
            {
                isHostRdy = 1;
            }
        }

        if ((flag & BOARD_CFG_HOST_ERR_PIN) != 0)
        {
            pinState = EvbGetPinState((uint32_t)BOARD_CFG_ADEIRQ_PORT, BOARD_CFG_HOST_ERR_PIN);
            if (pinState == 0)
            {
                isHostErr = 1;
            }
        }
    }
}

/**
 * @brief Validates the CRC of a received frame using CRC-16.
 * @param pFrame Pointer to the received frame
 * @param numBytes Number of bytes in the frame (including CRC)
 * @return 0 if CRC matches, -1 otherwise
 */
static uint32_t ValidateFrameCrc(uint8_t *pFrame, uint8_t numBytes)
{
    uint32_t status = 0;
    uint8_t responseLength = numBytes - ADI_ADE9178_CRC_SIZE; // Exclude the CRC
    // Extract the received 16-bit CRC
    uint32_t expectedCrc =
        (uint32_t)pFrame[responseLength + 1] << 8 | (uint32_t)pFrame[responseLength];
    // Calculate the CRC of the received frame (excluding CRC field)
    uint32_t responseCrc = AdeCalculateCrc16(pFrame, responseLength);
    if (expectedCrc != responseCrc)
    {
        status = -1;
    }
    return status;
}
