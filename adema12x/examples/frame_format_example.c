/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/*============= I N C L U D E S =============*/

#include "ADEMA127_addr_def.h"
#include "ADEMA127_addr_rdef.h"
#include "ade_crc.h"
#include "adi_adema12x_frame_format.h"
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

/** Number of channels */
#define ADI_ADC_NUM_CHANNELS 7
/**
 * Number of samples per channel to be collected
 */
#define ADI_ADC_SAMPLE_BLOCK_SIZE 4
/**
 * This macro defines the maximum number of retries to check if the DSP memory access
 * is ready before considering the operation as failed.
 */
#define ADI_ADC_MAX_ATTEMPTS 5

/*=============  D A T A   =============*/

static void *hEvb;
static ADI_ADC_CMD_LONG_FRAME_ADEMA127 longCommand;
static ADI_ADC_CMD_SHORT_FRAME_ADEMA12X shortCommand;
static ADI_ADC_RESPONSE_LONG_FRAME_ADEMA127 longResponse;
static ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X shortResponse;
static ADI_EVB_CONFIG evbConfig;
static int32_t adcSamples[ADI_ADC_NUM_CHANNELS * ADI_ADC_SAMPLE_BLOCK_SIZE];
/* Flag for ADC DREADY signal */
static volatile uint8_t dreadyFlag = 0;

/*=============  F U N C T I O N   P R O T O T Y P E S  =============*/

static uint32_t WriteAndReadScratchRegister(void);
static uint32_t WriteAndReadDatapathConfigRegister(void);
static uint32_t WriteAndReadDspRam(void);
static void AdcDreadyCallback(uint32_t port, uint32_t pinFlag);
static uint32_t ReadSamples(int32_t pSamples[]);
static uint32_t WriteScratchRegister(void);
static uint32_t ReadScratchRegister(void);
static uint32_t WriteDatapathConfigRegister(void);
static uint32_t ReadDatapathConfigRegister(void);
static uint32_t WriteDspRam(void);
static uint32_t ReadDspRam(void);
static uint32_t ConfigDatapathLock(uint8_t value);
static uint32_t RequestDspMemoryAccess(uint8_t value);
static void ExtractSamples(ADI_ADC_RESPONSE_LONG_FRAME_ADEMA127 *pResponse, int32_t *pSamples);
static uint32_t ValidateFrameCrc(uint8_t *pFrame, uint8_t frameLength);
static uint32_t AssembleCommand(uint8_t readWriteBit, uint16_t addr, uint8_t data,
                                uint8_t cmdFormat, ADI_ADC_CMD *pAdcCmd);
static uint32_t SendCmdAndGetResponse(uint16_t addr, uint8_t data, uint8_t readWriteBit,
                                      uint8_t cmdFormat, uint8_t *pResponse);

/*=============  C O D E  =============*/

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
        printf(
            "\n**************** ADEMA127 and ADEMA124 Frame Format Example ******************\n");

        printf("This example demonstrates basic communication with the ADEMA127 and ADEMA124.\n");

        EvbResetAdcs();
        /* Example: Write and read ADC register */
        WriteAndReadScratchRegister();

        /* Example: Write and read Datapath configuration register */
        WriteAndReadDatapathConfigRegister();

        /* Example: Write and read DSP RAM */
        WriteAndReadDspRam();

        /* Enable IRQ for ADC DREADY pin */
        EvbEnableDreadyIrq(1);

        /* Reads ADC Samples */
        printf("Reading ADC samples in a loop...");
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
 * @brief Writes and reads sample data to/from the SCRATCH register.
 * @return Status of the operation.
 */
static uint32_t WriteAndReadScratchRegister(void)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;

    /* Write sample data to the SCRATCH register */
    WriteScratchRegister();
    /* Read sample data from the SCRATCH register */
    status = ReadScratchRegister();

    return status;
}

