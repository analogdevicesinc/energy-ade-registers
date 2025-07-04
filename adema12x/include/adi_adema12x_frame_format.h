/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file    adi_adema12x_frame_format.h
 * @brief   Definitions for ADC Frame format in ADEMA124 and ADEMA127.
 * @defgroup ADC_FRAME Frame formats
 * @{
 */

#ifndef __ADI_ADEMA12X_FRAME_FORMAT_H__
#define __ADI_ADEMA12X_FRAME_FORMAT_H__

/*============= I N C L U D E S =============*/
#include "adi_adc_frame_format.h"
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*=============  D E F I N I T I O N S  =============*/

/** @defgroup ADC_FRAME Frame formats
 * @brief This section contains the ADC Frame formats.
 * @{
 */

/** Number of bytes in an ADC long frame of ADEMA124. */
#define ADI_ADC_LONG_FRAME_NBYTES_ADEMA124 (20)

/** Number of bytes in an ADC long frame of ADEMA127. */
#define ADI_ADC_LONG_FRAME_NBYTES_ADEMA127 (32)

/** Number of bytes in an ADC short frame of ADEMA12x. */
#define ADI_ADC_SHORT_FRAME_NBYTES_ADEMA12X (6)

/**
 * Structure for ADC command frame in ADEMA124 (4 channels).
 */
typedef struct
{
    /** Dummy buffer. */
    uint8_t dummy[16];
    /** Command structure for ADC command frame. */
    ADI_ADC_CMD cmd;
} ADI_ADC_CMD_LONG_FRAME_ADEMA124;

/**
 * Structure for ADC command frame in ADEMA127 (7 channels).
 */
typedef struct
{
    /** Dummy buffer. */
    uint8_t dummy[28];
    /** Command structure for ADC command frame. */
    ADI_ADC_CMD cmd;
} ADI_ADC_CMD_LONG_FRAME_ADEMA127;

/**
 * Structure for ADC command short frame in ADEMA12x.
 */
typedef struct
{
    /** Dummy buffer. */
    uint8_t dummy[2];
    /** Command structure for ADC command frame. */
    ADI_ADC_CMD cmd;
} ADI_ADC_CMD_SHORT_FRAME_ADEMA12X;

/**
 *
 *  Structure for ADC Long frame format in ADEMA124 (4 channels).
 */
typedef struct
{
    /** Command response. */
    ADI_ADC_CMD_RESPONSE cmdResponse;
    /** Channel data from ADC in little endian format. */
    uint8_t sample0[3];
    /** Status0. */
    uint8_t status0;
    /** Channel data from ADC in little endian format. */
    uint8_t sample1[3];
    /** Status1. */
    uint8_t status1;
    /** Channel data from ADC in little endian format. */
    uint8_t sample2[3];
    /** Dummy buffer. */
    uint8_t dummy1;
    /** Channel data from ADC in little endian format. */
    uint8_t sample3[3];
    /** Data from register address provided. */
    uint8_t data[2];
    /** CRC for each frame. */
    uint8_t crc[2];
} ADI_ADC_RESPONSE_LONG_FRAME_ADEMA124;

/**
 *
 *  Structure for ADC Long frame format in ADEMA127 (7 channels).
 */
typedef struct
{
    /** Command response. */
    ADI_ADC_CMD_RESPONSE cmdResponse;
    /** Channel data from ADC in little endian format. */
    uint8_t sample0[3];
    /** Status0. */
    uint8_t status0;
    /** Channel data from ADC in little endian format. */
    uint8_t sample1[3];
    /** Status1 */
    uint8_t status1;
    /** Channel data from ADC in little endian format. */
    uint8_t sample2[3];
    /** Dummy buffer. */
    uint8_t dummy1;
    /** Channel data from ADC in little endian format. */
    uint8_t sample3[3];
    /** Dummy buffer. */
    uint8_t dummy2;
    /** Channel data from ADC in little endian format. */
    uint8_t sample4[3];
    /** Dummy buffer. */
    uint8_t dummy3;
    /** Channel data from ADC in little endian format. */
    uint8_t sample5[3];
    /** Dummy buffer. */
    uint8_t dummy4;
    /** Channel data from ADC in little endian format. */
    uint8_t sample6[3];
    /** Data from register address provided. */
    uint8_t data[2];
    /** CRC for each frame. */
    uint8_t crc[2];
} ADI_ADC_RESPONSE_LONG_FRAME_ADEMA127;

/**
 *
 *  Structure for ADC short frame format in ADEMA12x.
 */
typedef struct
{
    /** Command response. */
    ADI_ADC_CMD_RESPONSE cmdResponse;
    /** Status0. */
    uint8_t status0;
    /** Data from register address provided. */
    uint8_t data[2];
    /** CRC for each frame. */
    uint8_t crc[2];
} ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12X;

/** @} */

#ifdef __cplusplus
}
#endif

#endif /*__ADI_ADEMA12X_FRAME_FORMAT_H__*/

/** @} */
