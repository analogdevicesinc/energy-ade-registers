/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file         adi_ade9178_cmd_format.h
 * @brief        Defines the command and response frame structures and constants for ADE9178 device communication.
 *               This header provides packed structures and macros required to format
 *               commands and interpret responses for the ADE9178 device protocol.
 * @{
 */

#ifndef __ADI_ADE9178_CMD_FORMAT_H__
#define __ADI_ADE9178_CMD_FORMAT_H__

#include <stdint.h>
#include "ade9178.h"

/**
 * @def ADI_ADE9178_RESPONSE_SIZE
 * @brief Number of bytes in the response from ADE9178 for a write command or error.
 */
#define ADI_ADE9178_RESPONSE_SIZE 4

/**
 * @def ADI_ADE9178_CRC_SIZE
 * @brief Number of CRC bytes in the command and response frames.
 */
#define ADI_ADE9178_CRC_SIZE 2

#define ADI_ADE9178_MAX_NUM_REGISTERS (ADE9178_REG_CRC_RSLT - ADE9178_REG_AVRMS + 1) /**< Maximum number of registers that can be accessed in a single command */
/**
 * @brief ADE9178 command frame structure.
 *
 * This structure defines the format of a command sent to the ADE9178 device.
 * The structure is packed to ensure no padding is added between fields.
 */
#pragma pack(push, 1)
typedef struct
{
    uint32_t rwb : 1;         /**< Read/Write bit: 1 = read, 0 = write */
    uint32_t device : 7;      /**< Device number (target device ID) */
    uint32_t numRegisters : 8;/**< Number of registers to access */
    uint32_t addr : 16;       /**< Register address */
    int32_t data;             /**< Data to write or placeholder for read */
    uint16_t crc;             /**< CRC-16 for frame integrity */
} ADI_ADE9178_CMD;

/**
 * @brief ADE9178 generic response structure.
 *
 * Used for reading data from the device. The data array size depends on the number of registers read.
 */
typedef struct
{
    int32_t data[ADI_ADE9178_MAX_NUM_REGISTERS]; /**< Data read from the device (variable length) */
    uint16_t crc;                                /**< CRC-16 for frame integrity */
} ADI_ADE9178_RESPONSE;

/**
 * @brief ADE9178 error response structure.
 *
 * Used when the device returns an error code.
 */
typedef struct
{
    uint32_t errorCode;   /**< Error code indicating the type of error */
    uint16_t crc;         /**< CRC-16 for frame integrity */
} ADI_ADE9178_ERROR_RESPONSE;

/**
 * @brief ADE9178 1x2x ADC response structure.
 *
 * Used for reading two ADC channels, each with current and next data.
 */
typedef struct
{
    uint8_t adc0NextData; /**< ADC0 data for addr+1 */
    uint8_t adc0Data;     /**< ADC0 data for addr */
    uint8_t adc1NextData; /**< ADC1 data for addr+1 */
    uint8_t adc1Data;     /**< ADC1 data for addr */
    uint16_t crc;         /**< CRC-16 for frame integrity */
} ADI_ADE9178_1x2xADC_RESPONSE;

/**
 * @brief ADE9178 3x4x ADC response structure.
 *
 * Used for reading four ADC channels, each with current and next data.
 */
typedef struct
{
    uint8_t adc0NextData; /**< ADC0 data for addr+1 */
    uint8_t adc0Data;     /**< ADC0 data for addr */
    uint8_t adc1NextData; /**< ADC1 data for addr+1 */
    uint8_t adc1Data;     /**< ADC1 data for addr */
    uint8_t adc2NextData; /**< ADC2 data for addr+1 */
    uint8_t adc2Data;     /**< ADC2 data for addr */
    uint8_t adc3NextData; /**< ADC3 data for addr+1 */
    uint8_t adc3Data;     /**< ADC3 data for addr */
    uint16_t crc;         /**< CRC-16 for frame integrity */
} ADI_ADE9178_3x4xADC_RESPONSE;

#pragma pack(pop)

#endif /* __ADI_ADE9178_CMD_FORMAT_H__ */

/**
 * @}
 */