/**
 * @brief Writes to and reads from the ADC Datapath configuration register.
 *        Unlocks, writes, then locks the Datapath config.
 *        Datapath configuration registers are from address 0x03C to 0x055
 * @return Status of the operation.
 */
static uint32_t WriteAndReadDatapathConfigRegister(void)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;

    /* Write to the ADC Datapath configuration register */
    status = WriteDatapathConfigRegister();
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        /* Read the ADC Datapath configuration register */
        status = ReadDatapathConfigRegister();
    }

    return status;
}

/**
 * @brief Writes and reads sample data to/from the DSP RAM.
 * @return Status of the operation.
 */
static uint32_t WriteAndReadDspRam(void)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;

    /* Write to the DSP RAM */
    status = WriteDspRam();
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        /* Read from the DSP RAM */
        status = ReadDspRam();
    }

    return status;
}

/**
 * @brief Writes sample data to the SCRATCH register.
 * @return Status of the write operation.
 */
static uint32_t WriteScratchRegister(void)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    uint8_t sampleData = 0xAD;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X *pResponse = &shortResponse;
    uint16_t addr = ADDR_ADEMA127_MMR_SCRATCH;

    // Write value to register
    status = SendCmdAndGetResponse(addr, sampleData, ADI_ADC_RWB_WRITE, ADI_ADC_FRAME_FORMAT_SHORT,
                                   (uint8_t *)pResponse);

    return status;
}

/**
 * @brief Reads sample data from the SCRATCH register.
 * @return Status of the read operation.
 */
static uint32_t ReadScratchRegister(void)
{
    /* Refer to Command and Response section in the data sheet */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X *pResponse = &shortResponse;
    uint16_t addr = ADDR_ADEMA127_MMR_SCRATCH;

    printf("Reading SCRATCH register");

    // Write command to read register
    status = SendCmdAndGetResponse(addr, 0x0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                   (uint8_t *)pResponse);
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        // Get register value from response
        status = SendCmdAndGetResponse(addr, 0x0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                       (uint8_t *)pResponse);
    }
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        printf("Address:0x%04X  Value:0x%02X\n", addr, pResponse->data[1]);
    }
    else
    {
        printf("Error reading ADC register at address:0x%04X, status: %d\n", addr, status);
    }

    return status;
}

/**
 * @brief Writes to the ADC Datapath configuration register.
 *        Unlocks, writes, then locks the Datapath config.
 *        Datapath configuration registers are from address 0x03C to 0x055
 * @return Status of the operation.
 */
static uint32_t WriteDatapathConfigRegister(void)
{
    /* Refer to REGISTER AND DSP RAM CONFIGURATION section in the datasheet */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    uint8_t sampleData = 0xB3;
    /* Write to DATARATE register */
    uint16_t addr = ADDR_ADEMA127_MMR_DATARATE;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X *pResponse = &shortResponse;

    /* Unlock the Datapath. Set DATAPATH_CONFIG_LOCK=0 */
    status = ConfigDatapathLock(0);
    /* Make changes to Datapath configuration register */
    status = SendCmdAndGetResponse(addr, sampleData, ADI_ADC_RWB_WRITE, ADI_ADC_FRAME_FORMAT_SHORT,
                                   (uint8_t *)pResponse);
    /* Lock the Datapath. Set DATAPATH_CONFIG_LOCK=1 */
    status = ConfigDatapathLock(1);

    return status;
}

/**
 * @brief Reads the ADC Datapath configuration register.
 *        Unlocks, reads, then locks the Datapath config.
 * @return Status of the operation.
 */
