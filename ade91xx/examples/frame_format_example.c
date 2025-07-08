/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/*============= I N C L U D E S =============*/

#include "ADE911X_addr_def.h"
#include "ADE911X_addr_rdef.h"
#include "ade_crc.h"
#include "adi_ade91xx_frame_format.h"
#include "adi_evb.h"
#include "message.h"
#include <string.h>

/*=============  D E F I N E S  =============*/

/** No error, API succeeded. */
#define ADI_ADC_STATUS_SUCCESS 0
/** Response received from ADC has CRC errors. */
#define ADI_ADC_STATUS_CRC_ERROR 1
/** Datapath configuration failed.*/
#define ADI_ADC_STATUS_DATAPATH_CONFIGURATION_FAILED 2
/** SPI Tx/Rx failed.*/
#define ADI_ADC_STATUS_TRANSCEIVE_FAILED 3

/** Startup time for ADC in milliseconds */
#define ADI_ADC_STARTUP_TIME_MS 65
/** Number of channels*/
#define ADI_ADC_NUM_CHANNELS 3
/**
 * Number of samples per channel to be collected
 */
#define ADI_ADC_SAMPLE_BLOCK_SIZE 4

/*=============  D A T A   =============*/

static void *hEvb;
static ADI_ADC_CMD_LONG_FRAME_ADE91XX longCommand;
static ADI_ADC_CMD_SHORT_FRAME_ADE91XX shortCommand;
static ADI_ADC_RESPONSE_LONG_FRAME_ADE91XX longResponse;
static ADI_ADC_RESPONSE_SHORT_FRAME_ADE91XX shortResponse;
static ADI_EVB_CONFIG evbConfig;
static int32_t adcSamples[ADI_ADC_NUM_CHANNELS * ADI_ADC_SAMPLE_BLOCK_SIZE];
/* Flag for ADC DREADY signal */
static volatile uint8_t dreadyFlag = 0;

/*=============  F U N C T I O N   P R O T O T Y P E S  =============*/

static uint32_t WriteAndReadConfigFiltRegister(void);
static void AdcDreadyCallback(uint32_t port, uint32_t pinFlag);
static uint32_t ReadSamples(int32_t pSamples[]);
static uint32_t WriteConfigFiltRegister(void);
static uint32_t ReadConfigFiltRegister(void);
static void ExtractSamples(ADI_ADC_RESPONSE_LONG_FRAME_ADE91XX *pResponse, int32_t *pSamples);
static uint32_t SendCmdAndGetResponse(uint16_t addr, uint8_t data, uint8_t readWriteBit,
                                      uint8_t cmdFormat, uint8_t *pResponse);
static uint32_t AssembleCommand(uint8_t readWriteBit, uint16_t addr, uint8_t data,
                                uint8_t cmdFormat, ADI_ADC_CMD *pAdcCmd);
static uint32_t ValidateFrameCrc(uint8_t *pFrame, uint8_t frameLength);

/*=============  C O D E  =============*/

/**
 * @brief Main entry point for the frame format example.
 *        Demonstrates writing to and reading from ADE91xx ICs.
 */
int main()
{
    int32_t boardStatus = ADI_EVB_STATUS_SUCCESS;
    ADI_EVB_CONFIG *pEvbConfig = &evbConfig;
    /* Assign GPIO interrupt callback */
    pEvbConfig->gpioConfig.pfGpioCallback = AdcDreadyCallback;

    /* Board specific initialization. */
    boardStatus = EvbInit(&hEvb, pEvbConfig);

    if (boardStatus == ADI_EVB_STATUS_SUCCESS)
    {
        EvbInitMessageBuffer();

        printf("\n**************** ADE9113, ADE9112 and ADE9103 Frame Format Example "
               "******************\n");
        printf("This example demonstrates basic communication with the ADE9113, ADE9112 and "
               "ADE9103 ICs.\n");
        printf("It shows how to write to and read from ADC.\n");

        EvbResetAdcs();
        EvbDelayMs(ADI_ADC_STARTUP_TIME_MS);
        /* Example: Write and read ADC register */
        WriteAndReadConfigFiltRegister();

        printf("Reading ADC samples in a loop...");
        /* Enable IRQ for ADC DREADY pin */
        EvbEnableDreadyIrq(1);

        /* Reads ADC Samples */
        ReadSamples(&adcSamples[0]);

        printf("\n**************** Example Completed ******************\n");
        EvbFlushMessages();
    }
    while (1)
    {
        /* Main loop - add further processing if needed */
        ;
    }
}

/**
 * @brief Writes to and reads from the register in short format.
 * @return Status of the write, read and CRC validation.
 */
