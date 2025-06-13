/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file ADE911X_addr_def.h
 * @addtogroup ADC_HEADERS ADC Headers
 * @{
 */

#ifndef ADE911X_ADDR_DEF_H
#define ADE911X_ADDR_DEF_H

#if defined(_LANGUAGE_C) || (defined(__GNUC__) && !defined(__ASSEMBLER__))
#include <stdint.h>
#endif /* _LANGUAGE_C */

/* ====================================================================================================
        ADE911X_MAP0 Module Instances Register Address Defintions
   ====================================================================================================
 */
#define ADDR_ADE911X_MAP0_SWRST       (0X01U) /**< Software Reset. */
#define ADDR_ADE911X_MAP0_CONFIG0     (0X02U) /**< ADC Configuration */
#define ADDR_ADE911X_MAP0_CONFIG_FILT (0X03U) /**< Digital Filter Configuration */
#define ADDR_ADE911X_MAP0_CONFIG_ISO_ACC                                                           \
    (0X05U) /**< Enable Access to Isolated (ISO) Register Space. ISO side is the one with pins     \
               1-14. */
#define ADDR_ADE911X_MAP0_CRC_RESULT_HI                                                            \
    (0X06U) /**< Background Register Map CRC Most Significant Byte */
#define ADDR_ADE911X_MAP0_CRC_RESULT_LO                                                            \
    (0X07U) /**< Background Register Map CRC Least Significant Byte */
#define ADDR_ADE911X_MAP0_EFUSE_REFRESH (0X08U) /**< EFuse Refresh. */
#define ADDR_ADE911X_MAP0_EMI_CONFIG    (0X09U) /**< Configure Isolation Frequency Hopping Method */
#define ADDR_ADE911X_MAP0_EMI_HI_MASK   (0X0AU) /**< Emissions Mask, High Frequency Bounds. */
#define ADDR_ADE911X_MAP0_EMI_LO_MASK   (0X0BU) /**< Emissions Mask, Low Frequency Bounds */
#define ADDR_ADE911X_MAP0_EMI_HI_LIMIT  (0X0CU) /**< Factory Stored High Frequency Limit. */
#define ADDR_ADE911X_MAP0_EMI_MID_LIMIT (0X0DU) /**< Factory Stored Center Frequency Value. */
#define ADDR_ADE911X_MAP0_EMI_LO_LIMIT  (0X0EU) /**< Factory Stored Low Frequency Limit */
#define ADDR_ADE911X_MAP0_MASK0                                                                    \
    (0X0FU) /**< Interrupt Mask0 Register. Mask Register for STATUS0.                              \
             */
#define ADDR_ADE911X_MAP0_MASK1                                                                    \
    (0X10U) /**< Interrupt Mask1 Register. Mask Register for STATUS1.                              \
             */
#define ADDR_ADE911X_MAP0_MASK2                                                                    \
    (0X11U) /**< Interrupt Mask2 Register. Mask Register for STATUS1.                              \
             */
#define ADDR_ADE911X_MAP0_CONFIG_ZX (0X12U) /**< Zero Crossing Configuration. */
#define ADDR_ADE911X_MAP0_SCRATCH   (0X13U) /**< Software Debug Register for Testing SPI R/W. */
#define ADDR_ADE911X_MAP0_SYNC_SNAP (0X14U) /**< ADC Synchronization Register. */
#define ADDR_ADE911X_MAP0_SNAPSHOT_COUNT_HI                                                        \
    (0X17U) /**< System Timing Controller Counter Most Significant Byte. */
#define ADDR_ADE911X_MAP0_SNAPSHOT_COUNT_LO                                                        \
    (0X18U) /**< System Timing Controller Counter Least Significant Byte. */
#define ADDR_ADE911X_MAP0_WR_LOCK       (0X1FU) /**< Configuration Lock Register. */
#define ADDR_ADE911X_MAP0_STATUS0       (0X20U) /**< Latched Status of High Priority Interrupts. */
#define ADDR_ADE911X_MAP0_STATUS1       (0X21U) /**< Latched Status of Low Priority Interrupts. */
#define ADDR_ADE911X_MAP0_STATUS2       (0X22U) /**< Latched Status of Isolated ADC Interrupts. */
#define ADDR_ADE911X_MAP0_COM_FLT_TYPE  (0X23U) /**< ISO to NONISO Communications Fault Type */
#define ADDR_ADE911X_MAP0_COM_FLT_COUNT (0X24U) /**< ISO to NONISO Communications Fault Count. */
#define ADDR_ADE911X_MAP0_CONFIG_CRC    (0X25U) /**< Configuration of Background Register Map CRC. */
#define ADDR_ADE911X_MAP0_I_WAV_HI                                                                 \
    (0X26U) /**< Current Channel Waveform Data Most Significant Byte. */
#define ADDR_ADE911X_MAP0_I_WAV_MD (0X27U) /**< Current Channel Waveform Data Middle Byte. */
#define ADDR_ADE911X_MAP0_I_WAV_LO                                                                 \
    (0X28U) /**< Current Channel Waveform Data Least Significant Byte. */
#define ADDR_ADE911X_MAP0_V1_WAV_HI                                                                \
    (0X29U)                                 /**< V1 Channel Waveform Data Most Significant Byte.   \
                                             */
#define ADDR_ADE911X_MAP0_V1_WAV_MD (0X2AU) /**< V1 Channel Waveform Data Middle Byte. */
#define ADDR_ADE911X_MAP0_V1_WAV_LO                                                                \
    (0X2BU) /**< V1 Channel Waveform Data Least Significant Byte.                                  \
             */
#define ADDR_ADE911X_MAP0_V2_WAV_HI                                                                \
    (0X2CU)                                 /**< V2 Channel Waveform Data Most Significant Byte.   \
                                             */
#define ADDR_ADE911X_MAP0_V2_WAV_MD (0X2DU) /**< V1 Channel Waveform Data Middle Byte. */
#define ADDR_ADE911X_MAP0_V2_WAV_LO                                                                \
    (0X2EU) /**< V1 Channel Waveform Data Least Significant Byte.                                  \
             */
#define ADDR_ADE911X_MAP0_UNIQUE_PART_ID_5                                                         \
    (0X75U) /**< Unique Part ID Most Significant Byte (Byte 5). */
#define ADDR_ADE911X_MAP0_UNIQUE_PART_ID_4 (0X76U) /**< Unique Part ID Byte 4. */
#define ADDR_ADE911X_MAP0_UNIQUE_PART_ID_3 (0X77U) /**< Unique Part ID Byte 3. */
#define ADDR_ADE911X_MAP0_UNIQUE_PART_ID_2 (0X78U) /**< Unique Part ID Byte 2. */
#define ADDR_ADE911X_MAP0_UNIQUE_PART_ID_1 (0X79U) /**< Unique Part ID Byte 1. */
#define ADDR_ADE911X_MAP0_UNIQUE_PART_ID_0                                                         \
    (0X7AU) /**< Unique Part ID Least Significant Byte (Byte 0). */
#define ADDR_ADE911X_MAP0_SILICON_REVISION                                                         \
    (0X7DU)                                       /**< Revision Value of ISO and NONISO Silicon.   \
                                                   */
#define ADDR_ADE911X_MAP0_VERSION_PRODUCT (0X7EU) /**< Product Version Identifier. */

/* ====================================================================================================
        ADE911X_MAP1 Module Instances Register Address Defintions
   ====================================================================================================
 */
#define ADDR_ADE911X_MAP1_DC_OFFSET_MODE (0XCCU) /**< Enable the Current Channel Input Short */

#endif /* ADE911X_ADDR_DEF_H */

/** @} */