static uint32_t ReadDatapathConfigRegister(void)
{
    printf("Reading ADC Datapath configuration register\n");

    /* Refer to REGISTER AND DSP RAM CONFIGURATION section in the datasheet */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;

    /* Read from DATARATE register */
    uint16_t addr = ADDR_ADEMA127_MMR_DATARATE;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X *pResponse = &shortResponse;

    /* Unlock the data path. Set DATAPATH_CONFIG_LOCK=0 */
    status = ConfigDatapathLock(0);
    // Write command to read register
    status = SendCmdAndGetResponse(addr, 0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                   (uint8_t *)pResponse);
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        // Get register value from response
        status = SendCmdAndGetResponse(addr, 0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                       (uint8_t *)pResponse);
    }
    if (status == ADI_ADC_STATUS_SUCCESS)
    {
        printf("Address:0x%04X  Value:0x%02X\n", addr, pResponse->data[1]);
    }
    else
    {
        printf("Error reading ADC Datapath configuration register at address:0x%04X, status: %d\n",
               addr, status);
    }
    /* Lock the data path. Set DATAPATH_CONFIG_LOCK=1 */
    status = ConfigDatapathLock(1);

    return status;
}

/**
 * @brief Writes sample data to the DSP RAM for each channel.
 *        Requests DSP memory access, writes, then releases access.
 *        DSP RAM addresses are from 0x401 to 0x623.
 * @return Status of the operation.
 */
static uint32_t WriteDspRam(void)
{
    /* Refer to REGISTER AND DSP RAM CONFIGURATION section in the datasheet */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    uint8_t sampleData[ADI_ADC_NUM_CHANNELS];
    uint16_t addr;

    /* Write to SHIFT register */
    uint16_t baseAddr = ADDR_ADEMA127_DSP_RAM_CH0_SHIFT;
    uint16_t addrStep = 0x40; /* Address offset */
    int32_t i;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X *pResponse = &shortResponse;
    /* Request DSP memory access. Set DSP_MEM_ACCESS_REQ=1 */
    status = RequestDspMemoryAccess(1);
    /* Access the DSP RAM memory */
    for (i = 0; i < ADI_ADC_NUM_CHANNELS; i++)
    {
        sampleData[i] = i; /* Sample data to be written to DSP RAM */
        if (status == ADI_ADC_STATUS_SUCCESS)
        {
            addr = baseAddr + (i * addrStep);
            status = SendCmdAndGetResponse(addr, sampleData[i], ADI_ADC_RWB_WRITE,
                                           ADI_ADC_FRAME_FORMAT_SHORT, (uint8_t *)pResponse);
        }
    }
    /* Set DSP_MEM_ACCESS_REQ=0 */
    status = RequestDspMemoryAccess(0);

    return status;
}

/**
 * @brief Reads sample data from the DSP RAM for each channel.
 *        Requests DSP memory access, reads, then releases access.
 * @return Status of the operation.
 */
static uint32_t ReadDspRam(void)
{
    /* Refer to REGISTER AND DSP RAM CONFIGURATION section in the datasheet */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    uint8_t sampleData[ADI_ADC_NUM_CHANNELS];
    uint16_t addr;

    /* Read from SHIFT register */
    uint16_t baseAddr = ADDR_ADEMA127_DSP_RAM_CH0_SHIFT;
    /**
     * Address offset between consecutive channels.
     * For example, channel 0 starts at baseAddr,
     * channel 1 is at baseAddr + 0x40,
     * channel 2 is at baseAddr + 0x80, and so on.
     */
    uint16_t addrStep = 0x40;
    int32_t i;
    ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X *pResponse = &shortResponse;

    /* Request DSP memory access. Set DSP_MEM_ACCESS_REQ=1 */
    status = RequestDspMemoryAccess(1);

    printf("Reading DSP RAM region for all the channels\n");

    /* Access the DSP RAM memory */
    for (i = 0; i < ADI_ADC_NUM_CHANNELS; i++)
    {
        if (status == ADI_ADC_STATUS_SUCCESS)
        {
            addr = baseAddr + (i * addrStep);
            // Write command to read register
            status = SendCmdAndGetResponse(addr, 0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                           (uint8_t *)pResponse);
            if (status == ADI_ADC_STATUS_SUCCESS)
            {
                // Get register value from response
                status = SendCmdAndGetResponse(addr, 0, ADI_ADC_RWB_READ,
                                               ADI_ADC_FRAME_FORMAT_SHORT, (uint8_t *)pResponse);
            }
            if (status == ADI_ADC_STATUS_SUCCESS)
            {
                /* Value is in the first byte of the payload */
                sampleData[i] = pResponse->data[1];
                printf("Address:0x%04X  Value:0x%02X\n", addr, sampleData[i]);
            }
            else
            {
                printf("Error reading DSP RAM at address:0x%04X, status: %d\n", addr, status);
            }
        }
    }

    /* Set DSP_MEM_ACCESS_REQ=0 */
    (void)RequestDspMemoryAccess(0);

    return status;
}

