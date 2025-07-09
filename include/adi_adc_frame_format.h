/******************************************************************************
 Copyright (c) 2023 - 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file    adi_adc_frame_format.h
 * @brief   Definitions for the ADC frame format.
 * @{
 */

#ifndef __ADI_ADC_FRAME_FORMAT_H__
#define __ADI_ADC_FRAME_FORMAT_H__

/*============= I N C L U D E S =============*/
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*=============  D E F I N I T I O N S  =============*/

/** Maximum number of bytes in a ADC long frame. */
#define ADI_ADC_LONG_FRAME_NBYTES_MAX 32
/** RWB - Read/Write bit definition for register read */
#define ADI_ADC_RWB_READ 1
/** RWB - Read/Write bit definition for register write */
#define ADI_ADC_RWB_WRITE 0
/** Get offset of different positions in an ADC frame */
#define OFFSETOF(TYPE, ELEMENT) ((size_t) & (((TYPE *)0)->ELEMENT))

/**
 * @brief  frame format enumeration definition
 */
typedef enum
{
    /** Short frame format for ADC command and response. */
    ADI_ADC_FRAME_FORMAT_SHORT = 0u,
    /** Long frame format for ADC command and response. */
    ADI_ADC_FRAME_FORMAT_LONG,
} ADI_ADC_FRAME_FORMAT;

/**
 * Structure for the command byte of ADC packet.
 */
typedef struct
{
    uint8_t addrHi : 6; /** High part of the address in ADEMA12x. Reserved in ADE911x and ADE9103 */
    uint8_t formatLong : 1; /** Set this bit to 1 for a long frame structure. Clear this bit to 0
                               for a short frame structure. */
    uint8_t rwb : 1;  /** Set this bit to 1 if an SPI read operation to be executed. Clear this bit
                         to 0 if an SPI write operation is to be executed. */
    uint8_t addr : 8; /** Address of the register to be read or written. */
    uint8_t data : 8; /** Data payload if a write operation is executed. */
    uint8_t crc : 8;  /** Command frame contents protect with 8-bit CRC. */
} ADI_ADC_CMD;

/**
 * Structure for the ADC command response.
 */
typedef struct
{
    uint8_t irq : 1;       /** Command response interrupt bit. */
    uint8_t cmdCrcErr : 1; /** CRC check on the corresponding command frame. */
    uint8_t rsrvd : 1;     /** Reserved.  */
    uint8_t mrid : 3;      /** Indicates which memory region the requested address belongs to in
                              ADEMA12x. Reserved in ADE911x and ADE9103*/
    uint8_t echoLong : 1;  /** Echo of requested command format. 1 for a long format. 0 for short
                              format. */
    uint8_t echoRwb : 1; /** Echo of last issued command. 1 for SPI read operation. 0 for SPI write
                            operation. */

} ADI_ADC_CMD_RESPONSE;

#ifdef __cplusplus
}
#endif

#endif /*__ADI_ADC_FRAME_FORMAT_H__*/

/** @} */
