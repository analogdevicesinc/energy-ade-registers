/******************************************************************************
 Copyright (c) 2024 - 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file  crc.h
 * @brief CRC calculation utilities.
 * @addtogroup crc
 * @{
 */

#ifndef __CRC_H__
#define __CRC_H__

#ifdef __cplusplus
extern "C" {
#endif
/*=============  I N C L U D E S  ========*/
#include <stdint.h>
/*=============  D E F I N E S  ========*/
/**< CRC-8 polynomial (x^8 + x^2 + x + 1) */
#define CRC8_POLY (uint32_t)0x7
/**< Initial seed value for CRC-8 calculation */
#define CRC8_SEED (uint32_t)0x0
/**< Final XOR value applied to CRC-8 result */
#define CRC8_XOR_OUT (uint32_t)0x55
/**< CRC-16 polynomial (x^16 + x^12 + x^5 + 1) */
#define CRC16_POLY (uint32_t)0x1021
/**< Initial seed value for CRC-16 calculation */
#define CRC16_SEED (uint32_t)0xFFFF
/**< Final XOR value applied to CRC-16 result */
#define CRC16_XOR_OUT (uint32_t)0x0

/**
 * @brief       calculate 16-bit CRC
 * @param[in]   pBuff  Pointer to data
 * @param[in]   numBytes  number of bytes
 * @return      16-bit crc value
 */
uint32_t CalculateCrc16(uint8_t *pBuff, uint32_t numBytes);

/**
 * @brief       calculate 8-bit CRC
 * @param[in]   pBuff  Pointer to data
 * @param[in]   numBytes  number of bytes
 * @return      8-bit crc value
 */
uint32_t CalculateCrc8(uint8_t *pBuff, uint32_t numBytes);

#ifdef __cplusplus
}
#endif

#endif /* __CRC_H__ */

/**
 * @}
 */