/**
 * @brief Reads samples from the ADC using long format commands.
 * @param pSamples Pointer to array to store extracted samples.
 * @return Status of the last command.
 */
static uint32_t ReadSamples(int32_t pSamples[])
{
    ADI_ADC_RESPONSE_LONG_FRAME_ADEMA127 *pResponse = &longResponse;
    /* Refer to Command and Response section in the data sheet */
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    uint8_t sampleData = 0x0;
    uint16_t addr = ADDR_ADEMA127_MMR_STATUS2;
    uint32_t sampleIdx = 0;

    /* First long command: the response of this is for previous command (could be short), so
     * ignore
     */
    SendCmdAndGetResponse(addr, sampleData, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_LONG,
                          (uint8_t *)pResponse);
    dreadyFlag = 0;
    for (sampleIdx = 0; sampleIdx < ADI_ADC_SAMPLE_BLOCK_SIZE; sampleIdx++)
    {
        while (dreadyFlag == 0)
        {
            // Wait until the ADC DREADY flag is set by ISR
        }

        // Clear the data ready flag immediately to catch the next interrupt
        dreadyFlag = 0;

        /* Send another command in long format and get the response */
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
 * @brief Locks or unlocks the data path while accessing configuration registers.
 * @param value 0 to unlock, 1 to lock.
 * @return Status of the operation.
 */
static uint32_t ConfigDatapathLock(uint8_t value)
{
    ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X *pResponse = &shortResponse;
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    uint16_t addr = ADDR_ADEMA127_MMR_DATAPATH_CONFIG_LOCK;
    status = SendCmdAndGetResponse(addr, value, ADI_ADC_RWB_WRITE, ADI_ADC_FRAME_FORMAT_SHORT,
                                   (uint8_t *)pResponse);
    return status;
}

/**
 * @brief Requests or releases DSP memory access.
 * @param value 1 to request access, 0 to release.
 * @return Status of the operation.
 */
static uint32_t RequestDspMemoryAccess(uint8_t value)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    uint16_t addr = ADDR_ADEMA127_MMR_ACCESS_EXTENDED_MMAP;
    int32_t attempts = 0;

    if (value == 1)
    {
        /* Request DSP memory access - Set DSP_MEM_ACCESS_REQ = 1 */
        status = SendCmdAndGetResponse(addr, value, ADI_ADC_RWB_WRITE, ADI_ADC_FRAME_FORMAT_SHORT,
                                       (uint8_t *)&shortResponse);
        if (status == ADI_ADC_STATUS_SUCCESS)
        {
            addr = ADDR_ADEMA127_MMR_STATUS2;
            while (attempts < ADI_ADC_MAX_ATTEMPTS)
            {
                /* Refer to REGISTER AND DSP RAM CONFIGURATION section in the datasheet */
                SendCmdAndGetResponse(addr, 0, ADI_ADC_RWB_READ, ADI_ADC_FRAME_FORMAT_SHORT,
                                      (uint8_t *)&shortResponse);
                if (shortResponse.data[1] & BITM_ADEMA127_MMR_STATUS2_DSP_MEM_ACCESS_READY)
                {
                    break;
                }
                if (status != ADI_ADC_STATUS_SUCCESS)
                {
                    break;
                }
                attempts++;
            }
            if (attempts >= ADI_ADC_MAX_ATTEMPTS)
            {
                status = ADI_ADC_STATUS_DATAPATH_CONFIGURATION_FAILED;
            }
        }
    }
    else
    {
        /* Release DSP memory access - Set DSP_MEM_ACCESS_REQ = 0 */
        status = SendCmdAndGetResponse(addr, value, ADI_ADC_RWB_WRITE, ADI_ADC_FRAME_FORMAT_SHORT,
                                       (uint8_t *)&shortResponse);
    }

    return status;
}

/**
 * @brief Sends a command to the ADC. Response is always for the previous command sent.
 * @param addr Register address to access.
 * @param data Data byte to write (or dummy for read).
 * @param readWriteBit 1 for read, 0 for write.
 * @param cmdFormat ADI_ADC_FORMAT_LONG or ADI_ADC_FORMAT_SHORT.
 * @param pResponse Pointer to buffer to receive the response.
 * @return Status of the CRC validation.
 */
static uint32_t SendCmdAndGetResponse(uint16_t addr, uint8_t data, uint8_t readWriteBit,
                                      uint8_t cmdFormat, uint8_t *pResponse)
{
    ADI_ADC_CMD *pCmd;
    uint8_t responseLength = 0;
    uint32_t status = ADI_ADC_STATUS_SUCCESS;
    int32_t spiStatus = 0;
    void *pCommand = NULL;
    if (cmdFormat == ADI_ADC_FRAME_FORMAT_LONG)
    {
        memset(&longCommand, 0xFF, sizeof(ADI_ADC_CMD_LONG_FRAME_ADEMA127));
        pCmd = &longCommand.cmd;
        responseLength = sizeof(ADI_ADC_CMD_LONG_FRAME_ADEMA127);
        pCommand = &longCommand;
    }
    else
    {
        memset(&shortCommand, 0xFF, sizeof(ADI_ADC_CMD_SHORT_FRAME_ADEMA12X));
        pCmd = &shortCommand.cmd;
        responseLength = sizeof(ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X);
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
 * @brief Extracts waveform samples from the ADC response.
 *        Performs sign extension for 24-bit samples.
 * @param pResponse Pointer to the ADC response structure.
 * @param pSamples Pointer to array to store extracted samples.
 */
static void ExtractSamples(ADI_ADC_RESPONSE_LONG_FRAME_ADEMA127 *pResponse, int32_t *pSamples)
{
    uint8_t *pSrc = (uint8_t *)pResponse;
    int32_t val = 0;
    for (uint8_t i = 0; i < ADI_ADC_NUM_CHANNELS; i++)
    {
        /* Form the channel waveform sample by WAV_LO | WAV_MD | WAV_HI */
        val = (int32_t)((pSrc[4 * i + 1]) | (pSrc[4 * i + 2] << 8) | (pSrc[4 * i + 3] << 16));
        /* Sign-extend to 32 bits if the 24-bit number is negative */
        if (val & (1 << 23))
        {
            val |= 0xFF000000; // Set the upper 8 bits to 1s for sign extension
        }
        pSamples[i] = val;
    }
}

/**
 * @brief Assembles a command frame for the ADC.
 * @param readWriteBit 1 for read, 0 for write.
 * @param addr Register address.
 * @param data Data byte to write.
 * @param cmdFormat ADI_ADC_FORMAT_LONG or ADI_ADC_FORMAT_SHORT.
 * @param pAdcCmd Pointer to command structure to populate.
 * @return Status of the operation.
 */
static uint32_t AssembleCommand(uint8_t readWriteBit, uint16_t addr, uint8_t data,
                                uint8_t cmdFormat, ADI_ADC_CMD *pAdcCmd)
{
    uint32_t status = ADI_ADC_STATUS_SUCCESS;

    pAdcCmd->addr = addr & 0xFF; /* Extract lower 8 bits */
    pAdcCmd->data = data;
    pAdcCmd->addrHi = (addr >> 8) & 0x3F; /* Extract bits [8:13] */
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
