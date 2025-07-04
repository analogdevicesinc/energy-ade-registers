/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file    adi_ade91xx_frame_format.h
 * @brief    Definitions for ADC Frame format in ADE9113, ADE9112, ADE9103.
 * @defgroup ADC_FRAME Frame formats
 * @{
 */

#ifndef __ADI_ADE91XX_FRAME_FORMAT_H__
#define __ADI_ADE91XX_FRAME_FORMAT_H__

/*============= I N C L U D E S =============*/
#include "adi_adc_frame_format.h"
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*=============  D E F I N I T I O N S  =============*/

/**
 * @brief This section contains the ADC Frame formats.
 * @{
 */

/** Number of bytes in an ADC long frame of ADE9113, ADE9112, ADE9103. */
#define ADI_ADC_LONG_FRAME_NBYTES_ADE91XX (16)

/** Number of bytes in an ADC short frame of ADE9113, ADE9112, ADE9103. */
#define ADI_ADC_SHORT_FRAME_NBYTES_ADE91XX (6)

/**
 * Structure for ADC command frame.
 */
typedef struct
{
    /** Dummy buffer. */
    uint8_t dummy[12];
    /** Command structure for ADC command frame. */
    ADI_ADC_CMD cmd;
} ADI_ADC_CMD_LONG_FRAME_ADE91XX;

/**
 *
 *  Structure for ADC Long frame format.
 */
typedef struct
{
    /** Command response. */
    ADI_ADC_CMD_RESPONSE cmdResponse;
    /** Channel data from ADC in little endian format. */
    uint8_t sample0[3];
    /** Status0 register value. */
    uint8_t status0;
    /** Channel data from ADC in little endian format. */
    uint8_t sample1[3];
    /** Status1 register value. */
    uint8_t status1;
    /** Channel data from ADC in little endian format. */
    uint8_t sample2[3];
    /** Data from register address provided. */
    uint8_t data[2];
    /** CRC for each frame. */
    uint8_t crc[2];
} ADI_ADC_RESPONSE_LONG_FRAME_ADE91XX;

/**
 * Structure for ADC command frame.
 */
typedef struct
{
    /** Dummy buffer. */
    uint8_t dummy[2];
    /** Command structure for ADC command frame. */
    ADI_ADC_CMD cmd;
} ADI_ADC_CMD_SHORT_FRAME_ADE91XX;

/**
 *
 *  Structure for ADC long frame format in ADE91XX.
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
} ADI_ADC_RESPONSE_SHORT_FRAME_ADE91XX;

/** @} */

#ifdef __cplusplus
}
#endif

#endif /*__ADI_ADE91XX_FRAME_FORMAT_H__*/

/** @} */
