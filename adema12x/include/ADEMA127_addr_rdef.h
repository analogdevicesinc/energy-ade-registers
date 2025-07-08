/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file ADEMA127_addr_rdef.h
 * @addtogroup ADC_HEADERS ADC Headers
 * @{
 */

#ifndef ADEMA127_ADDR_RDEF_H
#define ADEMA127_ADDR_RDEF_H

#if defined(_LANGUAGE_C) || (defined(__GNUC__) && !defined(__ASSEMBLER__))
#include <stdint.h>
#endif /* _LANGUAGE_C */

/* ====================================================================================================
        ADEMA127_MMR_RETAINED Module Instances Address and Mask Definitions
   ====================================================================================================
 */
#define INST_ADEMA127_MMR_RETAINED                                                                 \
    (0X0000U) /* adema127_mmr_retained: ADEMA127 Retained SPI Register Map*/

#ifndef ADEMA127_MMR_RETAINED_ADDR_RDEF_H_
#define ADEMA127_MMR_RETAINED_ADDR_RDEF_H_    /* ADEMA127_MMR_RETAINED: ADEMA127 Retained SPI      \
                                                 Register Map */

#define MASK_ADEMA127_MMR_RETAINED                                                                 \
    (0X3FFFU) /* ADEMA127_MMR_RETAINED: ADEMA127 Retained SPI Register Map */

/* ====================================================================================================
        ADEMA127_MMR_RETAINED Module Register ResetValue Definitions
   ====================================================================================================
 */
#define RSTVAL_ADEMA127_MMR_RETAINED_SWRST                      (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_CONFIG0                    (0XC2U)
#define RSTVAL_ADEMA127_MMR_RETAINED_TDM_STATUS                 (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_ADC_PD                     (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_ADC_CMI                    (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_ADC_GAIN                   (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_ADC_INV                    (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED    (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_TDM_CONFIG                 (0X80U)
#define RSTVAL_ADEMA127_MMR_RETAINED_TDM_THRSH_MSB              (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_TDM_THRSH_LSB              (0X0U)
#define RSTVAL_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_HI (0X22U)
#define RSTVAL_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_LO (0XC7U)

/* ====================================================================================================
        ADEMA127_MMR_RETAINED Module Register BitPositions, Lengths, Masks and Enumerations
   Definitions
   ====================================================================================================
 */

/* ----------------------------------------------------------------------------------------------------
          SWRST                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_SWRST_SWRST (0U)    /* Software Reset */
#define BITL_ADEMA127_MMR_RETAINED_SWRST_SWRST (8U)    /* Software Reset */
#define BITM_ADEMA127_MMR_RETAINED_SWRST_SWRST (0XFFU) /* Software Reset */
#define BITA_ADEMA127_MMR_RETAINED_SWRST_SWRST "W"     /* Software Reset */

#define ENUM_ADEMA127_MMR_RETAINED_SWRST_SWRST_RST       (0XD6U) /* Software Reset Command */
#define ENUM_ADEMA127_MMR_RETAINED_SWRST_SWRST_SWRST_NOP (0X00U) /* Software Reset Register NOP */

/* ----------------------------------------------------------------------------------------------------
          CONFIG0                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG0_CLKOUT_EN (0U)    /* Enable Clock Output on DREADYb */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG0_CLKOUT_EN (1U)    /* Enable Clock Output on DREADYb */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG0_CLKOUT_EN (0X01U) /* Enable Clock Output on DREADYb */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG0_CLKOUT_EN "R/W"   /* Enable Clock Output on DREADYb */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG0_CRC_EN_SPI_WRITE                                        \
    (1U) /* Enables CRC Check on SPI Write */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG0_CRC_EN_SPI_WRITE                                        \
    (1U) /* Enables CRC Check on SPI Write */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG0_CRC_EN_SPI_WRITE                                        \
    (0X02U) /* Enables CRC Check on SPI Write */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG0_CRC_EN_SPI_WRITE                                        \
    "R/W"                                                     /* Enables CRC Check on SPI Write */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG (2U)    /* Stream Debug Mode */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG (2U)    /* Stream Debug Mode */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG (0X0CU) /* Stream Debug Mode */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG "R/W"   /* Stream Debug Mode */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_BUFFER                                           \
    (4U) /* Power Down Bit for the Reference Buffer */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_BUFFER                                           \
    (1U) /* Power Down Bit for the Reference Buffer */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_BUFFER                                           \
    (0X10U) /* Power Down Bit for the Reference Buffer */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_BUFFER                                           \
    "R/W" /* Power Down Bit for the Reference Buffer */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_HP_REF                                           \
    (5U) /* Power Down Bit for the Reference Core */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_HP_REF                                           \
    (1U) /* Power Down Bit for the Reference Core */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_HP_REF                                           \
    (0X20U) /* Power Down Bit for the Reference Core */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG0_REF_PD_HP_REF                                           \
    "R/W" /* Power Down Bit for the Reference Core */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG0_ADC_POWER_MODE (6U)    /* ADC Modulator Power Mode */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG0_ADC_POWER_MODE (2U)    /* ADC Modulator Power Mode */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG0_ADC_POWER_MODE (0XC0U) /* ADC Modulator Power Mode */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG0_ADC_POWER_MODE "R/W"   /* ADC Modulator Power Mode */

#define ENUM_ADEMA127_MMR_RETAINED_CONFIG0_ADC_POWER_MODE_PWR_MODE_QRTR                            \
    (0X00U) /* Quarter Power Mode */
#define ENUM_ADEMA127_MMR_RETAINED_CONFIG0_ADC_POWER_MODE_PWR_MODE_HALF                            \
    (0X02U) /* Half Power Mode */
#define ENUM_ADEMA127_MMR_RETAINED_CONFIG0_ADC_POWER_MODE_PWR_MODE_FULL                            \
    (0X03U) /* Full Performance Mode */
#define ENUM_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG_NORM_OP     (0X00U) /* Normal Mode */
#define ENUM_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG_STATIC_MODE (0X01U) /* WAV Static Mode */
#define ENUM_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG_PROG_INCR                                    \
    (0X02U) /* Data Increments at ADC Conversion Rate */
#define ENUM_ADEMA127_MMR_RETAINED_CONFIG0_STREAM_DBG_RESERVED (0X03U) /* Reserved */

/* ----------------------------------------------------------------------------------------------------
          TDM_STATUS                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_TDM_STATUS_TAMPER_DETECTED (0U) /* Tamper Detect Indicator */
#define BITL_ADEMA127_MMR_RETAINED_TDM_STATUS_TAMPER_DETECTED (1U) /* Tamper Detect Indicator */
#define BITM_ADEMA127_MMR_RETAINED_TDM_STATUS_TAMPER_DETECTED                                      \
    (0X01U)                                                         /* Tamper Detect Indicator     \
                                                                     */
#define BITA_ADEMA127_MMR_RETAINED_TDM_STATUS_TAMPER_DETECTED "R/W" /* Tamper Detect Indicator */

/* ----------------------------------------------------------------------------------------------------
          ADC_PD                                                Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH0 (0U)    /* ADC Channel 0 Power Down */
#define BITL_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH0 (1U)    /* ADC Channel 0 Power Down */
#define BITM_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH0 (0X01U) /* ADC Channel 0 Power Down */
#define BITA_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH0 "R/W"   /* ADC Channel 0 Power Down */
#define BITP_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH1 (1U)    /* ADC Channel 1 Power Down */
#define BITL_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH1 (1U)    /* ADC Channel 1 Power Down */
#define BITM_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH1 (0X02U) /* ADC Channel 1 Power Down */
#define BITA_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH1 "R/W"   /* ADC Channel 1 Power Down */
#define BITP_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH2 (2U)    /* ADC Channel 2 Power Down */
#define BITL_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH2 (1U)    /* ADC Channel 2 Power Down */
#define BITM_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH2 (0X04U) /* ADC Channel 2 Power Down */
#define BITA_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH2 "R/W"   /* ADC Channel 2 Power Down */
#define BITP_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH3 (3U)    /* ADC Channel 3 Power Down */
#define BITL_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH3 (1U)    /* ADC Channel 3 Power Down */
#define BITM_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH3 (0X08U) /* ADC Channel 3 Power Down */
#define BITA_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH3 "R/W"   /* ADC Channel 3 Power Down */
#define BITP_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH4 (4U)    /* ADC Channel 4 Power Down */
#define BITL_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH4 (1U)    /* ADC Channel 4 Power Down */
#define BITM_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH4 (0X10U) /* ADC Channel 4 Power Down */
#define BITA_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH4 "R/W"   /* ADC Channel 4 Power Down */
#define BITP_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH5 (5U)    /* ADC Channel 5 Power Down */
#define BITL_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH5 (1U)    /* ADC Channel 5 Power Down */
#define BITM_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH5 (0X20U) /* ADC Channel 5 Power Down */
#define BITA_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH5 "R/W"   /* ADC Channel 5 Power Down */
#define BITP_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH6 (6U)    /* ADC Channel 6 Power Down */
#define BITL_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH6 (1U)    /* ADC Channel 6 Power Down */
#define BITM_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH6 (0X40U) /* ADC Channel 6 Power Down */
#define BITA_ADEMA127_MMR_RETAINED_ADC_PD_ADC_PD_CH6 "R/W"   /* ADC Channel 6 Power Down */

/* ----------------------------------------------------------------------------------------------------
          ADC_CMI                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH0                                             \
    (0U) /* ADC Channel 0 Input Common Mode Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH0                                             \
    (1U) /* ADC Channel 0 Input Common Mode Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH0                                             \
    (0X01U) /* ADC Channel 0 Input Common Mode Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH0                                             \
    "R/W" /* ADC Channel 0 Input Common Mode Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH1                                             \
    (1U) /* ADC Channel 1 Input Common Mode Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH1                                             \
    (1U) /* ADC Channel 1 Input Common Mode Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH1                                             \
    (0X02U) /* ADC Channel 1 Input Common Mode Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH1                                             \
    "R/W" /* ADC Channel 1 Input Common Mode Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH2                                             \
    (2U) /* ADC Channel 2 Input Common Mode Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH2                                             \
    (1U) /* ADC Channel 2 Input Common Mode Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH2                                             \
    (0X04U) /* ADC Channel 2 Input Common Mode Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH2                                             \
    "R/W" /* ADC Channel 2 Input Common Mode Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH3                                             \
    (3U) /* ADC Channel 3 Input Common Mode Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH3                                             \
    (1U) /* ADC Channel 3 Input Common Mode Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH3                                             \
    (0X08U) /* ADC Channel 3 Input Common Mode Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH3                                             \
    "R/W" /* ADC Channel 3 Input Common Mode Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH4                                             \
    (4U) /* ADC Channel 4 Input Common Mode Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH4                                             \
    (1U) /* ADC Channel 4 Input Common Mode Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH4                                             \
    (0X10U) /* ADC Channel 4 Input Common Mode Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH4                                             \
    "R/W" /* ADC Channel 4 Input Common Mode Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH5                                             \
    (5U) /* ADC Channel 5 Input Common Mode Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH5                                             \
    (1U) /* ADC Channel 5 Input Common Mode Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH5                                             \
    (0X20U) /* ADC Channel 5 Input Common Mode Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH5                                             \
    "R/W" /* ADC Channel 5 Input Common Mode Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH6                                             \
    (6U) /* ADC Channel 6 Input Common Mode Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH6                                             \
    (1U) /* ADC Channel 6 Input Common Mode Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH6                                             \
    (0X40U) /* ADC Channel 6 Input Common Mode Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH6                                             \
    "R/W" /* ADC Channel 6 Input Common Mode Setting */

#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH6_ADC_CMI_0P0 (0X00U) /* 0.0V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH6_ADC_CMI_1P2 (0X01U) /* 1.2V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH5_ADC_CMI_0P0 (0X00U) /* 0.0V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH5_ADC_CMI_1P2 (0X01U) /* 1.2V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH4_ADC_CMI_0P0 (0X00U) /* 0.0V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH4_ADC_CMI_1P2 (0X01U) /* 1.2V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH3_ADC_CMI_0P0 (0X00U) /* 0.0V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH3_ADC_CMI_1P2 (0X01U) /* 1.2V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH2_ADC_CMI_0P0 (0X00U) /* 0.0V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH2_ADC_CMI_1P2 (0X01U) /* 1.2V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH1_ADC_CMI_0P0 (0X00U) /* 0.0V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH1_ADC_CMI_1P2 (0X01U) /* 1.2V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH0_ADC_CMI_0P0 (0X00U) /* 0.0V */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_CMI_ADC_CMI_CH0_ADC_CMI_1P2 (0X01U) /* 1.2V */

/* ----------------------------------------------------------------------------------------------------
          ADC_GAIN                                              Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH0 (0U)    /* ADC Channel 0 Gain Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH0 (1U)    /* ADC Channel 0 Gain Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH0 (0X01U) /* ADC Channel 0 Gain Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH0 "R/W"   /* ADC Channel 0 Gain Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH1 (1U)    /* ADC Channel 1 Gain Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH1 (1U)    /* ADC Channel 1 Gain Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH1 (0X02U) /* ADC Channel 1 Gain Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH1 "R/W"   /* ADC Channel 1 Gain Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH2 (2U)    /* ADC Channel 2 Gain Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH2 (1U)    /* ADC Channel 2 Gain Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH2 (0X04U) /* ADC Channel 2 Gain Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH2 "R/W"   /* ADC Channel 2 Gain Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH3 (3U)    /* ADC Channel 3 Gain Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH3 (1U)    /* ADC Channel 3 Gain Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH3 (0X08U) /* ADC Channel 3 Gain Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH3 "R/W"   /* ADC Channel 3 Gain Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH4 (4U)    /* ADC Channel 4 Gain Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH4 (1U)    /* ADC Channel 4 Gain Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH4 (0X10U) /* ADC Channel 4 Gain Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH4 "R/W"   /* ADC Channel 4 Gain Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH5 (5U)    /* ADC Channel 5 Gain Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH5 (1U)    /* ADC Channel 5 Gain Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH5 (0X20U) /* ADC Channel 5 Gain Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH5 "R/W"   /* ADC Channel 5 Gain Setting */
#define BITP_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH6 (6U)    /* ADC Channel 6 Gain Setting */
#define BITL_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH6 (1U)    /* ADC Channel 6 Gain Setting */
#define BITM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH6 (0X40U) /* ADC Channel 6 Gain Setting */
#define BITA_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH6 "R/W"   /* ADC Channel 6 Gain Setting */

#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH6_ADC_GAIN_X1 (0X00U) /* 1.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH6_ADC_GAIN_X2 (0X01U) /* 2.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH5_ADC_GAIN_X1 (0X00U) /* 1.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH5_ADC_GAIN_X2 (0X01U) /* 2.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH4_ADC_GAIN_X1 (0X00U) /* 1.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH4_ADC_GAIN_X2 (0X01U) /* 2.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH3_ADC_GAIN_X1 (0X00U) /* 1.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH3_ADC_GAIN_X2 (0X01U) /* 2.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH2_ADC_GAIN_X1 (0X00U) /* 1.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH2_ADC_GAIN_X2 (0X01U) /* 2.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH1_ADC_GAIN_X1 (0X00U) /* 1.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH1_ADC_GAIN_X2 (0X01U) /* 2.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH0_ADC_GAIN_X1 (0X00U) /* 1.0x */
#define ENUM_ADEMA127_MMR_RETAINED_ADC_GAIN_ADC_GAIN_CH0_ADC_GAIN_X2 (0X01U) /* 2.0x */

/* ----------------------------------------------------------------------------------------------------
          ADC_INV                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH0 (0U)    /* Invert ADC Channel 0 Inputs */
#define BITL_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH0 (1U)    /* Invert ADC Channel 0 Inputs */
#define BITM_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH0 (0X01U) /* Invert ADC Channel 0 Inputs */
#define BITA_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH0 "R/W"   /* Invert ADC Channel 0 Inputs */
#define BITP_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH1 (1U)    /* Invert ADC Channel 1 Inputs */
#define BITL_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH1 (1U)    /* Invert ADC Channel 1 Inputs */
#define BITM_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH1 (0X02U) /* Invert ADC Channel 1 Inputs */
#define BITA_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH1 "R/W"   /* Invert ADC Channel 1 Inputs */
#define BITP_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH2 (2U)    /* Invert ADC Channel 2 Inputs */
#define BITL_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH2 (1U)    /* Invert ADC Channel 2 Inputs */
#define BITM_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH2 (0X04U) /* Invert ADC Channel 2 Inputs */
#define BITA_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH2 "R/W"   /* Invert ADC Channel 2 Inputs */
#define BITP_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH3 (3U)    /* Invert ADC Channel 3 Inputs */
#define BITL_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH3 (1U)    /* Invert ADC Channel 3 Inputs */
#define BITM_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH3 (0X08U) /* Invert ADC Channel 3 Inputs */
#define BITA_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH3 "R/W"   /* Invert ADC Channel 3 Inputs */
#define BITP_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH4 (4U)    /* Invert ADC Channel 4 Inputs */
#define BITL_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH4 (1U)    /* Invert ADC Channel 4 Inputs */
#define BITM_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH4 (0X10U) /* Invert ADC Channel 4 Inputs */
#define BITA_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH4 "R/W"   /* Invert ADC Channel 4 Inputs */
#define BITP_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH5 (5U)    /* Invert ADC Channel 5 Inputs */
#define BITL_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH5 (1U)    /* Invert ADC Channel 5 Inputs */
#define BITM_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH5 (0X20U) /* Invert ADC Channel 5 Inputs */
#define BITA_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH5 "R/W"   /* Invert ADC Channel 5 Inputs */
#define BITP_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH6 (6U)    /* Invert ADC Channel 6 Inputs */
#define BITL_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH6 (1U)    /* Invert ADC Channel 6 Inputs */
#define BITM_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH6 (0X40U) /* Invert ADC Channel 6 Inputs */
#define BITA_ADEMA127_MMR_RETAINED_ADC_INV_ADC_INV_CH6 "R/W"   /* Invert ADC Channel 6 Inputs */

/* ----------------------------------------------------------------------------------------------------
          CONFIG_CRC_MMR_RETAINED                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_FORCE_MMR_RETAINED                  \
    (0U) /* Force Background Retained Register Map CRC Recalculation. */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_FORCE_MMR_RETAINED                  \
    (1U) /* Force Background Retained Register Map CRC Recalculation. */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_FORCE_MMR_RETAINED                  \
    (0X01U) /* Force Background Retained Register Map CRC Recalculation. */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_FORCE_MMR_RETAINED                  \
    "R/W" /* Force Background Retained Register Map CRC Recalculation. */
#define BITP_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_DONE_MMR_RETAINED                   \
    (1U) /* Retained Register Map CRC Done Flag */
#define BITL_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_DONE_MMR_RETAINED                   \
    (1U) /* Retained Register Map CRC Done Flag */
#define BITM_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_DONE_MMR_RETAINED                   \
    (0X02U) /* Retained Register Map CRC Done Flag */
#define BITA_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED_CRC_DONE_MMR_RETAINED                   \
    "R/W" /* Retained Register Map CRC Done Flag */

/* ----------------------------------------------------------------------------------------------------
          TDM_CONFIG                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM                                              \
    (0U) /* Tamper Detect Number of Samples Exceeding Threshold */
#define BITL_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM                                              \
    (3U) /* Tamper Detect Number of Samples Exceeding Threshold */
#define BITM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM                                              \
    (0X07U) /* Tamper Detect Number of Samples Exceeding Threshold */
#define BITA_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM                                              \
    "R/W" /* Tamper Detect Number of Samples Exceeding Threshold */
#define BITP_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_ALLCH                                            \
    (3U) /* Tamper Detect Indication All Vs Any Channels */
#define BITL_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_ALLCH                                            \
    (1U) /* Tamper Detect Indication All Vs Any Channels */
#define BITM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_ALLCH                                            \
    (0X08U) /* Tamper Detect Indication All Vs Any Channels */
#define BITA_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_ALLCH                                            \
    "R/W" /* Tamper Detect Indication All Vs Any Channels */
#define BITP_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN (4U)    /* Tamper Detect Duration */
#define BITL_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN (3U)    /* Tamper Detect Duration */
#define BITM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN (0X70U) /* Tamper Detect Duration */
#define BITA_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN "R/W"   /* Tamper Detect Duration */
#define BITP_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_DREADYB_EN                                       \
    (7U) /* Tamper Detect DREADYb Enable                                                           \
          */
#define BITL_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_DREADYB_EN                                       \
    (1U) /* Tamper Detect DREADYb Enable                                                           \
          */
#define BITM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_DREADYB_EN                                       \
    (0X80U) /* Tamper Detect DREADYb Enable */
#define BITA_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_DREADYB_EN                                       \
    "R/W" /* Tamper Detect DREADYb Enable */

#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_DREADYB_EN_TDM_DREADYB_DISABLE                   \
    (0X00U) /* TDM DREADYb Disable */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_DREADYB_EN_TDM_DREADYB_ENABLE                    \
    (0X01U) /* TDM DREADYb Enable */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_384_SAMPLES                  \
    (0X00U) /* 53ms                                                                                \
             */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_768_SAMPLES                  \
    (0X01U) /* 106ms */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_1536_SAMPLES                 \
    (0X02U) /* 213ms */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_2304_SAMPLES                 \
    (0X03U) /* 319ms */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_3840_SAMPLES                 \
    (0X04U) /* 531ms */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_5376_SAMPLES                 \
    (0X05U) /* 744ms */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_7680_SAMPLES                 \
    (0X06U) /* 1063ms */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_LEN_CONVERSION_TIME_10752_SAMPLES                \
    (0X07U) /* 1488ms */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_1                \
    (0X00U) /* 1                                                                                   \
             */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_2                \
    (0X01U) /* 2                                                                                   \
             */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_4                \
    (0X02U) /* 4                                                                                   \
             */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_8                \
    (0X03U) /* 8                                                                                   \
             */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_16               \
    (0X04U) /* 16 */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_32               \
    (0X05U) /* 32 */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_64               \
    (0X06U) /* 64 */
#define ENUM_ADEMA127_MMR_RETAINED_TDM_CONFIG_TDM_NUM_SAMPLES_EXCEEDING_THRESHOLD_128              \
    (0X07U) /* 128 */

/* ----------------------------------------------------------------------------------------------------
          TDM_THRSH_MSB                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_TDM_THRSH_MSB_TDM_THRSH (0U)    /* Tamper Detect Threshold */
#define BITL_ADEMA127_MMR_RETAINED_TDM_THRSH_MSB_TDM_THRSH (4U)    /* Tamper Detect Threshold */
#define BITM_ADEMA127_MMR_RETAINED_TDM_THRSH_MSB_TDM_THRSH (0X0FU) /* Tamper Detect Threshold */
#define BITA_ADEMA127_MMR_RETAINED_TDM_THRSH_MSB_TDM_THRSH "R/W"   /* Tamper Detect Threshold */

/* ----------------------------------------------------------------------------------------------------
          TDM_THRSH_LSB                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_TDM_THRSH_LSB_TDM_THRSH (0U)    /* Tamper Detect Threshold */
#define BITL_ADEMA127_MMR_RETAINED_TDM_THRSH_LSB_TDM_THRSH (8U)    /* Tamper Detect Threshold */
#define BITM_ADEMA127_MMR_RETAINED_TDM_THRSH_LSB_TDM_THRSH (0XFFU) /* Tamper Detect Threshold */
#define BITA_ADEMA127_MMR_RETAINED_TDM_THRSH_LSB_TDM_THRSH "R/W"   /* Tamper Detect Threshold */

/* ----------------------------------------------------------------------------------------------------
          CRC_RESULT_MMR_RETAINED_HI                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_HI_CRC_RESULT_MMR_RETAINED              \
    (0U) /* Retained Register Map CRC */
#define BITL_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_HI_CRC_RESULT_MMR_RETAINED              \
    (8U) /* Retained Register Map CRC */
#define BITM_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_HI_CRC_RESULT_MMR_RETAINED              \
    (0XFFU) /* Retained Register Map CRC */
#define BITA_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_HI_CRC_RESULT_MMR_RETAINED              \
    "R" /* Retained Register Map CRC */

/* ----------------------------------------------------------------------------------------------------
          CRC_RESULT_MMR_RETAINED_LO                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_LO_CRC_RESULT_MMR_RETAINED              \
    (0U) /* Retained Register Map CRC */
#define BITL_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_LO_CRC_RESULT_MMR_RETAINED              \
    (8U) /* Retained Register Map CRC */
#define BITM_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_LO_CRC_RESULT_MMR_RETAINED              \
    (0XFFU) /* Retained Register Map CRC */
#define BITA_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_LO_CRC_RESULT_MMR_RETAINED              \
    "R" /* Retained Register Map CRC */

#endif /* end ifndef ADEMA127_MMR_RETAINED_ADDR_RDEF_H_ */

/* ====================================================================================================
        ADEMA127_MMR Module Instances Address and Mask Definitions
   ====================================================================================================
 */
#define INST_ADEMA127_MMR (0X0010U) /* adema127_mmr: ADEMA127 SPI Register Map*/

#ifndef ADEMA127_MMR_ADDR_RDEF_H_
#define ADEMA127_MMR_ADDR_RDEF_H_ /* ADEMA127_MMR: ADEMA127 SPI Register Map */

#define MASK_ADEMA127_MMR (0X3FFFU) /* ADEMA127_MMR: ADEMA127 SPI Register Map */

/* ====================================================================================================
        ADEMA127_MMR Module Register ResetValue Definitions
   ====================================================================================================
 */
#define RSTVAL_ADEMA127_MMR_EFUSE_REFRESH        (0X0U)
#define RSTVAL_ADEMA127_MMR_ACCESS_EXTENDED_MMAP (0X0U)
#define RSTVAL_ADEMA127_MMR_SCRATCH              (0X0U)
#define RSTVAL_ADEMA127_MMR_SYNC_SNAP            (0X0U)
#define RSTVAL_ADEMA127_MMR_SNAPSHOT_COUNT_HI    (0X0U)
#define RSTVAL_ADEMA127_MMR_SNAPSHOT_COUNT_LO    (0X0U)
#define RSTVAL_ADEMA127_MMR_MASK0                (0X0U)
#define RSTVAL_ADEMA127_MMR_MASK1                (0X0U)
#define RSTVAL_ADEMA127_MMR_MASK2                (0X8U)
#define RSTVAL_ADEMA127_MMR_WR_LOCK              (0X5EU)
#define RSTVAL_ADEMA127_MMR_STATUS0              (0X0U)
#define RSTVAL_ADEMA127_MMR_STATUS1              (0X0U)
#define RSTVAL_ADEMA127_MMR_STATUS2              (0X1U)
#define RSTVAL_ADEMA127_MMR_CONFIG_CRC_MMR       (0X0U)
#define RSTVAL_ADEMA127_MMR_V0_WAV_HI            (0X0U)
#define RSTVAL_ADEMA127_MMR_V0_WAV_MD            (0X0U)
#define RSTVAL_ADEMA127_MMR_V0_WAV_LO            (0X0U)
#define RSTVAL_ADEMA127_MMR_V1_WAV_HI            (0X0U)
#define RSTVAL_ADEMA127_MMR_V1_WAV_MD            (0X0U)
#define RSTVAL_ADEMA127_MMR_V1_WAV_LO            (0X0U)
#define RSTVAL_ADEMA127_MMR_V2_WAV_HI            (0X0U)
#define RSTVAL_ADEMA127_MMR_V2_WAV_MD            (0X0U)
#define RSTVAL_ADEMA127_MMR_V2_WAV_LO            (0X0U)
#define RSTVAL_ADEMA127_MMR_V3_WAV_HI            (0X0U)
#define RSTVAL_ADEMA127_MMR_V3_WAV_MD            (0X0U)
#define RSTVAL_ADEMA127_MMR_V3_WAV_LO            (0X0U)
#define RSTVAL_ADEMA127_MMR_V4_WAV_HI            (0X0U)
#define RSTVAL_ADEMA127_MMR_V4_WAV_MD            (0X0U)
#define RSTVAL_ADEMA127_MMR_V4_WAV_LO            (0X0U)
#define RSTVAL_ADEMA127_MMR_V5_WAV_HI            (0X0U)
#define RSTVAL_ADEMA127_MMR_V5_WAV_MD            (0X0U)
#define RSTVAL_ADEMA127_MMR_V5_WAV_LO            (0X0U)
#define RSTVAL_ADEMA127_MMR_V6_WAV_HI            (0X0U)
#define RSTVAL_ADEMA127_MMR_V6_WAV_MD            (0X0U)
#define RSTVAL_ADEMA127_MMR_V6_WAV_LO            (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_LOCK (0X1U)
#define RSTVAL_ADEMA127_MMR_DATARATE             (0X31U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1 (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3 (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5 (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_ALPHA_CH6   (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_CH0  (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_CH1  (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_CH2  (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_CH3  (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_CH4  (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_CH5  (0X0U)
#define RSTVAL_ADEMA127_MMR_DATAPATH_CONFIG_CH6  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH0_HI  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH0_LO  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH1_HI  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH1_LO  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH2_HI  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH2_LO  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH3_HI  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH3_LO  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH4_HI  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH4_LO  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH5_HI  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH5_LO  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH6_HI  (0X0U)
#define RSTVAL_ADEMA127_MMR_PHASE_OFFSET_CH6_LO  (0X0U)
#define RSTVAL_ADEMA127_MMR_CRC_RESULT_MMR_HI    (0X1AU)
#define RSTVAL_ADEMA127_MMR_CRC_RESULT_MMR_LO    (0X4DU)
#define RSTVAL_ADEMA127_MMR_UNIQUE_PART_ID_5     (0X0U)
#define RSTVAL_ADEMA127_MMR_UNIQUE_PART_ID_4     (0X0U)
#define RSTVAL_ADEMA127_MMR_UNIQUE_PART_ID_3     (0X0U)
#define RSTVAL_ADEMA127_MMR_UNIQUE_PART_ID_2     (0X0U)
#define RSTVAL_ADEMA127_MMR_UNIQUE_PART_ID_1     (0X0U)
#define RSTVAL_ADEMA127_MMR_UNIQUE_PART_ID_0     (0X0U)
#define RSTVAL_ADEMA127_MMR_SILICON_REVISION     (0X1U)
#define RSTVAL_ADEMA127_MMR_PRODUCT_ID           (0X16U)

/* ====================================================================================================
        ADEMA127_MMR Module Register BitPositions, Lengths, Masks and Enumerations Definitions
   ====================================================================================================
 */

/* ----------------------------------------------------------------------------------------------------
          EFUSE_REFRESH                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_EFUSE_REFRESH_EFUSE_REFRESH (0U) /* Forces a Refresh of EFuse Memory */
#define BITL_ADEMA127_MMR_EFUSE_REFRESH_EFUSE_REFRESH (1U) /* Forces a Refresh of EFuse Memory */
#define BITM_ADEMA127_MMR_EFUSE_REFRESH_EFUSE_REFRESH                                              \
    (0X01U)                                                 /* Forces a Refresh of EFuse Memory    \
                                                             */
#define BITA_ADEMA127_MMR_EFUSE_REFRESH_EFUSE_REFRESH "R/W" /* Forces a Refresh of EFuse Memory */

/* ----------------------------------------------------------------------------------------------------
          ACCESS_EXTENDED_MMAP                                  Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_ACCESS_EXTENDED_MMAP_DSP_MEM_ACCESS_REQ                                  \
    (0U) /* DSP Memory Access Request from User */
#define BITL_ADEMA127_MMR_ACCESS_EXTENDED_MMAP_DSP_MEM_ACCESS_REQ                                  \
    (1U) /* DSP Memory Access Request from User */
#define BITM_ADEMA127_MMR_ACCESS_EXTENDED_MMAP_DSP_MEM_ACCESS_REQ                                  \
    (0X01U) /* DSP Memory Access Request from User */
#define BITA_ADEMA127_MMR_ACCESS_EXTENDED_MMAP_DSP_MEM_ACCESS_REQ                                  \
    "R/W" /* DSP Memory Access Request from User */

/* ----------------------------------------------------------------------------------------------------
          SCRATCH                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_SCRATCH_SCRATCH (0U)    /* Software Debug */
#define BITL_ADEMA127_MMR_SCRATCH_SCRATCH (8U)    /* Software Debug */
#define BITM_ADEMA127_MMR_SCRATCH_SCRATCH (0XFFU) /* Software Debug */
#define BITA_ADEMA127_MMR_SCRATCH_SCRATCH "R/W"   /* Software Debug */

/* ----------------------------------------------------------------------------------------------------
          SYNC_SNAP                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_SYNC_SNAP_SNAPSHOT       (0U)    /* ADC Snapshot */
#define BITL_ADEMA127_MMR_SYNC_SNAP_SNAPSHOT       (1U)    /* ADC Snapshot */
#define BITM_ADEMA127_MMR_SYNC_SNAP_SNAPSHOT       (0X01U) /* ADC Snapshot */
#define BITA_ADEMA127_MMR_SYNC_SNAP_SNAPSHOT       "R/W"   /* ADC Snapshot */
#define BITP_ADEMA127_MMR_SYNC_SNAP_ALIGN          (1U)    /* ADC Align */
#define BITL_ADEMA127_MMR_SYNC_SNAP_ALIGN          (1U)    /* ADC Align */
#define BITM_ADEMA127_MMR_SYNC_SNAP_ALIGN          (0X02U) /* ADC Align */
#define BITA_ADEMA127_MMR_SYNC_SNAP_ALIGN          "R/W"   /* ADC Align */
#define BITP_ADEMA127_MMR_SYNC_SNAP_PREP_BROADCAST (2U)    /* ADC Prepare Broadcast */
#define BITL_ADEMA127_MMR_SYNC_SNAP_PREP_BROADCAST (1U)    /* ADC Prepare Broadcast */
#define BITM_ADEMA127_MMR_SYNC_SNAP_PREP_BROADCAST (0X04U) /* ADC Prepare Broadcast */
#define BITA_ADEMA127_MMR_SYNC_SNAP_PREP_BROADCAST "R/W"   /* ADC Prepare Broadcast */

/* ----------------------------------------------------------------------------------------------------
          SNAPSHOT_COUNT_HI                                     Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    (0U) /* System Timing Controller Count                                                         \
          */
#define BITL_ADEMA127_MMR_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    (8U) /* System Timing Controller Count                                                         \
          */
#define BITM_ADEMA127_MMR_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    (0XFFU) /* System Timing Controller Count */
#define BITA_ADEMA127_MMR_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    "R" /* System Timing Controller Count                                                          \
         */

/* ----------------------------------------------------------------------------------------------------
          SNAPSHOT_COUNT_LO                                     Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    (0U) /* System Timing Controller Count                                                         \
          */
#define BITL_ADEMA127_MMR_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    (8U) /* System Timing Controller Count                                                         \
          */
#define BITM_ADEMA127_MMR_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    (0XFFU) /* System Timing Controller Count */
#define BITA_ADEMA127_MMR_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    "R" /* System Timing Controller Count                                                          \
         */

/* ----------------------------------------------------------------------------------------------------
          MASK0                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_MASK0_SPI_CRC_ERR_MASK (1U)    /* SPI_CRC_ERR Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK0_SPI_CRC_ERR_MASK (1U)    /* SPI_CRC_ERR Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK0_SPI_CRC_ERR_MASK (0X02U) /* SPI_CRC_ERR Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK0_SPI_CRC_ERR_MASK "R/W"   /* SPI_CRC_ERR Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK0_CRC_CHG_MMR_MASK (3U)    /* CRC_CHG_MMR Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK0_CRC_CHG_MMR_MASK (1U)    /* CRC_CHG_MMR Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK0_CRC_CHG_MMR_MASK (0X08U) /* CRC_CHG_MMR Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK0_CRC_CHG_MMR_MASK "R/W"   /* CRC_CHG_MMR Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK0_CRC_CHG_MMR_RETAINED_MASK                                          \
    (4U) /* CRC_CHG_MMR_RETAINED Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK0_CRC_CHG_MMR_RETAINED_MASK                                          \
    (1U) /* CRC_CHG_MMR_RETAINED Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK0_CRC_CHG_MMR_RETAINED_MASK                                          \
    (0X10U) /* CRC_CHG_MMR_RETAINED Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK0_CRC_CHG_MMR_RETAINED_MASK                                          \
    "R/W"                                             /* CRC_CHG_MMR_RETAINED Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK0_STATUS1X_MASK (7U)    /* STATUS1X Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK0_STATUS1X_MASK (1U)    /* STATUS1X Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK0_STATUS1X_MASK (0X80U) /* STATUS1X Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK0_STATUS1X_MASK "R/W"   /* STATUS1X Interrupt Mask */

/* ----------------------------------------------------------------------------------------------------
          MASK1                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_MASK1_SYNC_SNAP_REQUESTED_MASK                                           \
    (0U) /* SYNC_SNAP_REQUESTED Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_SYNC_SNAP_REQUESTED_MASK                                           \
    (1U) /* SYNC_SNAP_REQUESTED Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_SYNC_SNAP_REQUESTED_MASK                                           \
    (0X01U) /* SYNC_SNAP_REQUESTED Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_SYNC_SNAP_REQUESTED_MASK                                           \
    "R/W"                                                 /* SYNC_SNAP_REQUESTED Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK1_V0_WAV_OVRNG_MASK (1U)    /* V0_WAV_OVRNG Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_V0_WAV_OVRNG_MASK (1U)    /* V0_WAV_OVRNG Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_V0_WAV_OVRNG_MASK (0X02U) /* V0_WAV_OVRNG Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_V0_WAV_OVRNG_MASK "R/W"   /* V0_WAV_OVRNG Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK1_V1_WAV_OVRNG_MASK (2U)    /* V1_WAV_OVRNG Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_V1_WAV_OVRNG_MASK (1U)    /* V1_WAV_OVRNG Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_V1_WAV_OVRNG_MASK (0X04U) /* V1_WAV_OVRNG Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_V1_WAV_OVRNG_MASK "R/W"   /* V1_WAV_OVRNG Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK1_V2_WAV_OVRNG_MASK (3U)    /* V2_WAV_OVRNG Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_V2_WAV_OVRNG_MASK (1U)    /* V2_WAV_OVRNG Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_V2_WAV_OVRNG_MASK (0X08U) /* V2_WAV_OVRNG Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_V2_WAV_OVRNG_MASK "R/W"   /* V2_WAV_OVRNG Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK1_V3_WAV_OVRNG_MASK (4U)    /* V3_WAV_OVRNG Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_V3_WAV_OVRNG_MASK (1U)    /* V3_WAV_OVRNG Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_V3_WAV_OVRNG_MASK (0X10U) /* V3_WAV_OVRNG Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_V3_WAV_OVRNG_MASK "R/W"   /* V3_WAV_OVRNG Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK1_V4_WAV_OVRNG_MASK (5U)    /* V4_WAV_OVRNG Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_V4_WAV_OVRNG_MASK (1U)    /* V4_WAV_OVRNG Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_V4_WAV_OVRNG_MASK (0X20U) /* V4_WAV_OVRNG Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_V4_WAV_OVRNG_MASK "R/W"   /* V4_WAV_OVRNG Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK1_V5_WAV_OVRNG_MASK (6U)    /* V5_WAV_OVRNG Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_V5_WAV_OVRNG_MASK (1U)    /* V5_WAV_OVRNG Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_V5_WAV_OVRNG_MASK (0X40U) /* V5_WAV_OVRNG Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_V5_WAV_OVRNG_MASK "R/W"   /* V5_WAV_OVRNG Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK1_V6_WAV_OVRNG_MASK (7U)    /* V6_WAV_OVRNG Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK1_V6_WAV_OVRNG_MASK (1U)    /* V6_WAV_OVRNG Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK1_V6_WAV_OVRNG_MASK (0X80U) /* V6_WAV_OVRNG Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK1_V6_WAV_OVRNG_MASK "R/W"   /* V6_WAV_OVRNG Interrupt Mask */

/* ----------------------------------------------------------------------------------------------------
          MASK2                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_MASK2_DSP_MEM_ACCESS_READY_MASK                                          \
    (0U) /* DSP_MEM_ACCESS_READY Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK2_DSP_MEM_ACCESS_READY_MASK                                          \
    (1U) /* DSP_MEM_ACCESS_READY Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK2_DSP_MEM_ACCESS_READY_MASK                                          \
    (0X01U) /* DSP_MEM_ACCESS_READY Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK2_DSP_MEM_ACCESS_READY_MASK                                          \
    "R/W" /* DSP_MEM_ACCESS_READY Interrupt Mask */
#define BITP_ADEMA127_MMR_MASK2_ECC_ERR_CORRECTED_MASK (3U) /* ECC_ERR_CORRECTED Interrupt Mask */
#define BITL_ADEMA127_MMR_MASK2_ECC_ERR_CORRECTED_MASK (1U) /* ECC_ERR_CORRECTED Interrupt Mask */
#define BITM_ADEMA127_MMR_MASK2_ECC_ERR_CORRECTED_MASK                                             \
    (0X08U) /* ECC_ERR_CORRECTED Interrupt Mask */
#define BITA_ADEMA127_MMR_MASK2_ECC_ERR_CORRECTED_MASK                                             \
    "R/W" /* ECC_ERR_CORRECTED Interrupt Mask                                                      \
           */

/* ----------------------------------------------------------------------------------------------------
          WR_LOCK                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_WR_LOCK_WR_LOCK (0U)    /* Configuration Register Write Lock */
#define BITL_ADEMA127_MMR_WR_LOCK_WR_LOCK (8U)    /* Configuration Register Write Lock */
#define BITM_ADEMA127_MMR_WR_LOCK_WR_LOCK (0XFFU) /* Configuration Register Write Lock */
#define BITA_ADEMA127_MMR_WR_LOCK_WR_LOCK "R/W"   /* Configuration Register Write Lock */

#define ENUM_ADEMA127_MMR_WR_LOCK_WR_LOCK_CONFIG_LOCK   (0XD4U) /* Lock Key */
#define ENUM_ADEMA127_MMR_WR_LOCK_WR_LOCK_CONFIG_UNLOCK (0X5EU) /* Unlock Key */

/* ----------------------------------------------------------------------------------------------------
          STATUS0                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_STATUS0_SPI_CRC_ERR   (1U)    /* SPI Write CRC Error Interrupt */
#define BITL_ADEMA127_MMR_STATUS0_SPI_CRC_ERR   (1U)    /* SPI Write CRC Error Interrupt */
#define BITM_ADEMA127_MMR_STATUS0_SPI_CRC_ERR   (0X02U) /* SPI Write CRC Error Interrupt */
#define BITA_ADEMA127_MMR_STATUS0_SPI_CRC_ERR   "R/W"   /* SPI Write CRC Error Interrupt */
#define BITP_ADEMA127_MMR_STATUS0_EFUSE_MEM_ERR (2U)    /* EFUSE Memory Error */
#define BITL_ADEMA127_MMR_STATUS0_EFUSE_MEM_ERR (1U)    /* EFUSE Memory Error */
#define BITM_ADEMA127_MMR_STATUS0_EFUSE_MEM_ERR (0X04U) /* EFUSE Memory Error */
#define BITA_ADEMA127_MMR_STATUS0_EFUSE_MEM_ERR "R"     /* EFUSE Memory Error */
#define BITP_ADEMA127_MMR_STATUS0_CRC_CHG_MMR                                                      \
    (3U) /* Register Map Background CRC Change Interrupt */
#define BITL_ADEMA127_MMR_STATUS0_CRC_CHG_MMR                                                      \
    (1U) /* Register Map Background CRC Change Interrupt */
#define BITM_ADEMA127_MMR_STATUS0_CRC_CHG_MMR                                                      \
    (0X08U) /* Register Map Background CRC Change Interrupt */
#define BITA_ADEMA127_MMR_STATUS0_CRC_CHG_MMR                                                      \
    "R/W" /* Register Map Background CRC Change Interrupt */
#define BITP_ADEMA127_MMR_STATUS0_CRC_CHG_MMR_RETAINED                                             \
    (4U) /* Retained Register Map Background CRC Change Interrupt */
#define BITL_ADEMA127_MMR_STATUS0_CRC_CHG_MMR_RETAINED                                             \
    (1U) /* Retained Register Map Background CRC Change Interrupt */
#define BITM_ADEMA127_MMR_STATUS0_CRC_CHG_MMR_RETAINED                                             \
    (0X10U) /* Retained Register Map Background CRC Change Interrupt */
#define BITA_ADEMA127_MMR_STATUS0_CRC_CHG_MMR_RETAINED                                             \
    "R/W" /* Retained Register Map Background CRC Change Interrupt */
#define BITP_ADEMA127_MMR_STATUS0_RESET_DONE (5U)    /* Reset Done or Efuse Refresh Done */
#define BITL_ADEMA127_MMR_STATUS0_RESET_DONE (1U)    /* Reset Done or Efuse Refresh Done */
#define BITM_ADEMA127_MMR_STATUS0_RESET_DONE (0X20U) /* Reset Done or Efuse Refresh Done */
#define BITA_ADEMA127_MMR_STATUS0_RESET_DONE "R/W"   /* Reset Done or Efuse Refresh Done */
#define BITP_ADEMA127_MMR_STATUS0_STATUS2X   (6U)    /* STATUS2 Indicator */
#define BITL_ADEMA127_MMR_STATUS0_STATUS2X   (1U)    /* STATUS2 Indicator */
#define BITM_ADEMA127_MMR_STATUS0_STATUS2X   (0X40U) /* STATUS2 Indicator */
#define BITA_ADEMA127_MMR_STATUS0_STATUS2X   "R"     /* STATUS2 Indicator */
#define BITP_ADEMA127_MMR_STATUS0_STATUS1X   (7U)    /* STATUS1 Indicator */
#define BITL_ADEMA127_MMR_STATUS0_STATUS1X   (1U)    /* STATUS1 Indicator */
#define BITM_ADEMA127_MMR_STATUS0_STATUS1X   (0X80U) /* STATUS1 Indicator */
#define BITA_ADEMA127_MMR_STATUS0_STATUS1X   "R"     /* STATUS1 Indicator */

/* ----------------------------------------------------------------------------------------------------
          STATUS1                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_STATUS1_SYNC_SNAP_REQUESTED (0U)    /* Align or Snapshot Initiated */
#define BITL_ADEMA127_MMR_STATUS1_SYNC_SNAP_REQUESTED (1U)    /* Align or Snapshot Initiated */
#define BITM_ADEMA127_MMR_STATUS1_SYNC_SNAP_REQUESTED (0X01U) /* Align or Snapshot Initiated */
#define BITA_ADEMA127_MMR_STATUS1_SYNC_SNAP_REQUESTED "R/W"   /* Align or Snapshot Initiated */
#define BITP_ADEMA127_MMR_STATUS1_V0_WAV_OVRNG        (1U)    /* ADC Channel 0 Waveform Overrange */
#define BITL_ADEMA127_MMR_STATUS1_V0_WAV_OVRNG        (1U)    /* ADC Channel 0 Waveform Overrange */
#define BITM_ADEMA127_MMR_STATUS1_V0_WAV_OVRNG        (0X02U) /* ADC Channel 0 Waveform Overrange */
#define BITA_ADEMA127_MMR_STATUS1_V0_WAV_OVRNG        "R/W"   /* ADC Channel 0 Waveform Overrange */
#define BITP_ADEMA127_MMR_STATUS1_V1_WAV_OVRNG        (2U)    /* ADC Channel 1 Waveform Overrange */
#define BITL_ADEMA127_MMR_STATUS1_V1_WAV_OVRNG        (1U)    /* ADC Channel 1 Waveform Overrange */
#define BITM_ADEMA127_MMR_STATUS1_V1_WAV_OVRNG        (0X04U) /* ADC Channel 1 Waveform Overrange */
#define BITA_ADEMA127_MMR_STATUS1_V1_WAV_OVRNG        "R/W"   /* ADC Channel 1 Waveform Overrange */
#define BITP_ADEMA127_MMR_STATUS1_V2_WAV_OVRNG        (3U)    /* ADC Channel 2 Waveform Overrange */
#define BITL_ADEMA127_MMR_STATUS1_V2_WAV_OVRNG        (1U)    /* ADC Channel 2 Waveform Overrange */
#define BITM_ADEMA127_MMR_STATUS1_V2_WAV_OVRNG        (0X08U) /* ADC Channel 2 Waveform Overrange */
#define BITA_ADEMA127_MMR_STATUS1_V2_WAV_OVRNG        "R/W"   /* ADC Channel 2 Waveform Overrange */
#define BITP_ADEMA127_MMR_STATUS1_V3_WAV_OVRNG        (4U)    /* ADC Channel 3 Waveform Overrange */
#define BITL_ADEMA127_MMR_STATUS1_V3_WAV_OVRNG        (1U)    /* ADC Channel 3 Waveform Overrange */
#define BITM_ADEMA127_MMR_STATUS1_V3_WAV_OVRNG        (0X10U) /* ADC Channel 3 Waveform Overrange */
#define BITA_ADEMA127_MMR_STATUS1_V3_WAV_OVRNG        "R/W"   /* ADC Channel 3 Waveform Overrange */
#define BITP_ADEMA127_MMR_STATUS1_V4_WAV_OVRNG        (5U)    /* ADC Channel 4 Waveform Overrange */
#define BITL_ADEMA127_MMR_STATUS1_V4_WAV_OVRNG        (1U)    /* ADC Channel 4 Waveform Overrange */
#define BITM_ADEMA127_MMR_STATUS1_V4_WAV_OVRNG        (0X20U) /* ADC Channel 4 Waveform Overrange */
#define BITA_ADEMA127_MMR_STATUS1_V4_WAV_OVRNG        "R/W"   /* ADC Channel 4 Waveform Overrange */
#define BITP_ADEMA127_MMR_STATUS1_V5_WAV_OVRNG        (6U)    /* ADC Channel 5 Waveform Overrange */
#define BITL_ADEMA127_MMR_STATUS1_V5_WAV_OVRNG        (1U)    /* ADC Channel 5 Waveform Overrange */
#define BITM_ADEMA127_MMR_STATUS1_V5_WAV_OVRNG        (0X40U) /* ADC Channel 5 Waveform Overrange */
#define BITA_ADEMA127_MMR_STATUS1_V5_WAV_OVRNG        "R/W"   /* ADC Channel 5 Waveform Overrange */
#define BITP_ADEMA127_MMR_STATUS1_V6_WAV_OVRNG        (7U)    /* ADC Channel 6 Waveform Overrange */
#define BITL_ADEMA127_MMR_STATUS1_V6_WAV_OVRNG        (1U)    /* ADC Channel 6 Waveform Overrange */
#define BITM_ADEMA127_MMR_STATUS1_V6_WAV_OVRNG        (0X80U) /* ADC Channel 6 Waveform Overrange */
#define BITA_ADEMA127_MMR_STATUS1_V6_WAV_OVRNG        "R/W"   /* ADC Channel 6 Waveform Overrange */

/* ----------------------------------------------------------------------------------------------------
          STATUS2                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_STATUS2_DSP_MEM_ACCESS_READY                                             \
    (0U) /* DSP Memory Access Ready from DSP to User */
#define BITL_ADEMA127_MMR_STATUS2_DSP_MEM_ACCESS_READY                                             \
    (1U) /* DSP Memory Access Ready from DSP to User */
#define BITM_ADEMA127_MMR_STATUS2_DSP_MEM_ACCESS_READY                                             \
    (0X01U) /* DSP Memory Access Ready from DSP to User */
#define BITA_ADEMA127_MMR_STATUS2_DSP_MEM_ACCESS_READY                                             \
    "R"                                             /* DSP Memory Access Ready from DSP to User */
#define BITP_ADEMA127_MMR_STATUS2_WATCHDOG_ERR (1U) /* Watchdog Timeout Error */
#define BITL_ADEMA127_MMR_STATUS2_WATCHDOG_ERR (1U) /* Watchdog Timeout Error */
#define BITM_ADEMA127_MMR_STATUS2_WATCHDOG_ERR (0X02U) /* Watchdog Timeout Error */
#define BITA_ADEMA127_MMR_STATUS2_WATCHDOG_ERR "R/W"   /* Watchdog Timeout Error */
#define BITP_ADEMA127_MMR_STATUS2_DSP_INSTRUCTION_ERR                                              \
    (2U) /* Invalid DSP Instruction or Invalid DSP Memory Pointer */
#define BITL_ADEMA127_MMR_STATUS2_DSP_INSTRUCTION_ERR                                              \
    (1U) /* Invalid DSP Instruction or Invalid DSP Memory Pointer */
#define BITM_ADEMA127_MMR_STATUS2_DSP_INSTRUCTION_ERR                                              \
    (0X04U) /* Invalid DSP Instruction or Invalid DSP Memory Pointer */
#define BITA_ADEMA127_MMR_STATUS2_DSP_INSTRUCTION_ERR                                              \
    "R" /* Invalid DSP Instruction or Invalid DSP Memory Pointer */
#define BITP_ADEMA127_MMR_STATUS2_ECC_ERR_CORRECTED   (3U)    /* DSP Memory Error Corrected */
#define BITL_ADEMA127_MMR_STATUS2_ECC_ERR_CORRECTED   (1U)    /* DSP Memory Error Corrected */
#define BITM_ADEMA127_MMR_STATUS2_ECC_ERR_CORRECTED   (0X08U) /* DSP Memory Error Corrected */
#define BITA_ADEMA127_MMR_STATUS2_ECC_ERR_CORRECTED   "R"     /* DSP Memory Error Corrected */
#define BITP_ADEMA127_MMR_STATUS2_PROGRAM_ROM_ECC_ERR (4U)    /* DSP Program ROM Read Error */
#define BITL_ADEMA127_MMR_STATUS2_PROGRAM_ROM_ECC_ERR (1U)    /* DSP Program ROM Read Error */
#define BITM_ADEMA127_MMR_STATUS2_PROGRAM_ROM_ECC_ERR (0X10U) /* DSP Program ROM Read Error */
#define BITA_ADEMA127_MMR_STATUS2_PROGRAM_ROM_ECC_ERR "R"     /* DSP Program ROM Read Error */
#define BITP_ADEMA127_MMR_STATUS2_COEFF_ROM_ECC_ERR   (5U)    /* DSP Coefficient ROM Read Error */
#define BITL_ADEMA127_MMR_STATUS2_COEFF_ROM_ECC_ERR   (1U)    /* DSP Coefficient ROM Read Error */
#define BITM_ADEMA127_MMR_STATUS2_COEFF_ROM_ECC_ERR   (0X20U) /* DSP Coefficient ROM Read Error */
#define BITA_ADEMA127_MMR_STATUS2_COEFF_ROM_ECC_ERR   "R"     /* DSP Coefficient ROM Read Error */
#define BITP_ADEMA127_MMR_STATUS2_COEFF_RAM_ECC_ERR   (6U)    /* DSP Coefficient RAM Read Error */
#define BITL_ADEMA127_MMR_STATUS2_COEFF_RAM_ECC_ERR   (1U)    /* DSP Coefficient RAM Read Error */
#define BITM_ADEMA127_MMR_STATUS2_COEFF_RAM_ECC_ERR   (0X40U) /* DSP Coefficient RAM Read Error */
#define BITA_ADEMA127_MMR_STATUS2_COEFF_RAM_ECC_ERR   "R"     /* DSP Coefficient RAM Read Error */
#define BITP_ADEMA127_MMR_STATUS2_DATA_RAM_ECC_ERR    (7U)    /* DSP Data RAM Read Error */
#define BITL_ADEMA127_MMR_STATUS2_DATA_RAM_ECC_ERR    (1U)    /* DSP Data RAM Read Error */
#define BITM_ADEMA127_MMR_STATUS2_DATA_RAM_ECC_ERR    (0X80U) /* DSP Data RAM Read Error */
#define BITA_ADEMA127_MMR_STATUS2_DATA_RAM_ECC_ERR    "R"     /* DSP Data RAM Read Error */

/* ----------------------------------------------------------------------------------------------------
          CONFIG_CRC_MMR                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_FORCE_MMR                                             \
    (0U) /* Force Background Register Map CRC Recalculation */
#define BITL_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_FORCE_MMR                                             \
    (1U) /* Force Background Register Map CRC Recalculation */
#define BITM_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_FORCE_MMR                                             \
    (0X01U) /* Force Background Register Map CRC Recalculation */
#define BITA_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_FORCE_MMR                                             \
    "R/W" /* Force Background Register Map CRC Recalculation */
#define BITP_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_DONE_MMR (1U)    /* CRC Done Flag */
#define BITL_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_DONE_MMR (1U)    /* CRC Done Flag */
#define BITM_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_DONE_MMR (0X02U) /* CRC Done Flag */
#define BITA_ADEMA127_MMR_CONFIG_CRC_MMR_CRC_DONE_MMR "R/W"   /* CRC Done Flag */

/* ----------------------------------------------------------------------------------------------------
          V0_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V0_WAV_HI_V0_WAV (0U)    /* ADC Channel 0 Waveform Data */
#define BITL_ADEMA127_MMR_V0_WAV_HI_V0_WAV (8U)    /* ADC Channel 0 Waveform Data */
#define BITM_ADEMA127_MMR_V0_WAV_HI_V0_WAV (0XFFU) /* ADC Channel 0 Waveform Data */
#define BITA_ADEMA127_MMR_V0_WAV_HI_V0_WAV "R/W"   /* ADC Channel 0 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V0_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V0_WAV_MD_V0_WAV (0U)    /* ADC Channel 0 Waveform Data */
#define BITL_ADEMA127_MMR_V0_WAV_MD_V0_WAV (8U)    /* ADC Channel 0 Waveform Data */
#define BITM_ADEMA127_MMR_V0_WAV_MD_V0_WAV (0XFFU) /* ADC Channel 0 Waveform Data */
#define BITA_ADEMA127_MMR_V0_WAV_MD_V0_WAV "R/W"   /* ADC Channel 0 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V0_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V0_WAV_LO_V0_WAV (0U)    /* ADC Channel 0 Waveform Data */
#define BITL_ADEMA127_MMR_V0_WAV_LO_V0_WAV (8U)    /* ADC Channel 0 Waveform Data */
#define BITM_ADEMA127_MMR_V0_WAV_LO_V0_WAV (0XFFU) /* ADC Channel 0 Waveform Data */
#define BITA_ADEMA127_MMR_V0_WAV_LO_V0_WAV "R/W"   /* ADC Channel 0 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V1_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V1_WAV_HI_V1_WAV (0U)    /* ADC Channel 1 Waveform Data */
#define BITL_ADEMA127_MMR_V1_WAV_HI_V1_WAV (8U)    /* ADC Channel 1 Waveform Data */
#define BITM_ADEMA127_MMR_V1_WAV_HI_V1_WAV (0XFFU) /* ADC Channel 1 Waveform Data */
#define BITA_ADEMA127_MMR_V1_WAV_HI_V1_WAV "R/W"   /* ADC Channel 1 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V1_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V1_WAV_MD_V1_WAV (0U)    /* ADC Channel 1 Waveform Data */
#define BITL_ADEMA127_MMR_V1_WAV_MD_V1_WAV (8U)    /* ADC Channel 1 Waveform Data */
#define BITM_ADEMA127_MMR_V1_WAV_MD_V1_WAV (0XFFU) /* ADC Channel 1 Waveform Data */
#define BITA_ADEMA127_MMR_V1_WAV_MD_V1_WAV "R/W"   /* ADC Channel 1 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V1_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V1_WAV_LO_V1_WAV (0U)    /* ADC Channel 1 Waveform Data */
#define BITL_ADEMA127_MMR_V1_WAV_LO_V1_WAV (8U)    /* ADC Channel 1 Waveform Data */
#define BITM_ADEMA127_MMR_V1_WAV_LO_V1_WAV (0XFFU) /* ADC Channel 1 Waveform Data */
#define BITA_ADEMA127_MMR_V1_WAV_LO_V1_WAV "R/W"   /* ADC Channel 1 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V2_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V2_WAV_HI_V2_WAV (0U)    /* ADC Channel 2 Waveform Data */
#define BITL_ADEMA127_MMR_V2_WAV_HI_V2_WAV (8U)    /* ADC Channel 2 Waveform Data */
#define BITM_ADEMA127_MMR_V2_WAV_HI_V2_WAV (0XFFU) /* ADC Channel 2 Waveform Data */
#define BITA_ADEMA127_MMR_V2_WAV_HI_V2_WAV "R/W"   /* ADC Channel 2 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V2_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V2_WAV_MD_V2_WAV (0U)    /* ADC Channel 2 Waveform Data */
#define BITL_ADEMA127_MMR_V2_WAV_MD_V2_WAV (8U)    /* ADC Channel 2 Waveform Data */
#define BITM_ADEMA127_MMR_V2_WAV_MD_V2_WAV (0XFFU) /* ADC Channel 2 Waveform Data */
#define BITA_ADEMA127_MMR_V2_WAV_MD_V2_WAV "R/W"   /* ADC Channel 2 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V2_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V2_WAV_LO_V2_WAV (0U)    /* ADC Channel 2 Waveform Data */
#define BITL_ADEMA127_MMR_V2_WAV_LO_V2_WAV (8U)    /* ADC Channel 2 Waveform Data */
#define BITM_ADEMA127_MMR_V2_WAV_LO_V2_WAV (0XFFU) /* ADC Channel 2 Waveform Data */
#define BITA_ADEMA127_MMR_V2_WAV_LO_V2_WAV "R/W"   /* ADC Channel 2 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V3_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V3_WAV_HI_V3_WAV (0U)    /* ADC Channel 3 Waveform Data */
#define BITL_ADEMA127_MMR_V3_WAV_HI_V3_WAV (8U)    /* ADC Channel 3 Waveform Data */
#define BITM_ADEMA127_MMR_V3_WAV_HI_V3_WAV (0XFFU) /* ADC Channel 3 Waveform Data */
#define BITA_ADEMA127_MMR_V3_WAV_HI_V3_WAV "R/W"   /* ADC Channel 3 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V3_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V3_WAV_MD_V3_WAV (0U)    /* ADC Channel 3 Waveform Data */
#define BITL_ADEMA127_MMR_V3_WAV_MD_V3_WAV (8U)    /* ADC Channel 3 Waveform Data */
#define BITM_ADEMA127_MMR_V3_WAV_MD_V3_WAV (0XFFU) /* ADC Channel 3 Waveform Data */
#define BITA_ADEMA127_MMR_V3_WAV_MD_V3_WAV "R/W"   /* ADC Channel 3 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V3_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V3_WAV_LO_V3_WAV (0U)    /* ADC Channel 3 Waveform Data */
#define BITL_ADEMA127_MMR_V3_WAV_LO_V3_WAV (8U)    /* ADC Channel 3 Waveform Data */
#define BITM_ADEMA127_MMR_V3_WAV_LO_V3_WAV (0XFFU) /* ADC Channel 3 Waveform Data */
#define BITA_ADEMA127_MMR_V3_WAV_LO_V3_WAV "R/W"   /* ADC Channel 3 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V4_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V4_WAV_HI_V4_WAV (0U)    /* ADC Channel 4 Waveform Data */
#define BITL_ADEMA127_MMR_V4_WAV_HI_V4_WAV (8U)    /* ADC Channel 4 Waveform Data */
#define BITM_ADEMA127_MMR_V4_WAV_HI_V4_WAV (0XFFU) /* ADC Channel 4 Waveform Data */
#define BITA_ADEMA127_MMR_V4_WAV_HI_V4_WAV "R/W"   /* ADC Channel 4 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V4_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V4_WAV_MD_V4_WAV (0U)    /* ADC Channel 4 Waveform Data */
#define BITL_ADEMA127_MMR_V4_WAV_MD_V4_WAV (8U)    /* ADC Channel 4 Waveform Data */
#define BITM_ADEMA127_MMR_V4_WAV_MD_V4_WAV (0XFFU) /* ADC Channel 4 Waveform Data */
#define BITA_ADEMA127_MMR_V4_WAV_MD_V4_WAV "R/W"   /* ADC Channel 4 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V4_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V4_WAV_LO_V4_WAV (0U)    /* ADC Channel 4 Waveform Data */
#define BITL_ADEMA127_MMR_V4_WAV_LO_V4_WAV (8U)    /* ADC Channel 4 Waveform Data */
#define BITM_ADEMA127_MMR_V4_WAV_LO_V4_WAV (0XFFU) /* ADC Channel 4 Waveform Data */
#define BITA_ADEMA127_MMR_V4_WAV_LO_V4_WAV "R/W"   /* ADC Channel 4 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V5_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V5_WAV_HI_V5_WAV (0U)    /* ADC Channel 5 Waveform Data */
#define BITL_ADEMA127_MMR_V5_WAV_HI_V5_WAV (8U)    /* ADC Channel 5 Waveform Data */
#define BITM_ADEMA127_MMR_V5_WAV_HI_V5_WAV (0XFFU) /* ADC Channel 5 Waveform Data */
#define BITA_ADEMA127_MMR_V5_WAV_HI_V5_WAV "R/W"   /* ADC Channel 5 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V5_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V5_WAV_MD_V5_WAV (0U)    /* ADC Channel 5 Waveform Data */
#define BITL_ADEMA127_MMR_V5_WAV_MD_V5_WAV (8U)    /* ADC Channel 5 Waveform Data */
#define BITM_ADEMA127_MMR_V5_WAV_MD_V5_WAV (0XFFU) /* ADC Channel 5 Waveform Data */
#define BITA_ADEMA127_MMR_V5_WAV_MD_V5_WAV "R/W"   /* ADC Channel 5 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V5_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V5_WAV_LO_V5_WAV (0U)    /* ADC Channel 5 Waveform Data */
#define BITL_ADEMA127_MMR_V5_WAV_LO_V5_WAV (8U)    /* ADC Channel 5 Waveform Data */
#define BITM_ADEMA127_MMR_V5_WAV_LO_V5_WAV (0XFFU) /* ADC Channel 5 Waveform Data */
#define BITA_ADEMA127_MMR_V5_WAV_LO_V5_WAV "R/W"   /* ADC Channel 5 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V6_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V6_WAV_HI_V6_WAV (0U)    /* ADC Channel 6 Waveform Data */
#define BITL_ADEMA127_MMR_V6_WAV_HI_V6_WAV (8U)    /* ADC Channel 6 Waveform Data */
#define BITM_ADEMA127_MMR_V6_WAV_HI_V6_WAV (0XFFU) /* ADC Channel 6 Waveform Data */
#define BITA_ADEMA127_MMR_V6_WAV_HI_V6_WAV "R/W"   /* ADC Channel 6 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V6_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V6_WAV_MD_V6_WAV (0U)    /* ADC Channel 6 Waveform Data */
#define BITL_ADEMA127_MMR_V6_WAV_MD_V6_WAV (8U)    /* ADC Channel 6 Waveform Data */
#define BITM_ADEMA127_MMR_V6_WAV_MD_V6_WAV (0XFFU) /* ADC Channel 6 Waveform Data */
#define BITA_ADEMA127_MMR_V6_WAV_MD_V6_WAV "R/W"   /* ADC Channel 6 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V6_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_V6_WAV_LO_V6_WAV (0U)    /* ADC Channel 6 Waveform Data */
#define BITL_ADEMA127_MMR_V6_WAV_LO_V6_WAV (8U)    /* ADC Channel 6 Waveform Data */
#define BITM_ADEMA127_MMR_V6_WAV_LO_V6_WAV (0XFFU) /* ADC Channel 6 Waveform Data */
#define BITA_ADEMA127_MMR_V6_WAV_LO_V6_WAV "R/W"   /* ADC Channel 6 Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_LOCK                                  Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_LOCK_DATAPATH_CONFIG_LOCK                                \
    (0U) /* Datapath Configuration Lock */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_LOCK_DATAPATH_CONFIG_LOCK                                \
    (1U) /* Datapath Configuration Lock */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_LOCK_DATAPATH_CONFIG_LOCK                                \
    (0X01U) /* Datapath Configuration Lock */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_LOCK_DATAPATH_CONFIG_LOCK                                \
    "R/W" /* Datapath Configuration Lock */

/* ----------------------------------------------------------------------------------------------------
          DATARATE                                              Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATARATE_DECIMATION_RATE   (0U)    /* Decimation Rate */
#define BITL_ADEMA127_MMR_DATARATE_DECIMATION_RATE   (4U)    /* Decimation Rate */
#define BITM_ADEMA127_MMR_DATARATE_DECIMATION_RATE   (0X0FU) /* Decimation Rate */
#define BITA_ADEMA127_MMR_DATARATE_DECIMATION_RATE   "R/W"   /* Decimation Rate */
#define BITP_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER (4U)    /* ADC Clock Prescaler */
#define BITL_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER (3U)    /* ADC Clock Prescaler */
#define BITM_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER (0X70U) /* ADC Clock Prescaler */
#define BITA_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER "R/W"   /* ADC Clock Prescaler */
#define BITP_ADEMA127_MMR_DATARATE_DSP_DECIMATION_X2                                               \
    (7U) /* Add a Decimate by 2 in the Data Path                                                   \
          */
#define BITL_ADEMA127_MMR_DATARATE_DSP_DECIMATION_X2                                               \
    (1U) /* Add a Decimate by 2 in the Data Path                                                   \
          */
#define BITM_ADEMA127_MMR_DATARATE_DSP_DECIMATION_X2                                               \
    (0X80U) /* Add a Decimate by 2 in the Data Path */
#define BITA_ADEMA127_MMR_DATARATE_DSP_DECIMATION_X2                                               \
    "R/W" /* Add a Decimate by 2 in the Data Path */

#define ENUM_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER_PRESCALER_DIV_2  (0X01U) /* Div 2 */
#define ENUM_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER_PRESCALER_DIV_4  (0X02U) /* Div 4 */
#define ENUM_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER_PRESCALER_DIV_8  (0X03U) /* Div 8 */
#define ENUM_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER_PRESCALER_DIV_16 (0X04U) /* Div 16 */
#define ENUM_ADEMA127_MMR_DATARATE_ADC_CLK_PRESCALER_PRESCALER_DIV_32 (0X05U) /* Div 32 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_32        (0X00U) /* Div 32 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_64        (0X01U) /* Div 64 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_128       (0X02U) /* Div 128 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_256       (0X03U) /* Div 256 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_512       (0X04U) /* Div 512 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_1024      (0X05U) /* Div 1024 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_2048      (0X06U) /* Div 2048 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_4096      (0X07U) /* Div 4096 */
#define ENUM_ADEMA127_MMR_DATARATE_DECIMATION_RATE_DECI_DIV_8192      (0X08U) /* Div 8192 */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_ALPHA_CH0_1                                  Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0                                           \
    (0U) /* DC Blocking Filter Alpha Setting for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0                                           \
    (0X0FU) /* DC Blocking Filter Alpha Setting for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0                                           \
    "R/W" /* DC Blocking Filter Alpha Setting for Channel 0 */
#define BITP_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1                                           \
    (0XF0U) /* DC Blocking Filter Alpha Setting for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1                                           \
    "R/W" /* DC Blocking Filter Alpha Setting for Channel 1 */

#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_BYPASS     (0X00U) /* Filter Bypassed */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA4     (0X01U) /* Alpha = 1/4 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA8     (0X02U) /* Alpha = 1/8 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA16    (0X03U) /* Alpha = 1/16 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA32    (0X04U) /* Alpha = 1/32 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA64    (0X05U) /* Alpha = 1/64 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA128   (0X06U) /* Alpha = 1/128 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA256   (0X07U) /* Alpha = 1/256 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA512   (0X08U) /* Alpha = 1/512 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA1024  (0X09U) /* Alpha = 1/1024 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA2048  (0X0AU) /* Alpha = 1/2048 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA4096  (0X0BU) /* Alpha = 1/4096 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA8192  (0X0CU) /* Alpha = 1/8192 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA16384 (0X0DU) /* Alpha = 1/16384 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA32768 (0X0EU) /* Alpha = 1/32768 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH1_ALPHA65536 (0X0FU) /* Alpha = 1/65536 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_BYPASS     (0X00U) /* Filter Bypassed */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA4     (0X01U) /* Alpha = 1/4 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA8     (0X02U) /* Alpha = 1/8 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA16    (0X03U) /* Alpha = 1/16 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA32    (0X04U) /* Alpha = 1/32 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA64    (0X05U) /* Alpha = 1/64 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA128   (0X06U) /* Alpha = 1/128 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA256   (0X07U) /* Alpha = 1/256 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA512   (0X08U) /* Alpha = 1/512 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA1024  (0X09U) /* Alpha = 1/1024 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA2048  (0X0AU) /* Alpha = 1/2048 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA4096  (0X0BU) /* Alpha = 1/4096 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA8192  (0X0CU) /* Alpha = 1/8192 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA16384 (0X0DU) /* Alpha = 1/16384 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA32768 (0X0EU) /* Alpha = 1/32768 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1_ALPHA_CH0_ALPHA65536 (0X0FU) /* Alpha = 1/65536 */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_ALPHA_CH2_3                                  Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2                                           \
    (0U) /* DC Blocking Filter Alpha Setting for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2                                           \
    (0X0FU) /* DC Blocking Filter Alpha Setting for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2                                           \
    "R/W" /* DC Blocking Filter Alpha Setting for Channel 2 */
#define BITP_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3                                           \
    (0XF0U) /* DC Blocking Filter Alpha Setting for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3                                           \
    "R/W" /* DC Blocking Filter Alpha Setting for Channel 3 */

#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_BYPASS     (0X00U) /* Filter Bypassed */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA4     (0X01U) /* Alpha = 1/4 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA8     (0X02U) /* Alpha = 1/8 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA16    (0X03U) /* Alpha = 1/16 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA32    (0X04U) /* Alpha = 1/32 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA64    (0X05U) /* Alpha = 1/64 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA128   (0X06U) /* Alpha = 1/128 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA256   (0X07U) /* Alpha = 1/256 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA512   (0X08U) /* Alpha = 1/512 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA1024  (0X09U) /* Alpha = 1/1024 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA2048  (0X0AU) /* Alpha = 1/2048 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA4096  (0X0BU) /* Alpha = 1/4096 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA8192  (0X0CU) /* Alpha = 1/8192 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA16384 (0X0DU) /* Alpha = 1/16384 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA32768 (0X0EU) /* Alpha = 1/32768 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH3_ALPHA65536 (0X0FU) /* Alpha = 1/65536 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_BYPASS     (0X00U) /* Filter Bypassed */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA4     (0X01U) /* Alpha = 1/4 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA8     (0X02U) /* Alpha = 1/8 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA16    (0X03U) /* Alpha = 1/16 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA32    (0X04U) /* Alpha = 1/32 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA64    (0X05U) /* Alpha = 1/64 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA128   (0X06U) /* Alpha = 1/128 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA256   (0X07U) /* Alpha = 1/256 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA512   (0X08U) /* Alpha = 1/512 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA1024  (0X09U) /* Alpha = 1/1024 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA2048  (0X0AU) /* Alpha = 1/2048 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA4096  (0X0BU) /* Alpha = 1/4096 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA8192  (0X0CU) /* Alpha = 1/8192 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA16384 (0X0DU) /* Alpha = 1/16384 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA32768 (0X0EU) /* Alpha = 1/32768 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3_ALPHA_CH2_ALPHA65536 (0X0FU) /* Alpha = 1/65536 */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_ALPHA_CH4_5                                  Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4                                           \
    (0U) /* DC Blocking Filter Alpha Setting for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4                                           \
    (0X0FU) /* DC Blocking Filter Alpha Setting for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4                                           \
    "R/W" /* DC Blocking Filter Alpha Setting for Channel 4 */
#define BITP_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5                                           \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5                                           \
    (0XF0U) /* DC Blocking Filter Alpha Setting for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5                                           \
    "R/W" /* DC Blocking Filter Alpha Setting for Channel 5 */

#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_BYPASS     (0X00U) /* Filter Bypassed */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA4     (0X01U) /* Alpha = 1/4 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA8     (0X02U) /* Alpha = 1/8 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA16    (0X03U) /* Alpha = 1/16 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA32    (0X04U) /* Alpha = 1/32 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA64    (0X05U) /* Alpha = 1/64 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA128   (0X06U) /* Alpha = 1/128 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA256   (0X07U) /* Alpha = 1/256 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA512   (0X08U) /* Alpha = 1/512 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA1024  (0X09U) /* Alpha = 1/1024 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA2048  (0X0AU) /* Alpha = 1/2048 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA4096  (0X0BU) /* Alpha = 1/4096 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA8192  (0X0CU) /* Alpha = 1/8192 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA16384 (0X0DU) /* Alpha = 1/16384 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA32768 (0X0EU) /* Alpha = 1/32768 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH5_ALPHA65536 (0X0FU) /* Alpha = 1/65536 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_BYPASS     (0X00U) /* Filter Bypassed */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA4     (0X01U) /* Alpha = 1/4 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA8     (0X02U) /* Alpha = 1/8 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA16    (0X03U) /* Alpha = 1/16 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA32    (0X04U) /* Alpha = 1/32 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA64    (0X05U) /* Alpha = 1/64 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA128   (0X06U) /* Alpha = 1/128 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA256   (0X07U) /* Alpha = 1/256 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA512   (0X08U) /* Alpha = 1/512 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA1024  (0X09U) /* Alpha = 1/1024 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA2048  (0X0AU) /* Alpha = 1/2048 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA4096  (0X0BU) /* Alpha = 1/4096 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA8192  (0X0CU) /* Alpha = 1/8192 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA16384 (0X0DU) /* Alpha = 1/16384 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA32768 (0X0EU) /* Alpha = 1/32768 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5_ALPHA_CH4_ALPHA65536 (0X0FU) /* Alpha = 1/65536 */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_ALPHA_CH6                                    Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6                                             \
    (0U) /* DC Blocking Filter Alpha Setting for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6                                             \
    (4U) /* DC Blocking Filter Alpha Setting for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6                                             \
    (0X0FU) /* DC Blocking Filter Alpha Setting for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6                                             \
    "R/W" /* DC Blocking Filter Alpha Setting for Channel 6 */

#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_BYPASS     (0X00U) /* Filter Bypassed */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA4     (0X01U) /* Alpha = 1/4 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA8     (0X02U) /* Alpha = 1/8 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA16    (0X03U) /* Alpha = 1/16 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA32    (0X04U) /* Alpha = 1/32 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA64    (0X05U) /* Alpha = 1/64 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA128   (0X06U) /* Alpha = 1/128 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA256   (0X07U) /* Alpha = 1/256 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA512   (0X08U) /* Alpha = 1/512 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA1024  (0X09U) /* Alpha = 1/1024 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA2048  (0X0AU) /* Alpha = 1/2048 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA4096  (0X0BU) /* Alpha = 1/4096 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA8192  (0X0CU) /* Alpha = 1/8192 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA16384 (0X0DU) /* Alpha = 1/16384 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA32768 (0X0EU) /* Alpha = 1/32768 */
#define ENUM_ADEMA127_MMR_DATAPATH_ALPHA_CH6_ALPHA_CH6_ALPHA65536 (0X0FU) /* Alpha = 1/65536 */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_CH0                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH0_GAIN_OFFSET_XT_EN_CH0                                \
    (0U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH0_GAIN_OFFSET_XT_EN_CH0                                \
    (1U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_GAIN_OFFSET_XT_EN_CH0                                \
    (0X01U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH0_GAIN_OFFSET_XT_EN_CH0                                \
    "R/W" /* Gain/Offset/Crosstalk Compensation Enable for Channel 0 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH0_SCF_EN_CH0                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH0_SCF_EN_CH0                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_SCF_EN_CH0                                           \
    (0X02U) /* Sensor Compensation Filter Enable for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH0_SCF_EN_CH0                                           \
    "R/W" /* Sensor Compensation Filter Enable for Channel 0 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH0_HPF_EN_CH0                                           \
    (2U) /* High Pass Filter Enable for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH0_HPF_EN_CH0                                           \
    (1U) /* High Pass Filter Enable for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_HPF_EN_CH0                                           \
    (0X04U) /* High Pass Filter Enable for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH0_HPF_EN_CH0                                           \
    "R/W" /* High Pass Filter Enable for Channel 0 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_EN_CH0                                      \
    (3U) /* Compensation Filter Enable for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_EN_CH0                                      \
    (1U) /* Compensation Filter Enable for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_EN_CH0                                      \
    (0X08U) /* Compensation Filter Enable for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_EN_CH0                                      \
    "R/W" /* Compensation Filter Enable for Channel 0 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_CFG_CH0                                     \
    (4U) /* Compensation Filter Configuration for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_CFG_CH0                                     \
    (1U) /* Compensation Filter Configuration for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_CFG_CH0                                     \
    (0X10U) /* Compensation Filter Configuration for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_CFG_CH0                                     \
    "R/W" /* Compensation Filter Configuration for Channel 0 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH0_LPF_EN_CH0                                           \
    (5U) /* Low Pass Filter Enable for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH0_LPF_EN_CH0                                           \
    (1U) /* Low Pass Filter Enable for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_LPF_EN_CH0                                           \
    (0X20U) /* Low Pass Filter Enable for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH0_LPF_EN_CH0                                           \
    "R/W" /* Low Pass Filter Enable for Channel 0 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH0_ALLPASS_EN_CH0                                       \
    (6U) /* Allpass Filter Enable for Channel 0 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH0_ALLPASS_EN_CH0                                       \
    (1U) /* Allpass Filter Enable for Channel 0 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_ALLPASS_EN_CH0                                       \
    (0X40U) /* Allpass Filter Enable for Channel 0 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH0_ALLPASS_EN_CH0                                       \
    "R/W" /* Allpass Filter Enable for Channel 0 */

#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_CFG_CH0_SINC_COMPENSATION                   \
    (0X00U) /* Sinc Droop */
#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH0_COMP_FLT_CFG_CH0_BLF_AND_SINC_COMPENSATION           \
    (0X01U) /* External BLF and Sinc Droop */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_CH1                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH1_GAIN_OFFSET_XT_EN_CH1                                \
    (0U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH1_GAIN_OFFSET_XT_EN_CH1                                \
    (1U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_GAIN_OFFSET_XT_EN_CH1                                \
    (0X01U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH1_GAIN_OFFSET_XT_EN_CH1                                \
    "R/W" /* Gain/Offset/Crosstalk Compensation Enable for Channel 1 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH1_SCF_EN_CH1                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH1_SCF_EN_CH1                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_SCF_EN_CH1                                           \
    (0X02U) /* Sensor Compensation Filter Enable for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH1_SCF_EN_CH1                                           \
    "R/W" /* Sensor Compensation Filter Enable for Channel 1 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH1_HPF_EN_CH1                                           \
    (2U) /* High Pass Filter Enable for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH1_HPF_EN_CH1                                           \
    (1U) /* High Pass Filter Enable for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_HPF_EN_CH1                                           \
    (0X04U) /* High Pass Filter Enable for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH1_HPF_EN_CH1                                           \
    "R/W" /* High Pass Filter Enable for Channel 1 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_EN_CH1                                      \
    (3U) /* Compensation Filter Enable for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_EN_CH1                                      \
    (1U) /* Compensation Filter Enable for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_EN_CH1                                      \
    (0X08U) /* Compensation Filter Enable for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_EN_CH1                                      \
    "R/W" /* Compensation Filter Enable for Channel 1 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_CFG_CH1                                     \
    (4U) /* Compensation Filter Configuration for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_CFG_CH1                                     \
    (1U) /* Compensation Filter Configuration for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_CFG_CH1                                     \
    (0X10U) /* Compensation Filter Configuration for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_CFG_CH1                                     \
    "R/W" /* Compensation Filter Configuration for Channel 1 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH1_LPF_EN_CH1                                           \
    (5U) /* Low Pass Filter Enable for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH1_LPF_EN_CH1                                           \
    (1U) /* Low Pass Filter Enable for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_LPF_EN_CH1                                           \
    (0X20U) /* Low Pass Filter Enable for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH1_LPF_EN_CH1                                           \
    "R/W" /* Low Pass Filter Enable for Channel 1 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH1_ALLPASS_EN_CH1                                       \
    (6U) /* Allpass Filter Enable for Channel 1 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH1_ALLPASS_EN_CH1                                       \
    (1U) /* Allpass Filter Enable for Channel 1 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_ALLPASS_EN_CH1                                       \
    (0X40U) /* Allpass Filter Enable for Channel 1 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH1_ALLPASS_EN_CH1                                       \
    "R/W" /* Allpass Filter Enable for Channel 1 */

#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_CFG_CH1_SINC_COMPENSATION                   \
    (0X00U) /* Sinc Droop */
#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH1_COMP_FLT_CFG_CH1_BLF_AND_SINC_COMPENSATION           \
    (0X01U) /* External BLF and Sinc Droop */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_CH2                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH2_GAIN_OFFSET_XT_EN_CH2                                \
    (0U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH2_GAIN_OFFSET_XT_EN_CH2                                \
    (1U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_GAIN_OFFSET_XT_EN_CH2                                \
    (0X01U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH2_GAIN_OFFSET_XT_EN_CH2                                \
    "R/W" /* Gain/Offset/Crosstalk Compensation Enable for Channel 2 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH2_SCF_EN_CH2                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH2_SCF_EN_CH2                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_SCF_EN_CH2                                           \
    (0X02U) /* Sensor Compensation Filter Enable for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH2_SCF_EN_CH2                                           \
    "R/W" /* Sensor Compensation Filter Enable for Channel 2 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH2_HPF_EN_CH2                                           \
    (2U) /* High Pass Filter Enable for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH2_HPF_EN_CH2                                           \
    (1U) /* High Pass Filter Enable for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_HPF_EN_CH2                                           \
    (0X04U) /* High Pass Filter Enable for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH2_HPF_EN_CH2                                           \
    "R/W" /* High Pass Filter Enable for Channel 2 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_EN_CH2                                      \
    (3U) /* Compensation Filter Enable for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_EN_CH2                                      \
    (1U) /* Compensation Filter Enable for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_EN_CH2                                      \
    (0X08U) /* Compensation Filter Enable for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_EN_CH2                                      \
    "R/W" /* Compensation Filter Enable for Channel 2 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_CFG_CH2                                     \
    (4U) /* Compensation Filter Configuration for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_CFG_CH2                                     \
    (1U) /* Compensation Filter Configuration for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_CFG_CH2                                     \
    (0X10U) /* Compensation Filter Configuration for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_CFG_CH2                                     \
    "R/W" /* Compensation Filter Configuration for Channel 2 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH2_LPF_EN_CH2                                           \
    (5U) /* Low Pass Filter Enable for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH2_LPF_EN_CH2                                           \
    (1U) /* Low Pass Filter Enable for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_LPF_EN_CH2                                           \
    (0X20U) /* Low Pass Filter Enable for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH2_LPF_EN_CH2                                           \
    "R/W" /* Low Pass Filter Enable for Channel 2 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH2_ALLPASS_EN_CH2                                       \
    (6U) /* Allpass Filter Enable for Channel 2 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH2_ALLPASS_EN_CH2                                       \
    (1U) /* Allpass Filter Enable for Channel 2 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_ALLPASS_EN_CH2                                       \
    (0X40U) /* Allpass Filter Enable for Channel 2 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH2_ALLPASS_EN_CH2                                       \
    "R/W" /* Allpass Filter Enable for Channel 2 */

#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_CFG_CH2_SINC_COMPENSATION                   \
    (0X00U) /* Sinc Droop */
#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH2_COMP_FLT_CFG_CH2_BLF_AND_SINC_COMPENSATION           \
    (0X01U) /* External BLF and Sinc Droop */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_CH3                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH3_GAIN_OFFSET_XT_EN_CH3                                \
    (0U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH3_GAIN_OFFSET_XT_EN_CH3                                \
    (1U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_GAIN_OFFSET_XT_EN_CH3                                \
    (0X01U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH3_GAIN_OFFSET_XT_EN_CH3                                \
    "R/W" /* Gain/Offset/Crosstalk Compensation Enable for Channel 3 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH3_SCF_EN_CH3                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH3_SCF_EN_CH3                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_SCF_EN_CH3                                           \
    (0X02U) /* Sensor Compensation Filter Enable for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH3_SCF_EN_CH3                                           \
    "R/W" /* Sensor Compensation Filter Enable for Channel 3 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH3_HPF_EN_CH3                                           \
    (2U) /* High Pass Filter Enable for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH3_HPF_EN_CH3                                           \
    (1U) /* High Pass Filter Enable for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_HPF_EN_CH3                                           \
    (0X04U) /* High Pass Filter Enable for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH3_HPF_EN_CH3                                           \
    "R/W" /* High Pass Filter Enable for Channel 3 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_EN_CH3                                      \
    (3U) /* Compensation Filter Enable for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_EN_CH3                                      \
    (1U) /* Compensation Filter Enable for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_EN_CH3                                      \
    (0X08U) /* Compensation Filter Enable for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_EN_CH3                                      \
    "R/W" /* Compensation Filter Enable for Channel 3 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_CFG_CH3                                     \
    (4U) /* Compensation Filter Configuration for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_CFG_CH3                                     \
    (1U) /* Compensation Filter Configuration for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_CFG_CH3                                     \
    (0X10U) /* Compensation Filter Configuration for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_CFG_CH3                                     \
    "R/W" /* Compensation Filter Configuration for Channel 3 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH3_LPF_EN_CH3                                           \
    (5U) /* Low Pass Filter Enable for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH3_LPF_EN_CH3                                           \
    (1U) /* Low Pass Filter Enable for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_LPF_EN_CH3                                           \
    (0X20U) /* Low Pass Filter Enable for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH3_LPF_EN_CH3                                           \
    "R/W" /* Low Pass Filter Enable for Channel 3 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH3_ALLPASS_EN_CH3                                       \
    (6U) /* Allpass Filter Enable for Channel 3 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH3_ALLPASS_EN_CH3                                       \
    (1U) /* Allpass Filter Enable for Channel 3 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_ALLPASS_EN_CH3                                       \
    (0X40U) /* Allpass Filter Enable for Channel 3 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH3_ALLPASS_EN_CH3                                       \
    "R/W" /* Allpass Filter Enable for Channel 3 */

#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_CFG_CH3_SINC_COMPENSATION                   \
    (0X00U) /* Sinc Droop */
#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH3_COMP_FLT_CFG_CH3_BLF_AND_SINC_COMPENSATION           \
    (0X01U) /* External BLF and Sinc Droop */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_CH4                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH4_GAIN_OFFSET_XT_EN_CH4                                \
    (0U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH4_GAIN_OFFSET_XT_EN_CH4                                \
    (1U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_GAIN_OFFSET_XT_EN_CH4                                \
    (0X01U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH4_GAIN_OFFSET_XT_EN_CH4                                \
    "R/W" /* Gain/Offset/Crosstalk Compensation Enable for Channel 4 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH4_SCF_EN_CH4                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH4_SCF_EN_CH4                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_SCF_EN_CH4                                           \
    (0X02U) /* Sensor Compensation Filter Enable for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH4_SCF_EN_CH4                                           \
    "R/W" /* Sensor Compensation Filter Enable for Channel 4 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH4_HPF_EN_CH4                                           \
    (2U) /* High Pass Filter Enable for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH4_HPF_EN_CH4                                           \
    (1U) /* High Pass Filter Enable for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_HPF_EN_CH4                                           \
    (0X04U) /* High Pass Filter Enable for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH4_HPF_EN_CH4                                           \
    "R/W" /* High Pass Filter Enable for Channel 4 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_EN_CH4                                      \
    (3U) /* Compensation Filter Enable for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_EN_CH4                                      \
    (1U) /* Compensation Filter Enable for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_EN_CH4                                      \
    (0X08U) /* Compensation Filter Enable for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_EN_CH4                                      \
    "R/W" /* Compensation Filter Enable for Channel 4 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_CFG_CH4                                     \
    (4U) /* Compensation Filter Configuration for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_CFG_CH4                                     \
    (1U) /* Compensation Filter Configuration for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_CFG_CH4                                     \
    (0X10U) /* Compensation Filter Configuration for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_CFG_CH4                                     \
    "R/W" /* Compensation Filter Configuration for Channel 4 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH4_LPF_EN_CH4                                           \
    (5U) /* Low Pass Filter Enable for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH4_LPF_EN_CH4                                           \
    (1U) /* Low Pass Filter Enable for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_LPF_EN_CH4                                           \
    (0X20U) /* Low Pass Filter Enable for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH4_LPF_EN_CH4                                           \
    "R/W" /* Low Pass Filter Enable for Channel 4 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH4_ALLPASS_EN_CH4                                       \
    (6U) /* Allpass Filter Enable for Channel 4 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH4_ALLPASS_EN_CH4                                       \
    (1U) /* Allpass Filter Enable for Channel 4 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_ALLPASS_EN_CH4                                       \
    (0X40U) /* Allpass Filter Enable for Channel 4 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH4_ALLPASS_EN_CH4                                       \
    "R/W" /* Allpass Filter Enable for Channel 4 */

#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_CFG_CH4_SINC_COMPENSATION                   \
    (0X00U) /* Sinc Droop */
#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH4_COMP_FLT_CFG_CH4_BLF_AND_SINC_COMPENSATION           \
    (0X01U) /* External BLF and Sinc Droop */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_CH5                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH5_GAIN_OFFSET_XT_EN_CH5                                \
    (0U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH5_GAIN_OFFSET_XT_EN_CH5                                \
    (1U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_GAIN_OFFSET_XT_EN_CH5                                \
    (0X01U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH5_GAIN_OFFSET_XT_EN_CH5                                \
    "R/W" /* Gain/Offset/Crosstalk Compensation Enable for Channel 5 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH5_SCF_EN_CH5                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH5_SCF_EN_CH5                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_SCF_EN_CH5                                           \
    (0X02U) /* Sensor Compensation Filter Enable for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH5_SCF_EN_CH5                                           \
    "R/W" /* Sensor Compensation Filter Enable for Channel 5 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH5_HPF_EN_CH5                                           \
    (2U) /* High Pass Filter Enable for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH5_HPF_EN_CH5                                           \
    (1U) /* High Pass Filter Enable for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_HPF_EN_CH5                                           \
    (0X04U) /* High Pass Filter Enable for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH5_HPF_EN_CH5                                           \
    "R/W" /* High Pass Filter Enable for Channel 5 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_EN_CH5                                      \
    (3U) /* Compensation Filter Enable for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_EN_CH5                                      \
    (1U) /* Compensation Filter Enable for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_EN_CH5                                      \
    (0X08U) /* Compensation Filter Enable for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_EN_CH5                                      \
    "R/W" /* Compensation Filter Enable for Channel 5 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_CFG_CH5                                     \
    (4U) /* Compensation Filter Configuration for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_CFG_CH5                                     \
    (1U) /* Compensation Filter Configuration for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_CFG_CH5                                     \
    (0X10U) /* Compensation Filter Configuration for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_CFG_CH5                                     \
    "R/W" /* Compensation Filter Configuration for Channel 5 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH5_LPF_EN_CH5                                           \
    (5U) /* Low Pass Filter Enable for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH5_LPF_EN_CH5                                           \
    (1U) /* Low Pass Filter Enable for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_LPF_EN_CH5                                           \
    (0X20U) /* Low Pass Filter Enable for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH5_LPF_EN_CH5                                           \
    "R/W" /* Low Pass Filter Enable for Channel 5 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH5_ALLPASS_EN_CH5                                       \
    (6U) /* Allpass Filter Enable for Channel 5 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH5_ALLPASS_EN_CH5                                       \
    (1U) /* Allpass Filter Enable for Channel 5 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_ALLPASS_EN_CH5                                       \
    (0X40U) /* Allpass Filter Enable for Channel 5 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH5_ALLPASS_EN_CH5                                       \
    "R/W" /* Allpass Filter Enable for Channel 5 */

#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_CFG_CH5_SINC_COMPENSATION                   \
    (0X00U) /* Sinc Droop */
#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH5_COMP_FLT_CFG_CH5_BLF_AND_SINC_COMPENSATION           \
    (0X01U) /* External BLF and Sinc Droop */

/* ----------------------------------------------------------------------------------------------------
          DATAPATH_CONFIG_CH6                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH6_GAIN_OFFSET_XT_EN_CH6                                \
    (0U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH6_GAIN_OFFSET_XT_EN_CH6                                \
    (1U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_GAIN_OFFSET_XT_EN_CH6                                \
    (0X01U) /* Gain/Offset/Crosstalk Compensation Enable for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH6_GAIN_OFFSET_XT_EN_CH6                                \
    "R/W" /* Gain/Offset/Crosstalk Compensation Enable for Channel 6 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH6_SCF_EN_CH6                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH6_SCF_EN_CH6                                           \
    (1U) /* Sensor Compensation Filter Enable for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_SCF_EN_CH6                                           \
    (0X02U) /* Sensor Compensation Filter Enable for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH6_SCF_EN_CH6                                           \
    "R/W" /* Sensor Compensation Filter Enable for Channel 6 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH6_HPF_EN_CH6                                           \
    (2U) /* High Pass Filter Enable for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH6_HPF_EN_CH6                                           \
    (1U) /* High Pass Filter Enable for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_HPF_EN_CH6                                           \
    (0X04U) /* High Pass Filter Enable for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH6_HPF_EN_CH6                                           \
    "R/W" /* High Pass Filter Enable for Channel 6 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_EN_CH6                                      \
    (3U) /* Compensation Filter Enable for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_EN_CH6                                      \
    (1U) /* Compensation Filter Enable for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_EN_CH6                                      \
    (0X08U) /* Compensation Filter Enable for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_EN_CH6                                      \
    "R/W" /* Compensation Filter Enable for Channel 6 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_CFG_CH6                                     \
    (4U) /* Compensation Filter Configuration for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_CFG_CH6                                     \
    (1U) /* Compensation Filter Configuration for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_CFG_CH6                                     \
    (0X10U) /* Compensation Filter Configuration for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_CFG_CH6                                     \
    "R/W" /* Compensation Filter Configuration for Channel 6 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH6_LPF_EN_CH6                                           \
    (5U) /* Low Pass Filter Enable for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH6_LPF_EN_CH6                                           \
    (1U) /* Low Pass Filter Enable for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_LPF_EN_CH6                                           \
    (0X20U) /* Low Pass Filter Enable for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH6_LPF_EN_CH6                                           \
    "R/W" /* Low Pass Filter Enable for Channel 6 */
#define BITP_ADEMA127_MMR_DATAPATH_CONFIG_CH6_ALLPASS_EN_CH6                                       \
    (6U) /* Allpass Filter Enable for Channel 6 */
#define BITL_ADEMA127_MMR_DATAPATH_CONFIG_CH6_ALLPASS_EN_CH6                                       \
    (1U) /* Allpass Filter Enable for Channel 6 */
#define BITM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_ALLPASS_EN_CH6                                       \
    (0X40U) /* Allpass Filter Enable for Channel 6 */
#define BITA_ADEMA127_MMR_DATAPATH_CONFIG_CH6_ALLPASS_EN_CH6                                       \
    "R/W" /* Allpass Filter Enable for Channel 6 */

#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_CFG_CH6_SINC_COMPENSATION                   \
    (0X00U) /* Sinc Droop */
#define ENUM_ADEMA127_MMR_DATAPATH_CONFIG_CH6_COMP_FLT_CFG_CH6_BLF_AND_SINC_COMPENSATION           \
    (0X01U) /* External BLF and Sinc Droop */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH0_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH0_HI_PHASE_OFFSET_CH0                                     \
    (0U) /* Phase Offset for Channel 0                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH0_HI_PHASE_OFFSET_CH0                                     \
    (8U) /* Phase Offset for Channel 0                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH0_HI_PHASE_OFFSET_CH0                                     \
    (0XFFU) /* Phase Offset for Channel 0 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH0_HI_PHASE_OFFSET_CH0                                     \
    "R/W" /* Phase Offset for Channel 0 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH0_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH0_LO_PHASE_OFFSET_CH0                                     \
    (0U) /* Phase Offset for Channel 0                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH0_LO_PHASE_OFFSET_CH0                                     \
    (8U) /* Phase Offset for Channel 0                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH0_LO_PHASE_OFFSET_CH0                                     \
    (0XFFU) /* Phase Offset for Channel 0 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH0_LO_PHASE_OFFSET_CH0                                     \
    "R/W" /* Phase Offset for Channel 0 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH1_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH1_HI_PHASE_OFFSET_CH1                                     \
    (0U) /* Phase Offset for Channel 1                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH1_HI_PHASE_OFFSET_CH1                                     \
    (8U) /* Phase Offset for Channel 1                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH1_HI_PHASE_OFFSET_CH1                                     \
    (0XFFU) /* Phase Offset for Channel 1 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH1_HI_PHASE_OFFSET_CH1                                     \
    "R/W" /* Phase Offset for Channel 1 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH1_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH1_LO_PHASE_OFFSET_CH1                                     \
    (0U) /* Phase Offset for Channel 1                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH1_LO_PHASE_OFFSET_CH1                                     \
    (8U) /* Phase Offset for Channel 1                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH1_LO_PHASE_OFFSET_CH1                                     \
    (0XFFU) /* Phase Offset for Channel 1 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH1_LO_PHASE_OFFSET_CH1                                     \
    "R/W" /* Phase Offset for Channel 1 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH2_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH2_HI_PHASE_OFFSET_CH2                                     \
    (0U) /* Phase Offset for Channel 2                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH2_HI_PHASE_OFFSET_CH2                                     \
    (8U) /* Phase Offset for Channel 2                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH2_HI_PHASE_OFFSET_CH2                                     \
    (0XFFU) /* Phase Offset for Channel 2 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH2_HI_PHASE_OFFSET_CH2                                     \
    "R/W" /* Phase Offset for Channel 2 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH2_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH2_LO_PHASE_OFFSET_CH2                                     \
    (0U) /* Phase Offset for Channel 2                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH2_LO_PHASE_OFFSET_CH2                                     \
    (8U) /* Phase Offset for Channel 2                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH2_LO_PHASE_OFFSET_CH2                                     \
    (0XFFU) /* Phase Offset for Channel 2 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH2_LO_PHASE_OFFSET_CH2                                     \
    "R/W" /* Phase Offset for Channel 2 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH3_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH3_HI_PHASE_OFFSET_CH3                                     \
    (0U) /* Phase Offset for Channel 3                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH3_HI_PHASE_OFFSET_CH3                                     \
    (8U) /* Phase Offset for Channel 3                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH3_HI_PHASE_OFFSET_CH3                                     \
    (0XFFU) /* Phase Offset for Channel 3 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH3_HI_PHASE_OFFSET_CH3                                     \
    "R/W" /* Phase Offset for Channel 3 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH3_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH3_LO_PHASE_OFFSET_CH3                                     \
    (0U) /* Phase Offset for Channel 3                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH3_LO_PHASE_OFFSET_CH3                                     \
    (8U) /* Phase Offset for Channel 3                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH3_LO_PHASE_OFFSET_CH3                                     \
    (0XFFU) /* Phase Offset for Channel 3 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH3_LO_PHASE_OFFSET_CH3                                     \
    "R/W" /* Phase Offset for Channel 3 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH4_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH4_HI_PHASE_OFFSET_CH4                                     \
    (0U) /* Phase Offset for Channel 4                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH4_HI_PHASE_OFFSET_CH4                                     \
    (8U) /* Phase Offset for Channel 4                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH4_HI_PHASE_OFFSET_CH4                                     \
    (0XFFU) /* Phase Offset for Channel 4 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH4_HI_PHASE_OFFSET_CH4                                     \
    "R/W" /* Phase Offset for Channel 4 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH4_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH4_LO_PHASE_OFFSET_CH4                                     \
    (0U) /* Phase Offset for Channel 4                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH4_LO_PHASE_OFFSET_CH4                                     \
    (8U) /* Phase Offset for Channel 4                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH4_LO_PHASE_OFFSET_CH4                                     \
    (0XFFU) /* Phase Offset for Channel 4 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH4_LO_PHASE_OFFSET_CH4                                     \
    "R/W" /* Phase Offset for Channel 4 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH5_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH5_HI_PHASE_OFFSET_CH5                                     \
    (0U) /* Phase Offset for Channel 5                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH5_HI_PHASE_OFFSET_CH5                                     \
    (8U) /* Phase Offset for Channel 5                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH5_HI_PHASE_OFFSET_CH5                                     \
    (0XFFU) /* Phase Offset for Channel 5 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH5_HI_PHASE_OFFSET_CH5                                     \
    "R/W" /* Phase Offset for Channel 5 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH5_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH5_LO_PHASE_OFFSET_CH5                                     \
    (0U) /* Phase Offset for Channel 5                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH5_LO_PHASE_OFFSET_CH5                                     \
    (8U) /* Phase Offset for Channel 5                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH5_LO_PHASE_OFFSET_CH5                                     \
    (0XFFU) /* Phase Offset for Channel 5 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH5_LO_PHASE_OFFSET_CH5                                     \
    "R/W" /* Phase Offset for Channel 5 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH6_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH6_HI_PHASE_OFFSET_CH6                                     \
    (0U) /* Phase Offset for Channel 6                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH6_HI_PHASE_OFFSET_CH6                                     \
    (8U) /* Phase Offset for Channel 6                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH6_HI_PHASE_OFFSET_CH6                                     \
    (0XFFU) /* Phase Offset for Channel 6 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH6_HI_PHASE_OFFSET_CH6                                     \
    "R/W" /* Phase Offset for Channel 6 */

/* ----------------------------------------------------------------------------------------------------
          PHASE_OFFSET_CH6_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PHASE_OFFSET_CH6_LO_PHASE_OFFSET_CH6                                     \
    (0U) /* Phase Offset for Channel 6                                                             \
          */
#define BITL_ADEMA127_MMR_PHASE_OFFSET_CH6_LO_PHASE_OFFSET_CH6                                     \
    (8U) /* Phase Offset for Channel 6                                                             \
          */
#define BITM_ADEMA127_MMR_PHASE_OFFSET_CH6_LO_PHASE_OFFSET_CH6                                     \
    (0XFFU) /* Phase Offset for Channel 6 */
#define BITA_ADEMA127_MMR_PHASE_OFFSET_CH6_LO_PHASE_OFFSET_CH6                                     \
    "R/W" /* Phase Offset for Channel 6 */

/* ----------------------------------------------------------------------------------------------------
          CRC_RESULT_MMR_HI                                     Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_CRC_RESULT_MMR_HI_CRC_RESULT_MMR (0U)    /* Register Map CRC */
#define BITL_ADEMA127_MMR_CRC_RESULT_MMR_HI_CRC_RESULT_MMR (8U)    /* Register Map CRC */
#define BITM_ADEMA127_MMR_CRC_RESULT_MMR_HI_CRC_RESULT_MMR (0XFFU) /* Register Map CRC */
#define BITA_ADEMA127_MMR_CRC_RESULT_MMR_HI_CRC_RESULT_MMR "R"     /* Register Map CRC */

/* ----------------------------------------------------------------------------------------------------
          CRC_RESULT_MMR_LO                                     Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_CRC_RESULT_MMR_LO_CRC_RESULT_MMR (0U)    /* Register Map CRC */
#define BITL_ADEMA127_MMR_CRC_RESULT_MMR_LO_CRC_RESULT_MMR (8U)    /* Register Map CRC */
#define BITM_ADEMA127_MMR_CRC_RESULT_MMR_LO_CRC_RESULT_MMR (0XFFU) /* Register Map CRC */
#define BITA_ADEMA127_MMR_CRC_RESULT_MMR_LO_CRC_RESULT_MMR "R"     /* Register Map CRC */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_5                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_UNIQUE_PART_ID_5_UNIQUE_PART_ID (0U)    /* Unique Part ID. */
#define BITL_ADEMA127_MMR_UNIQUE_PART_ID_5_UNIQUE_PART_ID (8U)    /* Unique Part ID. */
#define BITM_ADEMA127_MMR_UNIQUE_PART_ID_5_UNIQUE_PART_ID (0XFFU) /* Unique Part ID. */
#define BITA_ADEMA127_MMR_UNIQUE_PART_ID_5_UNIQUE_PART_ID "R"     /* Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_4                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_UNIQUE_PART_ID_4_UNIQUE_PART_ID (0U)    /* Unique Part ID. */
#define BITL_ADEMA127_MMR_UNIQUE_PART_ID_4_UNIQUE_PART_ID (8U)    /* Unique Part ID. */
#define BITM_ADEMA127_MMR_UNIQUE_PART_ID_4_UNIQUE_PART_ID (0XFFU) /* Unique Part ID. */
#define BITA_ADEMA127_MMR_UNIQUE_PART_ID_4_UNIQUE_PART_ID "R"     /* Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_3                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_UNIQUE_PART_ID_3_UNIQUE_PART_ID (0U)    /* Unique Part ID. */
#define BITL_ADEMA127_MMR_UNIQUE_PART_ID_3_UNIQUE_PART_ID (8U)    /* Unique Part ID. */
#define BITM_ADEMA127_MMR_UNIQUE_PART_ID_3_UNIQUE_PART_ID (0XFFU) /* Unique Part ID. */
#define BITA_ADEMA127_MMR_UNIQUE_PART_ID_3_UNIQUE_PART_ID "R"     /* Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_2                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_UNIQUE_PART_ID_2_UNIQUE_PART_ID (0U)    /* Unique Part ID. */
#define BITL_ADEMA127_MMR_UNIQUE_PART_ID_2_UNIQUE_PART_ID (8U)    /* Unique Part ID. */
#define BITM_ADEMA127_MMR_UNIQUE_PART_ID_2_UNIQUE_PART_ID (0XFFU) /* Unique Part ID. */
#define BITA_ADEMA127_MMR_UNIQUE_PART_ID_2_UNIQUE_PART_ID "R"     /* Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_1                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_UNIQUE_PART_ID_1_UNIQUE_PART_ID (0U)    /* Unique Part ID. */
#define BITL_ADEMA127_MMR_UNIQUE_PART_ID_1_UNIQUE_PART_ID (8U)    /* Unique Part ID. */
#define BITM_ADEMA127_MMR_UNIQUE_PART_ID_1_UNIQUE_PART_ID (0XFFU) /* Unique Part ID. */
#define BITA_ADEMA127_MMR_UNIQUE_PART_ID_1_UNIQUE_PART_ID "R"     /* Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_0                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_UNIQUE_PART_ID_0_UNIQUE_PART_ID (0U)    /* Unique Part ID. */
#define BITL_ADEMA127_MMR_UNIQUE_PART_ID_0_UNIQUE_PART_ID (8U)    /* Unique Part ID. */
#define BITM_ADEMA127_MMR_UNIQUE_PART_ID_0_UNIQUE_PART_ID (0XFFU) /* Unique Part ID. */
#define BITA_ADEMA127_MMR_UNIQUE_PART_ID_0_UNIQUE_PART_ID "R"     /* Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          SILICON_REVISION                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_SILICON_REVISION_SILICON_REVISION                                        \
    (0U) /* Silicon Revision for the Chip                                                          \
          */
#define BITL_ADEMA127_MMR_SILICON_REVISION_SILICON_REVISION                                        \
    (4U) /* Silicon Revision for the Chip                                                          \
          */
#define BITM_ADEMA127_MMR_SILICON_REVISION_SILICON_REVISION                                        \
    (0X0FU) /* Silicon Revision for the Chip */
#define BITA_ADEMA127_MMR_SILICON_REVISION_SILICON_REVISION                                        \
    "R" /* Silicon Revision for the Chip                                                           \
         */

/* ----------------------------------------------------------------------------------------------------
          PRODUCT_ID                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_MMR_PRODUCT_ID_PRODUCT_ID (0U)    /* Product ID */
#define BITL_ADEMA127_MMR_PRODUCT_ID_PRODUCT_ID (8U)    /* Product ID */
#define BITM_ADEMA127_MMR_PRODUCT_ID_PRODUCT_ID (0XFFU) /* Product ID */
#define BITA_ADEMA127_MMR_PRODUCT_ID_PRODUCT_ID "R"     /* Product ID */

#define ENUM_ADEMA127_MMR_PRODUCT_ID_PRODUCT_ID_ADEMA127 (0X16U) /* 7 Channel ADEMA127 ADC */
#define ENUM_ADEMA127_MMR_PRODUCT_ID_PRODUCT_ID_ADEMA124 (0X13U) /* 4 Channel ADEMA124 ADC */

#endif /* end ifndef ADEMA127_MMR_ADDR_RDEF_H_ */

/* ====================================================================================================
        ADEMA127_DSP_RAM_CH Module Instances Address and Mask Definitions
   ====================================================================================================
 */
#define INST_ADEMA127_DSP_RAM_CH0                                                                  \
    (0X0400U) /* adema127_dsp_ram_ch0: Configure DSP Parameters, Independent per Channel*/
#define INST_ADEMA127_DSP_RAM_CH1                                                                  \
    (0X0440U) /* adema127_dsp_ram_ch1: Configure DSP Parameters, Independent per Channel*/
#define INST_ADEMA127_DSP_RAM_CH2                                                                  \
    (0X0480U) /* adema127_dsp_ram_ch2: Configure DSP Parameters, Independent per Channel*/
#define INST_ADEMA127_DSP_RAM_CH3                                                                  \
    (0X04C0U) /* adema127_dsp_ram_ch3: Configure DSP Parameters, Independent per Channel*/
#define INST_ADEMA127_DSP_RAM_CH4                                                                  \
    (0X0500U) /* adema127_dsp_ram_ch4: Configure DSP Parameters, Independent per Channel*/
#define INST_ADEMA127_DSP_RAM_CH5                                                                  \
    (0X0540U) /* adema127_dsp_ram_ch5: Configure DSP Parameters, Independent per Channel*/
#define INST_ADEMA127_DSP_RAM_CH6                                                                  \
    (0X0580U) /* adema127_dsp_ram_ch6: Configure DSP Parameters, Independent per Channel*/

#ifndef ADEMA127_DSP_RAM_CH_ADDR_RDEF_H_
#define ADEMA127_DSP_RAM_CH_ADDR_RDEF_H_    /* ADEMA127_DSP_RAM_CH: Configure DSP Parameters,      \
                                               Independent per Channel */

#define MASK_ADEMA127_DSP_RAM_CH                                                                   \
    (0X3FFFU) /* ADEMA127_DSP_RAM_CH: Configure DSP Parameters, Independent per Channel */

/* ====================================================================================================
        ADEMA127_DSP_RAM_CH Module Register ResetValue Definitions
   ====================================================================================================
 */
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_LO    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_MD    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_HI    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_LO    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_MD    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_HI    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_LO    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_MD    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_HI    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_LO    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_MD    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_HI    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_LO    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_MD    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_HI    (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SHIFT               (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_GAIN_LO             (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_GAIN_MD             (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_GAIN_HI             (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_OFFSET_LO           (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_OFFSET_MD           (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_OFFSET_HI           (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_XT_GAIN_LO          (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_XT_GAIN_MD          (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_XT_GAIN_HI          (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR        (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_HI (0X0U)

/* ====================================================================================================
        ADEMA127_DSP_RAM_CH Module Register BitPositions, Lengths, Masks and Enumerations
   Definitions
   ====================================================================================================
 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B0_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_LO_COMP_COEFF_B0                                    \
    (0U) /* Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_LO_COMP_COEFF_B0                                    \
    (8U) /* Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_LO_COMP_COEFF_B0                                    \
    (0XFFU) /* Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_LO_COMP_COEFF_B0                                    \
    "R/W" /* Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B0_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_MD_COMP_COEFF_B0                                    \
    (0U) /* Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_MD_COMP_COEFF_B0                                    \
    (8U) /* Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_MD_COMP_COEFF_B0                                    \
    (0XFFU) /* Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_MD_COMP_COEFF_B0                                    \
    "R/W" /* Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B0_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_HI_COMP_COEFF_B0                                    \
    (0U) /* Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_HI_COMP_COEFF_B0                                    \
    (8U) /* Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_HI_COMP_COEFF_B0                                    \
    (0XFFU) /* Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B0_HI_COMP_COEFF_B0                                    \
    "R/W" /* Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B1_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_LO_COMP_COEFF_B1                                    \
    (0U) /* Compensation Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_LO_COMP_COEFF_B1                                    \
    (8U) /* Compensation Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_LO_COMP_COEFF_B1                                    \
    (0XFFU) /* Compensation Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_LO_COMP_COEFF_B1                                    \
    "R/W" /* Compensation Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B1_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_MD_COMP_COEFF_B1                                    \
    (0U) /* Compensation Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_MD_COMP_COEFF_B1                                    \
    (8U) /* Compensation Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_MD_COMP_COEFF_B1                                    \
    (0XFFU) /* Compensation Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_MD_COMP_COEFF_B1                                    \
    "R/W" /* Compensation Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B1_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_HI_COMP_COEFF_B1                                    \
    (0U) /* Compensation Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_HI_COMP_COEFF_B1                                    \
    (8U) /* Compensation Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_HI_COMP_COEFF_B1                                    \
    (0XFFU) /* Compensation Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B1_HI_COMP_COEFF_B1                                    \
    "R/W" /* Compensation Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B2_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_LO_COMP_COEFF_B2                                    \
    (0U) /* Compensation Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_LO_COMP_COEFF_B2                                    \
    (8U) /* Compensation Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_LO_COMP_COEFF_B2                                    \
    (0XFFU) /* Compensation Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_LO_COMP_COEFF_B2                                    \
    "R/W" /* Compensation Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B2_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_MD_COMP_COEFF_B2                                    \
    (0U) /* Compensation Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_MD_COMP_COEFF_B2                                    \
    (8U) /* Compensation Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_MD_COMP_COEFF_B2                                    \
    (0XFFU) /* Compensation Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_MD_COMP_COEFF_B2                                    \
    "R/W" /* Compensation Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B2_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_HI_COMP_COEFF_B2                                    \
    (0U) /* Compensation Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_HI_COMP_COEFF_B2                                    \
    (8U) /* Compensation Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_HI_COMP_COEFF_B2                                    \
    (0XFFU) /* Compensation Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B2_HI_COMP_COEFF_B2                                    \
    "R/W" /* Compensation Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B3_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_LO_COMP_COEFF_B3                                    \
    (0U) /* Compensation Filter Coefficient B3 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_LO_COMP_COEFF_B3                                    \
    (8U) /* Compensation Filter Coefficient B3 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_LO_COMP_COEFF_B3                                    \
    (0XFFU) /* Compensation Filter Coefficient B3 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_LO_COMP_COEFF_B3                                    \
    "R/W" /* Compensation Filter Coefficient B3 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B3_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_MD_COMP_COEFF_B3                                    \
    (0U) /* Compensation Filter Coefficient B3 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_MD_COMP_COEFF_B3                                    \
    (8U) /* Compensation Filter Coefficient B3 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_MD_COMP_COEFF_B3                                    \
    (0XFFU) /* Compensation Filter Coefficient B3 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_MD_COMP_COEFF_B3                                    \
    "R/W" /* Compensation Filter Coefficient B3 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B3_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_HI_COMP_COEFF_B3                                    \
    (0U) /* Compensation Filter Coefficient B3 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_HI_COMP_COEFF_B3                                    \
    (8U) /* Compensation Filter Coefficient B3 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_HI_COMP_COEFF_B3                                    \
    (0XFFU) /* Compensation Filter Coefficient B3 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B3_HI_COMP_COEFF_B3                                    \
    "R/W" /* Compensation Filter Coefficient B3 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B4_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_LO_COMP_COEFF_B4                                    \
    (0U) /* Compensation Filter Coefficient B4 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_LO_COMP_COEFF_B4                                    \
    (8U) /* Compensation Filter Coefficient B4 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_LO_COMP_COEFF_B4                                    \
    (0XFFU) /* Compensation Filter Coefficient B4 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_LO_COMP_COEFF_B4                                    \
    "R/W" /* Compensation Filter Coefficient B4 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B4_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_MD_COMP_COEFF_B4                                    \
    (0U) /* Compensation Filter Coefficient B4 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_MD_COMP_COEFF_B4                                    \
    (8U) /* Compensation Filter Coefficient B4 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_MD_COMP_COEFF_B4                                    \
    (0XFFU) /* Compensation Filter Coefficient B4 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_MD_COMP_COEFF_B4                                    \
    "R/W" /* Compensation Filter Coefficient B4 */

/* ----------------------------------------------------------------------------------------------------
          COMP_COEFF_B4_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_HI_COMP_COEFF_B4                                    \
    (0U) /* Compensation Filter Coefficient B4 */
#define BITL_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_HI_COMP_COEFF_B4                                    \
    (8U) /* Compensation Filter Coefficient B4 */
#define BITM_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_HI_COMP_COEFF_B4                                    \
    (0XFFU) /* Compensation Filter Coefficient B4 */
#define BITA_ADEMA127_DSP_RAM_CH_COMP_COEFF_B4_HI_COMP_COEFF_B4                                    \
    "R/W" /* Compensation Filter Coefficient B4 */

/* ----------------------------------------------------------------------------------------------------
          SHIFT                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SHIFT_SHIFT (0U)    /* Arithmetic Shift in Datapath */
#define BITL_ADEMA127_DSP_RAM_CH_SHIFT_SHIFT (3U)    /* Arithmetic Shift in Datapath */
#define BITM_ADEMA127_DSP_RAM_CH_SHIFT_SHIFT (0X07U) /* Arithmetic Shift in Datapath */
#define BITA_ADEMA127_DSP_RAM_CH_SHIFT_SHIFT "R/W"   /* Arithmetic Shift in Datapath */

/* ----------------------------------------------------------------------------------------------------
          GAIN_LO                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_GAIN_LO_GAIN (0U)    /* Channel Gain */
#define BITL_ADEMA127_DSP_RAM_CH_GAIN_LO_GAIN (8U)    /* Channel Gain */
#define BITM_ADEMA127_DSP_RAM_CH_GAIN_LO_GAIN (0XFFU) /* Channel Gain */
#define BITA_ADEMA127_DSP_RAM_CH_GAIN_LO_GAIN "R/W"   /* Channel Gain */

/* ----------------------------------------------------------------------------------------------------
          GAIN_MD                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_GAIN_MD_GAIN (0U)    /* Channel Gain */
#define BITL_ADEMA127_DSP_RAM_CH_GAIN_MD_GAIN (8U)    /* Channel Gain */
#define BITM_ADEMA127_DSP_RAM_CH_GAIN_MD_GAIN (0XFFU) /* Channel Gain */
#define BITA_ADEMA127_DSP_RAM_CH_GAIN_MD_GAIN "R/W"   /* Channel Gain */

/* ----------------------------------------------------------------------------------------------------
          GAIN_HI                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_GAIN_HI_GAIN (0U)    /* Channel Gain */
#define BITL_ADEMA127_DSP_RAM_CH_GAIN_HI_GAIN (8U)    /* Channel Gain */
#define BITM_ADEMA127_DSP_RAM_CH_GAIN_HI_GAIN (0XFFU) /* Channel Gain */
#define BITA_ADEMA127_DSP_RAM_CH_GAIN_HI_GAIN "R/W"   /* Channel Gain */

/* ----------------------------------------------------------------------------------------------------
          OFFSET_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_OFFSET_LO_OFFSET (0U)    /* Channel Offset */
#define BITL_ADEMA127_DSP_RAM_CH_OFFSET_LO_OFFSET (8U)    /* Channel Offset */
#define BITM_ADEMA127_DSP_RAM_CH_OFFSET_LO_OFFSET (0XFFU) /* Channel Offset */
#define BITA_ADEMA127_DSP_RAM_CH_OFFSET_LO_OFFSET "R/W"   /* Channel Offset */

/* ----------------------------------------------------------------------------------------------------
          OFFSET_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_OFFSET_MD_OFFSET (0U)    /* Channel Offset */
#define BITL_ADEMA127_DSP_RAM_CH_OFFSET_MD_OFFSET (8U)    /* Channel Offset */
#define BITM_ADEMA127_DSP_RAM_CH_OFFSET_MD_OFFSET (0XFFU) /* Channel Offset */
#define BITA_ADEMA127_DSP_RAM_CH_OFFSET_MD_OFFSET "R/W"   /* Channel Offset */

/* ----------------------------------------------------------------------------------------------------
          OFFSET_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_OFFSET_HI_OFFSET (0U)    /* Channel Offset */
#define BITL_ADEMA127_DSP_RAM_CH_OFFSET_HI_OFFSET (8U)    /* Channel Offset */
#define BITM_ADEMA127_DSP_RAM_CH_OFFSET_HI_OFFSET (0XFFU) /* Channel Offset */
#define BITA_ADEMA127_DSP_RAM_CH_OFFSET_HI_OFFSET "R/W"   /* Channel Offset */

/* ----------------------------------------------------------------------------------------------------
          XT_GAIN_LO                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_XT_GAIN_LO_XT_GAIN (0U)    /* Crosstalk Compensation Gain */
#define BITL_ADEMA127_DSP_RAM_CH_XT_GAIN_LO_XT_GAIN (8U)    /* Crosstalk Compensation Gain */
#define BITM_ADEMA127_DSP_RAM_CH_XT_GAIN_LO_XT_GAIN (0XFFU) /* Crosstalk Compensation Gain */
#define BITA_ADEMA127_DSP_RAM_CH_XT_GAIN_LO_XT_GAIN "R/W"   /* Crosstalk Compensation Gain */

/* ----------------------------------------------------------------------------------------------------
          XT_GAIN_MD                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_XT_GAIN_MD_XT_GAIN (0U)    /* Crosstalk Compensation Gain */
#define BITL_ADEMA127_DSP_RAM_CH_XT_GAIN_MD_XT_GAIN (8U)    /* Crosstalk Compensation Gain */
#define BITM_ADEMA127_DSP_RAM_CH_XT_GAIN_MD_XT_GAIN (0XFFU) /* Crosstalk Compensation Gain */
#define BITA_ADEMA127_DSP_RAM_CH_XT_GAIN_MD_XT_GAIN "R/W"   /* Crosstalk Compensation Gain */

/* ----------------------------------------------------------------------------------------------------
          XT_GAIN_HI                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_XT_GAIN_HI_XT_GAIN (0U)    /* Crosstalk Compensation Gain */
#define BITL_ADEMA127_DSP_RAM_CH_XT_GAIN_HI_XT_GAIN (8U)    /* Crosstalk Compensation Gain */
#define BITM_ADEMA127_DSP_RAM_CH_XT_GAIN_HI_XT_GAIN (0XFFU) /* Crosstalk Compensation Gain */
#define BITA_ADEMA127_DSP_RAM_CH_XT_GAIN_HI_XT_GAIN "R/W"   /* Crosstalk Compensation Gain */

/* ----------------------------------------------------------------------------------------------------
          XT_AGGRESSOR                                          Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_AGGRESSOR                                         \
    (0U) /* Crosstalk Compensation Aggressor */
#define BITL_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_AGGRESSOR                                         \
    (3U) /* Crosstalk Compensation Aggressor */
#define BITM_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_AGGRESSOR                                         \
    (0X07U) /* Crosstalk Compensation Aggressor */
#define BITA_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_AGGRESSOR                                         \
    "R/W"                                                     /* Crosstalk Compensation Aggressor */
#define BITP_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_COMP_EN (5U) /* Crosstalk Compensation Enable */
#define BITL_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_COMP_EN (1U) /* Crosstalk Compensation Enable */
#define BITM_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_COMP_EN                                           \
    (0X20U)                                                    /* Crosstalk Compensation Enable    \
                                                                */
#define BITA_ADEMA127_DSP_RAM_CH_XT_AGGRESSOR_XT_COMP_EN "R/W" /* Crosstalk Compensation Enable */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_B0_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_LO_SCF_APF_COEFF_B0                              \
    (0U) /* Sensor Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_LO_SCF_APF_COEFF_B0                              \
    (8U) /* Sensor Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_LO_SCF_APF_COEFF_B0                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_LO_SCF_APF_COEFF_B0                              \
    "R/W" /* Sensor Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_B0_MD                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_MD_SCF_APF_COEFF_B0                              \
    (0U) /* Sensor Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_MD_SCF_APF_COEFF_B0                              \
    (8U) /* Sensor Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_MD_SCF_APF_COEFF_B0                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_MD_SCF_APF_COEFF_B0                              \
    "R/W" /* Sensor Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_B0_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_HI_SCF_APF_COEFF_B0                              \
    (0U) /* Sensor Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_HI_SCF_APF_COEFF_B0                              \
    (8U) /* Sensor Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_HI_SCF_APF_COEFF_B0                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B0_HI_SCF_APF_COEFF_B0                              \
    "R/W" /* Sensor Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_B1_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_LO_SCF_APF_COEFF_B1                              \
    (0U) /* Sensor Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_LO_SCF_APF_COEFF_B1                              \
    (8U) /* Sensor Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_LO_SCF_APF_COEFF_B1                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_LO_SCF_APF_COEFF_B1                              \
    "R/W" /* Sensor Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_B1_MD                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_MD_SCF_APF_COEFF_B1                              \
    (0U) /* Sensor Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_MD_SCF_APF_COEFF_B1                              \
    (8U) /* Sensor Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_MD_SCF_APF_COEFF_B1                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_MD_SCF_APF_COEFF_B1                              \
    "R/W" /* Sensor Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_B1_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_HI_SCF_APF_COEFF_B1                              \
    (0U) /* Sensor Compensation Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_HI_SCF_APF_COEFF_B1                              \
    (8U) /* Sensor Compensation Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_HI_SCF_APF_COEFF_B1                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_B1_HI_SCF_APF_COEFF_B1                              \
    "R/W" /* Sensor Compensation Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_A1_LO                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_LO_SCF_APF_COEFF_A1                              \
    (0U) /* Sensor Compensation Filter Coefficient A1 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_LO_SCF_APF_COEFF_A1                              \
    (8U) /* Sensor Compensation Filter Coefficient A1 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_LO_SCF_APF_COEFF_A1                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient A1 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_LO_SCF_APF_COEFF_A1                              \
    "R/W" /* Sensor Compensation Filter Coefficient A1 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_A1_MD                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_MD_SCF_APF_COEFF_A1                              \
    (0U) /* Sensor Compensation Filter Coefficient A1 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_MD_SCF_APF_COEFF_A1                              \
    (8U) /* Sensor Compensation Filter Coefficient A1 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_MD_SCF_APF_COEFF_A1                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient A1 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_MD_SCF_APF_COEFF_A1                              \
    "R/W" /* Sensor Compensation Filter Coefficient A1 */

/* ----------------------------------------------------------------------------------------------------
          SCF_APF_COEFF_A1_HI                                   Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_HI_SCF_APF_COEFF_A1                              \
    (0U) /* Sensor Compensation Filter Coefficient A1 */
#define BITL_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_HI_SCF_APF_COEFF_A1                              \
    (8U) /* Sensor Compensation Filter Coefficient A1 */
#define BITM_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_HI_SCF_APF_COEFF_A1                              \
    (0XFFU) /* Sensor Compensation Filter Coefficient A1 */
#define BITA_ADEMA127_DSP_RAM_CH_SCF_APF_COEFF_A1_HI_SCF_APF_COEFF_A1                              \
    "R/W" /* Sensor Compensation Filter Coefficient A1 */

#endif /* end ifndef ADEMA127_DSP_RAM_CH_ADDR_RDEF_H_ */

/* ====================================================================================================
        ADEMA127_DSP_RAM_ALL Module Instances Address and Mask Definitions
   ====================================================================================================
 */
#define INST_ADEMA127_DSP_RAM_ALL                                                                  \
    (0X05C0U) /* adema127_dsp_ram_all: Configure DSP Parameters, Common Across All Channels*/

#ifndef ADEMA127_DSP_RAM_ALL_ADDR_RDEF_H_
#define ADEMA127_DSP_RAM_ALL_ADDR_RDEF_H_    /* ADEMA127_DSP_RAM_ALL: Configure DSP Parameters,    \
                                                Common Across All Channels */

#define MASK_ADEMA127_DSP_RAM_ALL                                                                  \
    (0X3FFFU) /* ADEMA127_DSP_RAM_ALL: Configure DSP Parameters, Common Across All Channels */

/* ====================================================================================================
        ADEMA127_DSP_RAM_ALL Module Register ResetValue Definitions
   ====================================================================================================
 */
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_LO (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_MD (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_HI (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_LO  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_MD  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_HI  (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_0   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_1   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_2   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_3   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_4   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_5   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_0   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_1   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_2   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_3   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_4   (0X0U)
#define RSTVAL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_5   (0X0U)

/* ====================================================================================================
        ADEMA127_DSP_RAM_ALL Module Register BitPositions, Lengths, Masks and Enumerations
   Definitions
   ====================================================================================================
 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B0_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_LO_LPF_COEFF_B0                                     \
    (0U) /* Low Pass Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_LO_LPF_COEFF_B0                                     \
    (8U) /* Low Pass Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_LO_LPF_COEFF_B0                                     \
    (0XFFU) /* Low Pass Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_LO_LPF_COEFF_B0                                     \
    "R/W" /* Low Pass Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B0_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_MD_LPF_COEFF_B0                                     \
    (0U) /* Low Pass Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_MD_LPF_COEFF_B0                                     \
    (8U) /* Low Pass Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_MD_LPF_COEFF_B0                                     \
    (0XFFU) /* Low Pass Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_MD_LPF_COEFF_B0                                     \
    "R/W" /* Low Pass Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B0_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_HI_LPF_COEFF_B0                                     \
    (0U) /* Low Pass Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_HI_LPF_COEFF_B0                                     \
    (8U) /* Low Pass Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_HI_LPF_COEFF_B0                                     \
    (0XFFU) /* Low Pass Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_HI_LPF_COEFF_B0                                     \
    "R/W" /* Low Pass Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B1_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_LO_LPF_COEFF_B1                                     \
    (0U) /* Low Pass Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_LO_LPF_COEFF_B1                                     \
    (8U) /* Low Pass Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_LO_LPF_COEFF_B1                                     \
    (0XFFU) /* Low Pass Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_LO_LPF_COEFF_B1                                     \
    "R/W" /* Low Pass Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B1_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_MD_LPF_COEFF_B1                                     \
    (0U) /* Low Pass Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_MD_LPF_COEFF_B1                                     \
    (8U) /* Low Pass Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_MD_LPF_COEFF_B1                                     \
    (0XFFU) /* Low Pass Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_MD_LPF_COEFF_B1                                     \
    "R/W" /* Low Pass Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B1_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_HI_LPF_COEFF_B1                                     \
    (0U) /* Low Pass Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_HI_LPF_COEFF_B1                                     \
    (8U) /* Low Pass Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_HI_LPF_COEFF_B1                                     \
    (0XFFU) /* Low Pass Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_HI_LPF_COEFF_B1                                     \
    "R/W" /* Low Pass Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B2_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_LO_LPF_COEFF_B2                                     \
    (0U) /* Low Pass Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_LO_LPF_COEFF_B2                                     \
    (8U) /* Low Pass Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_LO_LPF_COEFF_B2                                     \
    (0XFFU) /* Low Pass Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_LO_LPF_COEFF_B2                                     \
    "R/W" /* Low Pass Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B2_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_MD_LPF_COEFF_B2                                     \
    (0U) /* Low Pass Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_MD_LPF_COEFF_B2                                     \
    (8U) /* Low Pass Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_MD_LPF_COEFF_B2                                     \
    (0XFFU) /* Low Pass Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_MD_LPF_COEFF_B2                                     \
    "R/W" /* Low Pass Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B2_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_HI_LPF_COEFF_B2                                     \
    (0U) /* Low Pass Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_HI_LPF_COEFF_B2                                     \
    (8U) /* Low Pass Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_HI_LPF_COEFF_B2                                     \
    (0XFFU) /* Low Pass Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_HI_LPF_COEFF_B2                                     \
    "R/W" /* Low Pass Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B3_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_LO_LPF_COEFF_B3                                     \
    (0U) /* Low Pass Filter Coefficient B3 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_LO_LPF_COEFF_B3                                     \
    (8U) /* Low Pass Filter Coefficient B3 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_LO_LPF_COEFF_B3                                     \
    (0XFFU) /* Low Pass Filter Coefficient B3 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_LO_LPF_COEFF_B3                                     \
    "R/W" /* Low Pass Filter Coefficient B3 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B3_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_MD_LPF_COEFF_B3                                     \
    (0U) /* Low Pass Filter Coefficient B3 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_MD_LPF_COEFF_B3                                     \
    (8U) /* Low Pass Filter Coefficient B3 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_MD_LPF_COEFF_B3                                     \
    (0XFFU) /* Low Pass Filter Coefficient B3 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_MD_LPF_COEFF_B3                                     \
    "R/W" /* Low Pass Filter Coefficient B3 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B3_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_HI_LPF_COEFF_B3                                     \
    (0U) /* Low Pass Filter Coefficient B3 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_HI_LPF_COEFF_B3                                     \
    (8U) /* Low Pass Filter Coefficient B3 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_HI_LPF_COEFF_B3                                     \
    (0XFFU) /* Low Pass Filter Coefficient B3 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_HI_LPF_COEFF_B3                                     \
    "R/W" /* Low Pass Filter Coefficient B3 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B4_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_LO_LPF_COEFF_B4                                     \
    (0U) /* Low Pass Filter Coefficient B4 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_LO_LPF_COEFF_B4                                     \
    (8U) /* Low Pass Filter Coefficient B4 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_LO_LPF_COEFF_B4                                     \
    (0XFFU) /* Low Pass Filter Coefficient B4 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_LO_LPF_COEFF_B4                                     \
    "R/W" /* Low Pass Filter Coefficient B4 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B4_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_MD_LPF_COEFF_B4                                     \
    (0U) /* Low Pass Filter Coefficient B4 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_MD_LPF_COEFF_B4                                     \
    (8U) /* Low Pass Filter Coefficient B4 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_MD_LPF_COEFF_B4                                     \
    (0XFFU) /* Low Pass Filter Coefficient B4 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_MD_LPF_COEFF_B4                                     \
    "R/W" /* Low Pass Filter Coefficient B4 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B4_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_HI_LPF_COEFF_B4                                     \
    (0U) /* Low Pass Filter Coefficient B4 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_HI_LPF_COEFF_B4                                     \
    (8U) /* Low Pass Filter Coefficient B4 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_HI_LPF_COEFF_B4                                     \
    (0XFFU) /* Low Pass Filter Coefficient B4 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_HI_LPF_COEFF_B4                                     \
    "R/W" /* Low Pass Filter Coefficient B4 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B5_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_LO_LPF_COEFF_B5                                     \
    (0U) /* Low Pass Filter Coefficient B5 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_LO_LPF_COEFF_B5                                     \
    (8U) /* Low Pass Filter Coefficient B5 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_LO_LPF_COEFF_B5                                     \
    (0XFFU) /* Low Pass Filter Coefficient B5 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_LO_LPF_COEFF_B5                                     \
    "R/W" /* Low Pass Filter Coefficient B5 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B5_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_MD_LPF_COEFF_B5                                     \
    (0U) /* Low Pass Filter Coefficient B5 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_MD_LPF_COEFF_B5                                     \
    (8U) /* Low Pass Filter Coefficient B5 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_MD_LPF_COEFF_B5                                     \
    (0XFFU) /* Low Pass Filter Coefficient B5 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_MD_LPF_COEFF_B5                                     \
    "R/W" /* Low Pass Filter Coefficient B5 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B5_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_HI_LPF_COEFF_B5                                     \
    (0U) /* Low Pass Filter Coefficient B5 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_HI_LPF_COEFF_B5                                     \
    (8U) /* Low Pass Filter Coefficient B5 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_HI_LPF_COEFF_B5                                     \
    (0XFFU) /* Low Pass Filter Coefficient B5 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_HI_LPF_COEFF_B5                                     \
    "R/W" /* Low Pass Filter Coefficient B5 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B6_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_LO_LPF_COEFF_B6                                     \
    (0U) /* Low Pass Filter Coefficient B6 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_LO_LPF_COEFF_B6                                     \
    (8U) /* Low Pass Filter Coefficient B6 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_LO_LPF_COEFF_B6                                     \
    (0XFFU) /* Low Pass Filter Coefficient B6 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_LO_LPF_COEFF_B6                                     \
    "R/W" /* Low Pass Filter Coefficient B6 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B6_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_MD_LPF_COEFF_B6                                     \
    (0U) /* Low Pass Filter Coefficient B6 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_MD_LPF_COEFF_B6                                     \
    (8U) /* Low Pass Filter Coefficient B6 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_MD_LPF_COEFF_B6                                     \
    (0XFFU) /* Low Pass Filter Coefficient B6 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_MD_LPF_COEFF_B6                                     \
    "R/W" /* Low Pass Filter Coefficient B6 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B6_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_HI_LPF_COEFF_B6                                     \
    (0U) /* Low Pass Filter Coefficient B6 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_HI_LPF_COEFF_B6                                     \
    (8U) /* Low Pass Filter Coefficient B6 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_HI_LPF_COEFF_B6                                     \
    (0XFFU) /* Low Pass Filter Coefficient B6 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_HI_LPF_COEFF_B6                                     \
    "R/W" /* Low Pass Filter Coefficient B6 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B7_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_LO_LPF_COEFF_B7                                     \
    (0U) /* Low Pass Filter Coefficient B7 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_LO_LPF_COEFF_B7                                     \
    (8U) /* Low Pass Filter Coefficient B7 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_LO_LPF_COEFF_B7                                     \
    (0XFFU) /* Low Pass Filter Coefficient B7 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_LO_LPF_COEFF_B7                                     \
    "R/W" /* Low Pass Filter Coefficient B7 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B7_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_MD_LPF_COEFF_B7                                     \
    (0U) /* Low Pass Filter Coefficient B7 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_MD_LPF_COEFF_B7                                     \
    (8U) /* Low Pass Filter Coefficient B7 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_MD_LPF_COEFF_B7                                     \
    (0XFFU) /* Low Pass Filter Coefficient B7 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_MD_LPF_COEFF_B7                                     \
    "R/W" /* Low Pass Filter Coefficient B7 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B7_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_HI_LPF_COEFF_B7                                     \
    (0U) /* Low Pass Filter Coefficient B7 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_HI_LPF_COEFF_B7                                     \
    (8U) /* Low Pass Filter Coefficient B7 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_HI_LPF_COEFF_B7                                     \
    (0XFFU) /* Low Pass Filter Coefficient B7 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_HI_LPF_COEFF_B7                                     \
    "R/W" /* Low Pass Filter Coefficient B7 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B8_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_LO_LPF_COEFF_B8                                     \
    (0U) /* Low Pass Filter Coefficient B8 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_LO_LPF_COEFF_B8                                     \
    (8U) /* Low Pass Filter Coefficient B8 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_LO_LPF_COEFF_B8                                     \
    (0XFFU) /* Low Pass Filter Coefficient B8 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_LO_LPF_COEFF_B8                                     \
    "R/W" /* Low Pass Filter Coefficient B8 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B8_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_MD_LPF_COEFF_B8                                     \
    (0U) /* Low Pass Filter Coefficient B8 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_MD_LPF_COEFF_B8                                     \
    (8U) /* Low Pass Filter Coefficient B8 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_MD_LPF_COEFF_B8                                     \
    (0XFFU) /* Low Pass Filter Coefficient B8 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_MD_LPF_COEFF_B8                                     \
    "R/W" /* Low Pass Filter Coefficient B8 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B8_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_HI_LPF_COEFF_B8                                     \
    (0U) /* Low Pass Filter Coefficient B8 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_HI_LPF_COEFF_B8                                     \
    (8U) /* Low Pass Filter Coefficient B8 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_HI_LPF_COEFF_B8                                     \
    (0XFFU) /* Low Pass Filter Coefficient B8 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_HI_LPF_COEFF_B8                                     \
    "R/W" /* Low Pass Filter Coefficient B8 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B9_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_LO_LPF_COEFF_B9                                     \
    (0U) /* Low Pass Filter Coefficient B9 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_LO_LPF_COEFF_B9                                     \
    (8U) /* Low Pass Filter Coefficient B9 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_LO_LPF_COEFF_B9                                     \
    (0XFFU) /* Low Pass Filter Coefficient B9 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_LO_LPF_COEFF_B9                                     \
    "R/W" /* Low Pass Filter Coefficient B9 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B9_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_MD_LPF_COEFF_B9                                     \
    (0U) /* Low Pass Filter Coefficient B9 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_MD_LPF_COEFF_B9                                     \
    (8U) /* Low Pass Filter Coefficient B9 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_MD_LPF_COEFF_B9                                     \
    (0XFFU) /* Low Pass Filter Coefficient B9 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_MD_LPF_COEFF_B9                                     \
    "R/W" /* Low Pass Filter Coefficient B9 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B9_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_HI_LPF_COEFF_B9                                     \
    (0U) /* Low Pass Filter Coefficient B9 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_HI_LPF_COEFF_B9                                     \
    (8U) /* Low Pass Filter Coefficient B9 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_HI_LPF_COEFF_B9                                     \
    (0XFFU) /* Low Pass Filter Coefficient B9 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_HI_LPF_COEFF_B9                                     \
    "R/W" /* Low Pass Filter Coefficient B9 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B10_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_LO_LPF_COEFF_B10                                   \
    (0U) /* Low Pass Filter Coefficient B10 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_LO_LPF_COEFF_B10                                   \
    (8U) /* Low Pass Filter Coefficient B10 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_LO_LPF_COEFF_B10                                   \
    (0XFFU) /* Low Pass Filter Coefficient B10 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_LO_LPF_COEFF_B10                                   \
    "R/W" /* Low Pass Filter Coefficient B10 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B10_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_MD_LPF_COEFF_B10                                   \
    (0U) /* Low Pass Filter Coefficient B10 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_MD_LPF_COEFF_B10                                   \
    (8U) /* Low Pass Filter Coefficient B10 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_MD_LPF_COEFF_B10                                   \
    (0XFFU) /* Low Pass Filter Coefficient B10 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_MD_LPF_COEFF_B10                                   \
    "R/W" /* Low Pass Filter Coefficient B10 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B10_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_HI_LPF_COEFF_B10                                   \
    (0U) /* Low Pass Filter Coefficient B10 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_HI_LPF_COEFF_B10                                   \
    (8U) /* Low Pass Filter Coefficient B10 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_HI_LPF_COEFF_B10                                   \
    (0XFFU) /* Low Pass Filter Coefficient B10 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_HI_LPF_COEFF_B10                                   \
    "R/W" /* Low Pass Filter Coefficient B10 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B11_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_LO_LPF_COEFF_B11                                   \
    (0U) /* Low Pass Filter Coefficient B11 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_LO_LPF_COEFF_B11                                   \
    (8U) /* Low Pass Filter Coefficient B11 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_LO_LPF_COEFF_B11                                   \
    (0XFFU) /* Low Pass Filter Coefficient B11 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_LO_LPF_COEFF_B11                                   \
    "R/W" /* Low Pass Filter Coefficient B11 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B11_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_MD_LPF_COEFF_B11                                   \
    (0U) /* Low Pass Filter Coefficient B11 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_MD_LPF_COEFF_B11                                   \
    (8U) /* Low Pass Filter Coefficient B11 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_MD_LPF_COEFF_B11                                   \
    (0XFFU) /* Low Pass Filter Coefficient B11 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_MD_LPF_COEFF_B11                                   \
    "R/W" /* Low Pass Filter Coefficient B11 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B11_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_HI_LPF_COEFF_B11                                   \
    (0U) /* Low Pass Filter Coefficient B11 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_HI_LPF_COEFF_B11                                   \
    (8U) /* Low Pass Filter Coefficient B11 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_HI_LPF_COEFF_B11                                   \
    (0XFFU) /* Low Pass Filter Coefficient B11 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_HI_LPF_COEFF_B11                                   \
    "R/W" /* Low Pass Filter Coefficient B11 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B12_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_LO_LPF_COEFF_B12                                   \
    (0U) /* Low Pass Filter Coefficient B12 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_LO_LPF_COEFF_B12                                   \
    (8U) /* Low Pass Filter Coefficient B12 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_LO_LPF_COEFF_B12                                   \
    (0XFFU) /* Low Pass Filter Coefficient B12 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_LO_LPF_COEFF_B12                                   \
    "R/W" /* Low Pass Filter Coefficient B12 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B12_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_MD_LPF_COEFF_B12                                   \
    (0U) /* Low Pass Filter Coefficient B12 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_MD_LPF_COEFF_B12                                   \
    (8U) /* Low Pass Filter Coefficient B12 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_MD_LPF_COEFF_B12                                   \
    (0XFFU) /* Low Pass Filter Coefficient B12 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_MD_LPF_COEFF_B12                                   \
    "R/W" /* Low Pass Filter Coefficient B12 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B12_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_HI_LPF_COEFF_B12                                   \
    (0U) /* Low Pass Filter Coefficient B12 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_HI_LPF_COEFF_B12                                   \
    (8U) /* Low Pass Filter Coefficient B12 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_HI_LPF_COEFF_B12                                   \
    (0XFFU) /* Low Pass Filter Coefficient B12 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_HI_LPF_COEFF_B12                                   \
    "R/W" /* Low Pass Filter Coefficient B12 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B13_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_LO_LPF_COEFF_B13                                   \
    (0U) /* Low Pass Filter Coefficient B13 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_LO_LPF_COEFF_B13                                   \
    (8U) /* Low Pass Filter Coefficient B13 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_LO_LPF_COEFF_B13                                   \
    (0XFFU) /* Low Pass Filter Coefficient B13 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_LO_LPF_COEFF_B13                                   \
    "R/W" /* Low Pass Filter Coefficient B13 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B13_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_MD_LPF_COEFF_B13                                   \
    (0U) /* Low Pass Filter Coefficient B13 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_MD_LPF_COEFF_B13                                   \
    (8U) /* Low Pass Filter Coefficient B13 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_MD_LPF_COEFF_B13                                   \
    (0XFFU) /* Low Pass Filter Coefficient B13 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_MD_LPF_COEFF_B13                                   \
    "R/W" /* Low Pass Filter Coefficient B13 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B13_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_HI_LPF_COEFF_B13                                   \
    (0U) /* Low Pass Filter Coefficient B13 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_HI_LPF_COEFF_B13                                   \
    (8U) /* Low Pass Filter Coefficient B13 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_HI_LPF_COEFF_B13                                   \
    (0XFFU) /* Low Pass Filter Coefficient B13 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_HI_LPF_COEFF_B13                                   \
    "R/W" /* Low Pass Filter Coefficient B13 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B14_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_LO_LPF_COEFF_B14                                   \
    (0U) /* Low Pass Filter Coefficient B14 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_LO_LPF_COEFF_B14                                   \
    (8U) /* Low Pass Filter Coefficient B14 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_LO_LPF_COEFF_B14                                   \
    (0XFFU) /* Low Pass Filter Coefficient B14 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_LO_LPF_COEFF_B14                                   \
    "R/W" /* Low Pass Filter Coefficient B14 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B14_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_MD_LPF_COEFF_B14                                   \
    (0U) /* Low Pass Filter Coefficient B14 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_MD_LPF_COEFF_B14                                   \
    (8U) /* Low Pass Filter Coefficient B14 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_MD_LPF_COEFF_B14                                   \
    (0XFFU) /* Low Pass Filter Coefficient B14 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_MD_LPF_COEFF_B14                                   \
    "R/W" /* Low Pass Filter Coefficient B14 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B14_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_HI_LPF_COEFF_B14                                   \
    (0U) /* Low Pass Filter Coefficient B14 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_HI_LPF_COEFF_B14                                   \
    (8U) /* Low Pass Filter Coefficient B14 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_HI_LPF_COEFF_B14                                   \
    (0XFFU) /* Low Pass Filter Coefficient B14 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_HI_LPF_COEFF_B14                                   \
    "R/W" /* Low Pass Filter Coefficient B14 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B15_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_LO_LPF_COEFF_B15                                   \
    (0U) /* Low Pass Filter Coefficient B15 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_LO_LPF_COEFF_B15                                   \
    (8U) /* Low Pass Filter Coefficient B15 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_LO_LPF_COEFF_B15                                   \
    (0XFFU) /* Low Pass Filter Coefficient B15 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_LO_LPF_COEFF_B15                                   \
    "R/W" /* Low Pass Filter Coefficient B15 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B15_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_MD_LPF_COEFF_B15                                   \
    (0U) /* Low Pass Filter Coefficient B15 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_MD_LPF_COEFF_B15                                   \
    (8U) /* Low Pass Filter Coefficient B15 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_MD_LPF_COEFF_B15                                   \
    (0XFFU) /* Low Pass Filter Coefficient B15 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_MD_LPF_COEFF_B15                                   \
    "R/W" /* Low Pass Filter Coefficient B15 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B15_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_HI_LPF_COEFF_B15                                   \
    (0U) /* Low Pass Filter Coefficient B15 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_HI_LPF_COEFF_B15                                   \
    (8U) /* Low Pass Filter Coefficient B15 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_HI_LPF_COEFF_B15                                   \
    (0XFFU) /* Low Pass Filter Coefficient B15 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_HI_LPF_COEFF_B15                                   \
    "R/W" /* Low Pass Filter Coefficient B15 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B16_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_LO_LPF_COEFF_B16                                   \
    (0U) /* Low Pass Filter Coefficient B16 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_LO_LPF_COEFF_B16                                   \
    (8U) /* Low Pass Filter Coefficient B16 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_LO_LPF_COEFF_B16                                   \
    (0XFFU) /* Low Pass Filter Coefficient B16 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_LO_LPF_COEFF_B16                                   \
    "R/W" /* Low Pass Filter Coefficient B16 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B16_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_MD_LPF_COEFF_B16                                   \
    (0U) /* Low Pass Filter Coefficient B16 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_MD_LPF_COEFF_B16                                   \
    (8U) /* Low Pass Filter Coefficient B16 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_MD_LPF_COEFF_B16                                   \
    (0XFFU) /* Low Pass Filter Coefficient B16 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_MD_LPF_COEFF_B16                                   \
    "R/W" /* Low Pass Filter Coefficient B16 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B16_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_HI_LPF_COEFF_B16                                   \
    (0U) /* Low Pass Filter Coefficient B16 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_HI_LPF_COEFF_B16                                   \
    (8U) /* Low Pass Filter Coefficient B16 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_HI_LPF_COEFF_B16                                   \
    (0XFFU) /* Low Pass Filter Coefficient B16 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_HI_LPF_COEFF_B16                                   \
    "R/W" /* Low Pass Filter Coefficient B16 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B17_LO                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_LO_LPF_COEFF_B17                                   \
    (0U) /* Low Pass Filter Coefficient B17 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_LO_LPF_COEFF_B17                                   \
    (8U) /* Low Pass Filter Coefficient B17 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_LO_LPF_COEFF_B17                                   \
    (0XFFU) /* Low Pass Filter Coefficient B17 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_LO_LPF_COEFF_B17                                   \
    "R/W" /* Low Pass Filter Coefficient B17 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B17_MD                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_MD_LPF_COEFF_B17                                   \
    (0U) /* Low Pass Filter Coefficient B17 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_MD_LPF_COEFF_B17                                   \
    (8U) /* Low Pass Filter Coefficient B17 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_MD_LPF_COEFF_B17                                   \
    (0XFFU) /* Low Pass Filter Coefficient B17 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_MD_LPF_COEFF_B17                                   \
    "R/W" /* Low Pass Filter Coefficient B17 */

/* ----------------------------------------------------------------------------------------------------
          LPF_COEFF_B17_HI                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_HI_LPF_COEFF_B17                                   \
    (0U) /* Low Pass Filter Coefficient B17 */
#define BITL_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_HI_LPF_COEFF_B17                                   \
    (8U) /* Low Pass Filter Coefficient B17 */
#define BITM_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_HI_LPF_COEFF_B17                                   \
    (0XFFU) /* Low Pass Filter Coefficient B17 */
#define BITA_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_HI_LPF_COEFF_B17                                   \
    "R/W" /* Low Pass Filter Coefficient B17 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B0_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_LO_HPF_COEFF_B0                                     \
    (0U) /* High Pass Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_LO_HPF_COEFF_B0                                     \
    (8U) /* High Pass Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_LO_HPF_COEFF_B0                                     \
    (0XFFU) /* High Pass Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_LO_HPF_COEFF_B0                                     \
    "R/W" /* High Pass Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B0_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_MD_HPF_COEFF_B0                                     \
    (0U) /* High Pass Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_MD_HPF_COEFF_B0                                     \
    (8U) /* High Pass Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_MD_HPF_COEFF_B0                                     \
    (0XFFU) /* High Pass Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_MD_HPF_COEFF_B0                                     \
    "R/W" /* High Pass Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B0_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_HI_HPF_COEFF_B0                                     \
    (0U) /* High Pass Filter Coefficient B0 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_HI_HPF_COEFF_B0                                     \
    (8U) /* High Pass Filter Coefficient B0 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_HI_HPF_COEFF_B0                                     \
    (0XFFU) /* High Pass Filter Coefficient B0 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_HI_HPF_COEFF_B0                                     \
    "R/W" /* High Pass Filter Coefficient B0 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B1_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_LO_HPF_COEFF_B1                                     \
    (0U) /* High Pass Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_LO_HPF_COEFF_B1                                     \
    (8U) /* High Pass Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_LO_HPF_COEFF_B1                                     \
    (0XFFU) /* High Pass Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_LO_HPF_COEFF_B1                                     \
    "R/W" /* High Pass Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B1_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_MD_HPF_COEFF_B1                                     \
    (0U) /* High Pass Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_MD_HPF_COEFF_B1                                     \
    (8U) /* High Pass Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_MD_HPF_COEFF_B1                                     \
    (0XFFU) /* High Pass Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_MD_HPF_COEFF_B1                                     \
    "R/W" /* High Pass Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B1_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_HI_HPF_COEFF_B1                                     \
    (0U) /* High Pass Filter Coefficient B1 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_HI_HPF_COEFF_B1                                     \
    (8U) /* High Pass Filter Coefficient B1 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_HI_HPF_COEFF_B1                                     \
    (0XFFU) /* High Pass Filter Coefficient B1 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_HI_HPF_COEFF_B1                                     \
    "R/W" /* High Pass Filter Coefficient B1 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B2_LO                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_LO_HPF_COEFF_B2                                     \
    (0U) /* High Pass Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_LO_HPF_COEFF_B2                                     \
    (8U) /* High Pass Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_LO_HPF_COEFF_B2                                     \
    (0XFFU) /* High Pass Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_LO_HPF_COEFF_B2                                     \
    "R/W" /* High Pass Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B2_MD                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_MD_HPF_COEFF_B2                                     \
    (0U) /* High Pass Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_MD_HPF_COEFF_B2                                     \
    (8U) /* High Pass Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_MD_HPF_COEFF_B2                                     \
    (0XFFU) /* High Pass Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_MD_HPF_COEFF_B2                                     \
    "R/W" /* High Pass Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_B2_HI                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_HI_HPF_COEFF_B2                                     \
    (0U) /* High Pass Filter Coefficient B2 */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_HI_HPF_COEFF_B2                                     \
    (8U) /* High Pass Filter Coefficient B2 */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_HI_HPF_COEFF_B2                                     \
    (0XFFU) /* High Pass Filter Coefficient B2 */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_HI_HPF_COEFF_B2                                     \
    "R/W" /* High Pass Filter Coefficient B2 */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A1_0                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_0_HPF_COEFF_A1                                      \
    (0U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_0_HPF_COEFF_A1                                      \
    (8U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_0_HPF_COEFF_A1                                      \
    (0XFFU) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_0_HPF_COEFF_A1                                      \
    "R/W" /* High Pass Filter Coefficient A1 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A1_1                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_1_HPF_COEFF_A1                                      \
    (0U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_1_HPF_COEFF_A1                                      \
    (8U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_1_HPF_COEFF_A1                                      \
    (0XFFU) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_1_HPF_COEFF_A1                                      \
    "R/W" /* High Pass Filter Coefficient A1 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A1_2                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_2_HPF_COEFF_A1                                      \
    (0U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_2_HPF_COEFF_A1                                      \
    (8U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_2_HPF_COEFF_A1                                      \
    (0XFFU) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_2_HPF_COEFF_A1                                      \
    "R/W" /* High Pass Filter Coefficient A1 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A1_3                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_3_HPF_COEFF_A1                                      \
    (0U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_3_HPF_COEFF_A1                                      \
    (8U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_3_HPF_COEFF_A1                                      \
    (0XFFU) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_3_HPF_COEFF_A1                                      \
    "R/W" /* High Pass Filter Coefficient A1 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A1_4                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_4_HPF_COEFF_A1                                      \
    (0U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_4_HPF_COEFF_A1                                      \
    (8U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_4_HPF_COEFF_A1                                      \
    (0XFFU) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_4_HPF_COEFF_A1                                      \
    "R/W" /* High Pass Filter Coefficient A1 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A1_5                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_5_HPF_COEFF_A1                                      \
    (0U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_5_HPF_COEFF_A1                                      \
    (8U) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_5_HPF_COEFF_A1                                      \
    (0XFFU) /* High Pass Filter Coefficient A1 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_5_HPF_COEFF_A1                                      \
    "R/W" /* High Pass Filter Coefficient A1 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A2_0                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_0_HPF_COEFF_A2                                      \
    (0U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_0_HPF_COEFF_A2                                      \
    (8U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_0_HPF_COEFF_A2                                      \
    (0XFFU) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_0_HPF_COEFF_A2                                      \
    "R/W" /* High Pass Filter Coefficient A2 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A2_1                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_1_HPF_COEFF_A2                                      \
    (0U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_1_HPF_COEFF_A2                                      \
    (8U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_1_HPF_COEFF_A2                                      \
    (0XFFU) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_1_HPF_COEFF_A2                                      \
    "R/W" /* High Pass Filter Coefficient A2 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A2_2                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_2_HPF_COEFF_A2                                      \
    (0U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_2_HPF_COEFF_A2                                      \
    (8U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_2_HPF_COEFF_A2                                      \
    (0XFFU) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_2_HPF_COEFF_A2                                      \
    "R/W" /* High Pass Filter Coefficient A2 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A2_3                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_3_HPF_COEFF_A2                                      \
    (0U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_3_HPF_COEFF_A2                                      \
    (8U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_3_HPF_COEFF_A2                                      \
    (0XFFU) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_3_HPF_COEFF_A2                                      \
    "R/W" /* High Pass Filter Coefficient A2 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A2_4                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_4_HPF_COEFF_A2                                      \
    (0U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_4_HPF_COEFF_A2                                      \
    (8U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_4_HPF_COEFF_A2                                      \
    (0XFFU) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_4_HPF_COEFF_A2                                      \
    "R/W" /* High Pass Filter Coefficient A2 (Double Precision) */

/* ----------------------------------------------------------------------------------------------------
          HPF_COEFF_A2_5                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_5_HPF_COEFF_A2                                      \
    (0U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITL_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_5_HPF_COEFF_A2                                      \
    (8U) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITM_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_5_HPF_COEFF_A2                                      \
    (0XFFU) /* High Pass Filter Coefficient A2 (Double Precision) */
#define BITA_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_5_HPF_COEFF_A2                                      \
    "R/W" /* High Pass Filter Coefficient A2 (Double Precision) */

#endif /* end ifndef ADEMA127_DSP_RAM_ALL_ADDR_RDEF_H_ */

#endif /* ADEMA127_ADDR_RDEF_H */

/** @} */