static uint32_t WriteAndReadConfigFiltRegister(void)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;

    /* Write to the ADC register */
    WriteConfigFiltRegister();
    /* Read from the ADC register */
    status = ReadConfigFiltRegister();

    return status;
}

/**
 * @brief Reads samples from the ADC using long format commands.
 *        Shows how to use long format for both read and write.
 * @param pSamples Pointer to array to store extracted samples.
 * @return Status of the last command.
 */
static uint32_t ReadSamples(int32_t pSamples[])
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    ADI_ADC_RESPONSE_LONG_FRAME_ADE91XX *pResponse = &longResponse;
    uint8_t sampleData = 0x0;
    uint16_t addr = ADDR_ADE911X_MAP0_STATUS2;
    uint32_t sampleIdx = 0;
    /* First long command: the response of this is for previous command (could be short), so
     * ignore */
    SendCmdAndGetResponse(addr, sampleData, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_LONG,
                          (uint8_t *)pResponse);
    dreadyFlag = 0;

    for (sampleIdx = 0; sampleIdx < ADI_ADC_SAMPLE_BLOCK_SIZE; sampleIdx++)
    {
        while (dreadyFlag == 0)
        {
            /* Wait until the ADC DREADY flag is set by ISR */
        }
        /* Clear the data ready flag immediately to catch the next interrupt */
        dreadyFlag = 0;

        /* Get the response for previous command */
        status = SendCmdAndGetResponse(addr, sampleData, ADI_ADC_RWB_READ,
                                       ADI_ADC_FRAME_FORMAT_LONG, (uint8_t *)pResponse);
        ExtractSamples(pResponse, &pSamples[sampleIdx * ADI_ADC_NUM_CHANNELS]);
    }

    for (sampleIdx = 0; sampleIdx < ADI_ADC_NUM_CHANNELS * ADI_ADC_SAMPLE_BLOCK_SIZE; sampleIdx++)
    {
        printf("0x%04X", pSamples[sampleIdx]);
    }

    return status;
}

/**
 * @brief Writes to the register in short format.
 * @return Status of the write and CRC validation.
 */
static uint32_t WriteConfigFiltRegister(void)
{
    /* Example: Write sampling rate in short format and read status */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADE91XX *pResponse = &shortResponse;
    uint8_t sampleRate =
        ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_LPF_4KHZ; /* Example value for
                                                                            sampling rate */
    uint16_t addr = ADDR_ADE911X_MAP0_CONFIG_FILT;
    status = SendCmdAndGetResponse(addr, sampleRate, ADI_ADC_RWB_WRITE, ADI_ADC_FRAME_FORMAT_SHORT,
                                   (uint8_t *)pResponse);

    return status;
}

/**
 * @brief Reads the register from the ADC in short format.
 * @return Status of the write and CRC validation.
 */
static uint32_t ReadConfigFiltRegister(void)
{
    printf("Reading CONFIG_FILT Register");
    /* Example: Reads sampling rate in short format and read status */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADE91XX *pResponse = &shortResponse;
    uint16_t addr = ADDR_ADE911X_MAP0_CONFIG_FILT;
    /* Send command to read register */
    status = SendCmdAndGetResponse(addr, 0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                   (uint8_t *)pResponse);
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        /* Send command to get response of previous command */
        status = SendCmdAndGetResponse(addr, 0x0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                       (uint8_t *)pResponse);
    }
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        printf("Address:0x%04X  Value:0x%02X\n", addr, pResponse->data[1]);
    }
    else
    {
        printf("Error reading CONFIG_FILT register value at address:0x%04X, status:%d\n", addr,
               status);
    }
    return status;
}

/**
 * @brief Extracts waveform samples from the ADC response.
 *        Performs sign extension for 24-bit samples.
 * @param pResponse Pointer to the ADC response structure.
 * @param pSamples Pointer to array to store extracted samples.
 */
static void ExtractSamples(ADI_ADC_RESPONSE_LONG_FRAME_ADE91XX *pResponse, int32_t *pSamples)
{
    uint8_t *pSrc = (uint8_t *)pResponse;
    int32_t val;
    for (uint8_t i = 0; i < ADI_ADC_NUM_CHANNELS; i++)
    {
        /* Form the channel waveform sample by WAV_LO | WAV_MD | WAV_HI */
        val = (int32_t)((pSrc[4 * i + 1]) | (pSrc[4 * i + 2] << 8) | (pSrc[4 * i + 3] << 16));
        /* Sign-extend to 32 bits if the 24-bit number is negative */
        if (val & (1 << 23))
        {
            val |= 0xFF000000; /* Set the upper 8 bits to 1s for sign extension */
        }
        pSamples[i] = val;
    }
}

