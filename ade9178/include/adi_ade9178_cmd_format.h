/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file         adi_ade9178_cmd_format.h
 * @brief        Defines the command frame structure and constants for ADE9178 device communication.
 *               This header provides the packed structure and macros required to format
 *               commands and interpret responses for the ADE9178 device protocol.
 * @{
 */

#ifndef __ADI_ADE9178_CMD_FORMAT_H__
#define __ADI_ADE9178_CMD_FORMAT_H__

#include <stdint.h>

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
#pragma pack(pop)

#endif /* __ADI_ADE9178_CMD_FORMAT_H__*/

/**
 * @}
 */