/**
 * @brief Sends a command to the ADC. Response is always for the previous command sent.
 * @param addr Register address to access.
 * @param data Data byte to write (or dummy for read).
 * @param readWriteBit 1 for read, 0 for write.
 * @param cmdFormat ADI_ADC_FRAME_FORMAT_LONG or ADI_ADC_FRAME_FORMAT_SHORT.
 * @param pResponse Pointer to buffer to receive the response.
 * @return Status of the CRC validation.
 */
static uint32_t SendCmdAndGetResponse(uint16_t addr, uint8_t data, uint8_t readWriteBit,
                                      uint8_t cmdFormat, uint8_t *pResponse)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    int32_t spiStatus = 0;
    ADI_ADC_CMD *pCmd;
    uint8_t responseLength = 0;
    void *pCommand = NULL;
    if (cmdFormat == ADI_ADC_FRAME_FORMAT_LONG)
    {
        memset(&longCommand, 0xFF, sizeof(ADI_ADC_CMD_LONG_FRAME_ADE91XX));
        pCmd = &longCommand.cmd;
        responseLength = sizeof(ADI_ADC_RESPONSE_LONG_FRAME_ADE91XX);
        pCommand = &longCommand;
    }
    else
    {
        memset(&shortCommand, 0xFF, sizeof(ADI_ADC_CMD_SHORT_FRAME_ADE91XX));
        pCmd = &shortCommand.cmd;
        responseLength = sizeof(ADI_ADC_RESPONSE_SHORT_FRAME_ADE91XX);
        pCommand = &shortCommand;
    }

    status = AssembleCommand(readWriteBit, addr, data, cmdFormat, pCmd);

    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        spiStatus = EvbAdeSpiTransceive(hEvb, (uint8_t *)pCommand, pResponse, responseLength, 1000);
        if (spiStatus != 0)
        {
            status = ADI_ADC_STATUS_TRANSCEIVE_FAILED;
        }
    }

    status = ValidateFrameCrc((uint8_t *)pResponse, responseLength);

    return status;
}

/**
 * @brief Assembles a command frame for the ADC.
 * @param readWriteBit 1 for read, 0 for write.
 * @param addr Register address.
 * @param data Data byte to write.
 * @param cmdFormat ADI_ADC_FRAME_FORMAT_LONG or ADI_ADC_FRAME_FORMAT_SHORT.
 * @param pAdcCmd Pointer to command structure to populate.
 * @return Status of the operation.
 */
static uint32_t AssembleCommand(uint8_t readWriteBit, uint16_t addr, uint8_t data,
                                uint8_t cmdFormat, ADI_ADC_CMD *pAdcCmd)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;

    pAdcCmd->addr = addr & 0xFF; /* Extract lower 8 bits */
    pAdcCmd->data = data;
    pAdcCmd->addrHi = 0;
    pAdcCmd->rwb = readWriteBit;
    pAdcCmd->formatLong = cmdFormat;
    pAdcCmd->crc = AdeCalculateCrc8((uint8_t *)pAdcCmd, sizeof(ADI_ADC_CMD) - 1);

    return status;
}

/**
 * @brief Validates the CRC of a received frame using CRC-16.
 * @param pFrame Pointer to the received frame.
 * @param frameLength Length of the frame including CRC.
 * @return ADI_ADC_STATUS_SUCCESS if CRC matches, ADI_ADC_STATUS_CRC_ERROR otherwise.
 */
static uint32_t ValidateFrameCrc(uint8_t *pFrame, uint8_t frameLength)
{
    uint32_t status;
    uint8_t crcPos = frameLength - 2; /* Position of CRC in the frame */
    /* Extract the received 16-bit CRC */
    uint32_t expectedCrc = (uint32_t)pFrame[crcPos + 1] << 8 | (uint32_t)pFrame[crcPos];
    /* Calculate the 16-bit CRC of the received frame (excluding CRC field) */
    uint32_t frameCrc = AdeCalculateCrc16(pFrame, frameLength - 2);
    if (expectedCrc == frameCrc)
    {
        status = ADI_ADC_STATUS_SUCCESS;
    }
    else
    {
        status = ADI_ADC_STATUS_CRC_ERROR;
    }

    return status;
}

/**
 * @brief GPIO interrupt callback for ADC DREADY.
 *        Sets flags when ADC DREADY is detected.
 * @param port GPIO port number
 * @param flag GPIO pin flags indicating which pin triggered the interrupt
 */
void AdcDreadyCallback(uint32_t port, uint32_t pinFlag)
{
    /* Handle GPIO interrupt for ADC DREADY signal.
       Sets dreadyFlag when interrupt is triggered */
    if ((port == (uint32_t)BOARD_CFG_ADC_DREADY_PORT) && (pinFlag == BOARD_CFG_ADC_DREADY_PIN))
    {
        dreadyFlag = 1;
    }
}
