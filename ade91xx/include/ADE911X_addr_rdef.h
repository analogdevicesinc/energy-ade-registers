/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file ADE911X_addr_rdef.h
 * @addtogroup ADC_HEADERS ADC Headers
 * @{
 */

#ifndef ADE911X_ADDR_RDEF_H
#define ADE911X_ADDR_RDEF_H

#if defined(_LANGUAGE_C) || (defined(__GNUC__) && !defined(__ASSEMBLER__))
#include <stdint.h>
#endif /* _LANGUAGE_C */

/* ====================================================================================================
        ADE911X_MAP0 Module Instances Address and Mask Definitions
   ====================================================================================================
 */
#define INST_ADE911X_MAP0 (0X00U) /**< ade911x_map0: Description Not Available*/

#ifndef ADE911X_MAP0_ADDR_RDEF_H_
#define ADE911X_MAP0_ADDR_RDEF_H_  /**< ADE911X_MAP0: Bison Safe Side Addressable SPI register map \
                                    */

#define MASK_ADE911X_MAP0                                                                          \
    (0XFFU) /**< ADE911X_MAP0: Bison Safe Side Addressable SPI register map                        \
             */

/* ====================================================================================================
        ADE911X_MAP0 Module Register ResetValue Definitions
   ====================================================================================================
 */
#define RSTVAL_ADE911X_MAP0_SWRST             (0X0U)
#define RSTVAL_ADE911X_MAP0_CONFIG0           (0X2U)
#define RSTVAL_ADE911X_MAP0_CONFIG_FILT       (0X0U)
#define RSTVAL_ADE911X_MAP0_CONFIG_ISO_ACC    (0X0U)
#define RSTVAL_ADE911X_MAP0_CRC_RESULT_HI     (0XDDU)
#define RSTVAL_ADE911X_MAP0_CRC_RESULT_LO     (0X8DU)
#define RSTVAL_ADE911X_MAP0_EFUSE_REFRESH     (0X0U)
#define RSTVAL_ADE911X_MAP0_EMI_CONFIG        (0X3U)
#define RSTVAL_ADE911X_MAP0_EMI_HI_MASK       (0X0U)
#define RSTVAL_ADE911X_MAP0_EMI_LO_MASK       (0X0U)
#define RSTVAL_ADE911X_MAP0_EMI_HI_LIMIT      (0X0U)
#define RSTVAL_ADE911X_MAP0_EMI_MID_LIMIT     (0X0U)
#define RSTVAL_ADE911X_MAP0_EMI_LO_LIMIT      (0X0U)
#define RSTVAL_ADE911X_MAP0_MASK0             (0X0U)
#define RSTVAL_ADE911X_MAP0_MASK1             (0X0U)
#define RSTVAL_ADE911X_MAP0_MASK2             (0X10U)
#define RSTVAL_ADE911X_MAP0_CONFIG_ZX         (0X0U)
#define RSTVAL_ADE911X_MAP0_SCRATCH           (0X0U)
#define RSTVAL_ADE911X_MAP0_SYNC_SNAP         (0X0U)
#define RSTVAL_ADE911X_MAP0_SNAPSHOT_COUNT_HI (0X0U)
#define RSTVAL_ADE911X_MAP0_SNAPSHOT_COUNT_LO (0X0U)
#define RSTVAL_ADE911X_MAP0_WR_LOCK           (0X5EU)
#define RSTVAL_ADE911X_MAP0_STATUS0           (0X0U)
#define RSTVAL_ADE911X_MAP0_STATUS1           (0X0U)
#define RSTVAL_ADE911X_MAP0_STATUS2           (0X0U)
#define RSTVAL_ADE911X_MAP0_COM_FLT_TYPE      (0X0U)
#define RSTVAL_ADE911X_MAP0_COM_FLT_COUNT     (0X0U)
#define RSTVAL_ADE911X_MAP0_CONFIG_CRC        (0X0U)
#define RSTVAL_ADE911X_MAP0_I_WAV_HI          (0X0U)
#define RSTVAL_ADE911X_MAP0_I_WAV_MD          (0X0U)
#define RSTVAL_ADE911X_MAP0_I_WAV_LO          (0X0U)
#define RSTVAL_ADE911X_MAP0_V1_WAV_HI         (0X0U)
#define RSTVAL_ADE911X_MAP0_V1_WAV_MD         (0X0U)
#define RSTVAL_ADE911X_MAP0_V1_WAV_LO         (0X0U)
#define RSTVAL_ADE911X_MAP0_V2_WAV_HI         (0X0U)
#define RSTVAL_ADE911X_MAP0_V2_WAV_MD         (0X0U)
#define RSTVAL_ADE911X_MAP0_V2_WAV_LO         (0X0U)
#define RSTVAL_ADE911X_MAP0_UNIQUE_PART_ID_5  (0X0U)
#define RSTVAL_ADE911X_MAP0_UNIQUE_PART_ID_4  (0X0U)
#define RSTVAL_ADE911X_MAP0_UNIQUE_PART_ID_3  (0X0U)
#define RSTVAL_ADE911X_MAP0_UNIQUE_PART_ID_2  (0X0U)
#define RSTVAL_ADE911X_MAP0_UNIQUE_PART_ID_1  (0X0U)
#define RSTVAL_ADE911X_MAP0_UNIQUE_PART_ID_0  (0X0U)
#define RSTVAL_ADE911X_MAP0_SILICON_REVISION  (0X12U)
#define RSTVAL_ADE911X_MAP0_VERSION_PRODUCT   (0X0U)

/* ====================================================================================================
        ADE911X_MAP0 Module Register BitPositions, Lengths, Masks and Enumerations Definitions
   ====================================================================================================
 */

/* ----------------------------------------------------------------------------------------------------
          SWRST                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_SWRST_SWRST (0U)    /**< Software Reset */
#define BITL_ADE911X_MAP0_SWRST_SWRST (8U)    /**< Software Reset */
#define BITM_ADE911X_MAP0_SWRST_SWRST (0XFFU) /**< Software Reset */
#define BITA_ADE911X_MAP0_SWRST_SWRST "W"     /**< Software Reset */

#define ENUM_ADE911X_MAP0_SWRST_SWRST_RST (0XD6U) /**< Software Reset Command. */

/* ----------------------------------------------------------------------------------------------------
          CONFIG0                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_CONFIG0_CLKOUT_EN        (0U)    /**< CLKOUT Enable. */
#define BITL_ADE911X_MAP0_CONFIG0_CLKOUT_EN        (1U)    /**< CLKOUT Enable. */
#define BITM_ADE911X_MAP0_CONFIG0_CLKOUT_EN        (0X01U) /**< CLKOUT Enable. */
#define BITA_ADE911X_MAP0_CONFIG0_CLKOUT_EN        "R/W"   /**< CLKOUT Enable. */
#define BITP_ADE911X_MAP0_CONFIG0_CRC_EN_SPI_WRITE (1U)    /**< Enables CRC Check on SPI Writes. */
#define BITL_ADE911X_MAP0_CONFIG0_CRC_EN_SPI_WRITE (1U)    /**< Enables CRC Check on SPI Writes. */
#define BITM_ADE911X_MAP0_CONFIG0_CRC_EN_SPI_WRITE                                                 \
    (0X02U)                                                /**< Enables CRC Check on SPI Writes.   \
                                                            */
#define BITA_ADE911X_MAP0_CONFIG0_CRC_EN_SPI_WRITE "R/W"   /**< Enables CRC Check on SPI Writes. */
#define BITP_ADE911X_MAP0_CONFIG0_STREAM_DBG       (2U)    /**< Stream Debug */
#define BITL_ADE911X_MAP0_CONFIG0_STREAM_DBG       (2U)    /**< Stream Debug */
#define BITM_ADE911X_MAP0_CONFIG0_STREAM_DBG       (0X0CU) /**< Stream Debug */
#define BITA_ADE911X_MAP0_CONFIG0_STREAM_DBG       "R/W"   /**< Stream Debug */

#define ENUM_ADE911X_MAP0_CONFIG0_STREAM_DBG_NORM_OP     (0X00U) /**< Normal Mode. */
#define ENUM_ADE911X_MAP0_CONFIG0_STREAM_DBG_STATIC_MODE (0X01U) /**< Static Mode */
#define ENUM_ADE911X_MAP0_CONFIG0_STREAM_DBG_COUNT_MODE  (0X02U) /**< Count Mode. */
#define ENUM_ADE911X_MAP0_CONFIG0_STREAM_DBG_RESERVED    (0X03U) /**< Reserved. */

/* ----------------------------------------------------------------------------------------------------
          CONFIG_FILT                                           Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG                                              \
    (0U) /**< Digital Signal Processing Configuration */
#define BITL_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG                                              \
    (3U) /**< Digital Signal Processing Configuration */
#define BITM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG                                              \
    (0X07U) /**< Digital Signal Processing Configuration */
#define BITA_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG                                              \
    "R/W" /**< Digital Signal Processing Configuration */
#define BITP_ADE911X_MAP0_CONFIG_FILT_LPF_BW        (3U)    /**< Filter Bandwidth Configuration. */
#define BITL_ADE911X_MAP0_CONFIG_FILT_LPF_BW        (1U)    /**< Filter Bandwidth Configuration. */
#define BITM_ADE911X_MAP0_CONFIG_FILT_LPF_BW        (0X08U) /**< Filter Bandwidth Configuration. */
#define BITA_ADE911X_MAP0_CONFIG_FILT_LPF_BW        "R/W"   /**< Filter Bandwidth Configuration. */
#define BITP_ADE911X_MAP0_CONFIG_FILT_I_ADC_INVERT  (4U)    /**< Invert I Channel Inputs */
#define BITL_ADE911X_MAP0_CONFIG_FILT_I_ADC_INVERT  (1U)    /**< Invert I Channel Inputs */
#define BITM_ADE911X_MAP0_CONFIG_FILT_I_ADC_INVERT  (0X10U) /**< Invert I Channel Inputs */
#define BITA_ADE911X_MAP0_CONFIG_FILT_I_ADC_INVERT  "R/W"   /**< Invert I Channel Inputs */
#define BITP_ADE911X_MAP0_CONFIG_FILT_V1_ADC_INVERT (5U)    /**< Invert V1 Channel Inputs */
#define BITL_ADE911X_MAP0_CONFIG_FILT_V1_ADC_INVERT (1U)    /**< Invert V1 Channel Inputs */
#define BITM_ADE911X_MAP0_CONFIG_FILT_V1_ADC_INVERT (0X20U) /**< Invert V1 Channel Inputs */
#define BITA_ADE911X_MAP0_CONFIG_FILT_V1_ADC_INVERT "R/W"   /**< Invert V1 Channel Inputs */
#define BITP_ADE911X_MAP0_CONFIG_FILT_V2_ADC_INVERT (6U)    /**< Invert V2 Channel Inputs */
#define BITL_ADE911X_MAP0_CONFIG_FILT_V2_ADC_INVERT (1U)    /**< Invert V2 Channel Inputs */
#define BITM_ADE911X_MAP0_CONFIG_FILT_V2_ADC_INVERT (0X40U) /**< Invert V2 Channel Inputs */
#define BITA_ADE911X_MAP0_CONFIG_FILT_V2_ADC_INVERT "R/W"   /**< Invert V2 Channel Inputs */

#define ENUM_ADE911X_MAP0_CONFIG_FILT_LPF_BW_BW_2P7KHZ                                             \
    (0X01U) /**< Bandwidth of 2.7kHz at 8ksps Output Data Rate */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_LPF_BW_BW_3P3KHZ                                             \
    (0X00U) /**< Bandwidth of 3.3kHz at 8ksps Output Data Rate */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_32KHZ                                  \
    (0X00U) /**< Sinc3, 32KHz Sampling. */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_LPF_32KHZ                              \
    (0X01U) /**< Sinc3, Low-Pass Filter (LPF) Enabled, 32kHz Sampling */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_COMP_LPF_32KHZ                         \
    (0X02U) /**< Sinc3, Compensation Enabled, LPF Enabled, 32KHz Sampling. */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_LPF_8KHZ                               \
    (0X03U) /**< Sinc3, LPF Enabled, 8KHz Sampling. */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_COMP_LPF_8KHZ                          \
    (0X04U) /**< Sinc3, Compensation Enabled, LPF Enabled, 8KHz Sampling. */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_LPF_4KHZ                               \
    (0X05U) /**< Sinc3, LPF Enabled, 4kHz Sampling */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_LPF_2KHZ                               \
    (0X06U) /**< Sinc3, LPF Enabled, 2kHz Sampling */
#define ENUM_ADE911X_MAP0_CONFIG_FILT_DATAPATH_CONFIG_SINC3_LPF_1KHZ                               \
    (0X07U) /**< Sinc3, LPF Enabled, 1kHz Sampling */

/* ----------------------------------------------------------------------------------------------------
          CONFIG_ISO_ACC                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_CONFIG_ISO_ACC_ISO_WR_ACC_EN                                             \
    (0U) /**< Enable Write Access to DC_OFFSET_MODE Register. */
#define BITL_ADE911X_MAP0_CONFIG_ISO_ACC_ISO_WR_ACC_EN                                             \
    (1U) /**< Enable Write Access to DC_OFFSET_MODE Register. */
#define BITM_ADE911X_MAP0_CONFIG_ISO_ACC_ISO_WR_ACC_EN                                             \
    (0X01U) /**< Enable Write Access to DC_OFFSET_MODE Register. */
#define BITA_ADE911X_MAP0_CONFIG_ISO_ACC_ISO_WR_ACC_EN                                             \
    "R/W" /**< Enable Write Access to DC_OFFSET_MODE Register. */

/* ----------------------------------------------------------------------------------------------------
          CRC_RESULT_HI                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_CRC_RESULT_HI_CRC_RESULT (0U)    /**< Register Map CRC. */
#define BITL_ADE911X_MAP0_CRC_RESULT_HI_CRC_RESULT (8U)    /**< Register Map CRC. */
#define BITM_ADE911X_MAP0_CRC_RESULT_HI_CRC_RESULT (0XFFU) /**< Register Map CRC. */
#define BITA_ADE911X_MAP0_CRC_RESULT_HI_CRC_RESULT "R"     /**< Register Map CRC. */

/* ----------------------------------------------------------------------------------------------------
          CRC_RESULT_LO                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_CRC_RESULT_LO_CRC_RESULT (0U)    /**< Register Map CRC. */
#define BITL_ADE911X_MAP0_CRC_RESULT_LO_CRC_RESULT (8U)    /**< Register Map CRC. */
#define BITM_ADE911X_MAP0_CRC_RESULT_LO_CRC_RESULT (0XFFU) /**< Register Map CRC. */
#define BITA_ADE911X_MAP0_CRC_RESULT_LO_CRC_RESULT "R"     /**< Register Map CRC. */

/* ----------------------------------------------------------------------------------------------------
          EFUSE_REFRESH                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_EFUSE_REFRESH_EFUSE_REFRESH                                              \
    (0U) /**< Forces a Refresh of EFuse Memory.                                                    \
          */
#define BITL_ADE911X_MAP0_EFUSE_REFRESH_EFUSE_REFRESH                                              \
    (1U) /**< Forces a Refresh of EFuse Memory.                                                    \
          */
#define BITM_ADE911X_MAP0_EFUSE_REFRESH_EFUSE_REFRESH                                              \
    (0X01U) /**< Forces a Refresh of EFuse Memory. */
#define BITA_ADE911X_MAP0_EFUSE_REFRESH_EFUSE_REFRESH                                              \
    "R/W" /**< Forces a Refresh of EFuse Memory. */

/* ----------------------------------------------------------------------------------------------------
          EMI_CONFIG                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG (0U)    /**< EMI Frequency Hopping Selection. */
#define BITL_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG (3U)    /**< EMI Frequency Hopping Selection. */
#define BITM_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG (0X07U) /**< EMI Frequency Hopping Selection. */
#define BITA_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG "R/W"   /**< EMI Frequency Hopping Selection. */

#define ENUM_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG_SAWTOOTH_RISING                                    \
    (0X00U) /**< Sawtooth Frequency Rising. */
#define ENUM_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG_SAWTOOTH_FALLING                                   \
    (0X01U)                                                  /**< Sawtooth Frequency Falling. */
#define ENUM_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG_RAMP (0X02U) /**< Ramp */
#define ENUM_ADE911X_MAP0_EMI_CONFIG_EMI_CONFIG_RAND (0X03U) /**< Random Hopping Frequency. */

/* ----------------------------------------------------------------------------------------------------
          EMI_HI_MASK                                           Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_EMI_HI_MASK_EMI_HI_MASK                                                  \
    (0U) /**< Emissions Mask, High Frequency Bounds. */
#define BITL_ADE911X_MAP0_EMI_HI_MASK_EMI_HI_MASK                                                  \
    (8U) /**< Emissions Mask, High Frequency Bounds. */
#define BITM_ADE911X_MAP0_EMI_HI_MASK_EMI_HI_MASK                                                  \
    (0XFFU) /**< Emissions Mask, High Frequency Bounds. */
#define BITA_ADE911X_MAP0_EMI_HI_MASK_EMI_HI_MASK                                                  \
    "R/W" /**< Emissions Mask, High Frequency Bounds. */

/* ----------------------------------------------------------------------------------------------------
          EMI_LO_MASK                                           Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_EMI_LO_MASK_EMI_LO_MASK                                                  \
    (0U) /**< Emissions Mask, Low Frequency Bounds                                                 \
          */
#define BITL_ADE911X_MAP0_EMI_LO_MASK_EMI_LO_MASK                                                  \
    (8U) /**< Emissions Mask, Low Frequency Bounds                                                 \
          */
#define BITM_ADE911X_MAP0_EMI_LO_MASK_EMI_LO_MASK                                                  \
    (0XFFU) /**< Emissions Mask, Low Frequency Bounds */
#define BITA_ADE911X_MAP0_EMI_LO_MASK_EMI_LO_MASK                                                  \
    "R/W" /**< Emissions Mask, Low Frequency Bounds                                                \
           */

/* ----------------------------------------------------------------------------------------------------
          EMI_HI_LIMIT                                          Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_EMI_HI_LIMIT_EMI_HI_LIMIT                                                \
    (0U) /**< Factory Stored High Frequency Limit. */
#define BITL_ADE911X_MAP0_EMI_HI_LIMIT_EMI_HI_LIMIT                                                \
    (8U) /**< Factory Stored High Frequency Limit. */
#define BITM_ADE911X_MAP0_EMI_HI_LIMIT_EMI_HI_LIMIT                                                \
    (0XFFU) /**< Factory Stored High Frequency Limit. */
#define BITA_ADE911X_MAP0_EMI_HI_LIMIT_EMI_HI_LIMIT                                                \
    "R" /**< Factory Stored High Frequency Limit.                                                  \
         */

/* ----------------------------------------------------------------------------------------------------
          EMI_MID_LIMIT                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_EMI_MID_LIMIT_EMI_MID_LIMIT                                              \
    (0U) /**< Factory Stored Center Frequency Value. */
#define BITL_ADE911X_MAP0_EMI_MID_LIMIT_EMI_MID_LIMIT                                              \
    (8U) /**< Factory Stored Center Frequency Value. */
#define BITM_ADE911X_MAP0_EMI_MID_LIMIT_EMI_MID_LIMIT                                              \
    (0XFFU) /**< Factory Stored Center Frequency Value. */
#define BITA_ADE911X_MAP0_EMI_MID_LIMIT_EMI_MID_LIMIT                                              \
    "R" /**< Factory Stored Center Frequency Value. */

/* ----------------------------------------------------------------------------------------------------
          EMI_LO_LIMIT                                          Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_EMI_LO_LIMIT_EMI_LO_LIMIT                                                \
    (0U) /**< Factory Stored Low Frequency Limit.                                                  \
          */
#define BITL_ADE911X_MAP0_EMI_LO_LIMIT_EMI_LO_LIMIT                                                \
    (8U) /**< Factory Stored Low Frequency Limit.                                                  \
          */
#define BITM_ADE911X_MAP0_EMI_LO_LIMIT_EMI_LO_LIMIT                                                \
    (0XFFU) /**< Factory Stored Low Frequency Limit. */
#define BITA_ADE911X_MAP0_EMI_LO_LIMIT_EMI_LO_LIMIT                                                \
    "R" /**< Factory Stored Low Frequency Limit.                                                   \
         */

/* ----------------------------------------------------------------------------------------------------
          MASK0                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_MASK0_COMFLT_ERR_MASK  (0U)    /**< COM_FLT Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK0_COMFLT_ERR_MASK  (1U)    /**< COM_FLT Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK0_COMFLT_ERR_MASK  (0X01U) /**< COM_FLT Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK0_COMFLT_ERR_MASK  "R/W"   /**< COM_FLT Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK0_SPI_CRC_ERR_MASK (1U)    /**< SPI_CRC_ERR Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK0_SPI_CRC_ERR_MASK (1U)    /**< SPI_CRC_ERR Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK0_SPI_CRC_ERR_MASK (0X02U) /**< SPI_CRC_ERR Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK0_SPI_CRC_ERR_MASK "R/W"   /**< SPI_CRC_ERR Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK0_CRC_CHG_MASK     (3U)    /**< CRC_CHG Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK0_CRC_CHG_MASK     (1U)    /**< CRC_CHG Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK0_CRC_CHG_MASK     (0X08U) /**< CRC_CHG Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK0_CRC_CHG_MASK     "R/W"   /**< CRC_CHG Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK0_COM_UP_MASK      (4U)    /**< COM_UP Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK0_COM_UP_MASK      (1U)    /**< COM_UP Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK0_COM_UP_MASK      (0X10U) /**< COM_UP Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK0_COM_UP_MASK      "R/W"   /**< COM_UP Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK0_STATUS2X_MASK    (6U)    /**< STATUS2 Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK0_STATUS2X_MASK    (1U)    /**< STATUS2 Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK0_STATUS2X_MASK    (0X40U) /**< STATUS2 Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK0_STATUS2X_MASK    "R/W"   /**< STATUS2 Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK0_STATUS1X_MASK    (7U)    /**< STATUS1 Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK0_STATUS1X_MASK    (1U)    /**< STATUS1 Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK0_STATUS1X_MASK    (0X80U) /**< STATUS1 Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK0_STATUS1X_MASK    "R/W"   /**< STATUS1 Interrupt Mask */

/* ----------------------------------------------------------------------------------------------------
          MASK1                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_MASK1_ADC_SYNC_DONE_MASK                                                 \
    (0U) /**< ADC Sync Done Update Interrupt Mask                                                  \
          */
#define BITL_ADE911X_MAP0_MASK1_ADC_SYNC_DONE_MASK                                                 \
    (1U) /**< ADC Sync Done Update Interrupt Mask                                                  \
          */
#define BITM_ADE911X_MAP0_MASK1_ADC_SYNC_DONE_MASK                                                 \
    (0X01U) /**< ADC Sync Done Update Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK1_ADC_SYNC_DONE_MASK                                                 \
    "R/W" /**< ADC Sync Done Update Interrupt Mask                                                 \
           */
#define BITP_ADE911X_MAP0_MASK1_I_WAV_OVRNG_MASK                                                   \
    (1U) /**< Current Channel Overrange Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK1_I_WAV_OVRNG_MASK                                                   \
    (1U) /**< Current Channel Overrange Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK1_I_WAV_OVRNG_MASK                                                   \
    (0X02U) /**< Current Channel Overrange Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK1_I_WAV_OVRNG_MASK                                                   \
    "R/W" /**< Current Channel Overrange Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK1_V1_WAV_OVRNG_MASK (2U) /**< V1 Channel Overrange Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK1_V1_WAV_OVRNG_MASK (1U) /**< V1 Channel Overrange Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK1_V1_WAV_OVRNG_MASK                                                  \
    (0X04U) /**< V1 Channel Overrange Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK1_V1_WAV_OVRNG_MASK                                                  \
    "R/W"                                              /**< V1 Channel Overrange Interrupt Mask    \
                                                        */
#define BITP_ADE911X_MAP0_MASK1_V2_WAV_OVRNG_MASK (3U) /**< V2 Channel Overrange Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK1_V2_WAV_OVRNG_MASK (1U) /**< V2 Channel Overrange Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK1_V2_WAV_OVRNG_MASK                                                  \
    (0X08U) /**< V2 Channel Overrange Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK1_V2_WAV_OVRNG_MASK                                                  \
    "R/W" /**< V2 Channel Overrange Interrupt Mask                                                 \
           */

/* ----------------------------------------------------------------------------------------------------
          MASK2                                                 Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_MASK2_ISO_TEST_MMR_ERR_MASK                                              \
    (0U) /**< Test Memory Mapped Register (MMR) Field Detected Interrupt Mask. */
#define BITL_ADE911X_MAP0_MASK2_ISO_TEST_MMR_ERR_MASK                                              \
    (1U) /**< Test Memory Mapped Register (MMR) Field Detected Interrupt Mask. */
#define BITM_ADE911X_MAP0_MASK2_ISO_TEST_MMR_ERR_MASK                                              \
    (0X01U) /**< Test Memory Mapped Register (MMR) Field Detected Interrupt Mask. */
#define BITA_ADE911X_MAP0_MASK2_ISO_TEST_MMR_ERR_MASK                                              \
    "R/W" /**< Test Memory Mapped Register (MMR) Field Detected Interrupt Mask. */
#define BITP_ADE911X_MAP0_MASK2_ISO_DIG_MOD_I_OVF_MASK                                             \
    (1U) /**< Digital Modulator Current Channel Overflow Interrupt Mask. */
#define BITL_ADE911X_MAP0_MASK2_ISO_DIG_MOD_I_OVF_MASK                                             \
    (1U) /**< Digital Modulator Current Channel Overflow Interrupt Mask. */
#define BITM_ADE911X_MAP0_MASK2_ISO_DIG_MOD_I_OVF_MASK                                             \
    (0X02U) /**< Digital Modulator Current Channel Overflow Interrupt Mask. */
#define BITA_ADE911X_MAP0_MASK2_ISO_DIG_MOD_I_OVF_MASK                                             \
    "R/W" /**< Digital Modulator Current Channel Overflow Interrupt Mask. */
#define BITP_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V1_OVF_MASK                                            \
    (2U) /**< Digital Modulator V1 Channel Overflow Interrupt Mask. */
#define BITL_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V1_OVF_MASK                                            \
    (1U) /**< Digital Modulator V1 Channel Overflow Interrupt Mask. */
#define BITM_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V1_OVF_MASK                                            \
    (0X04U) /**< Digital Modulator V1 Channel Overflow Interrupt Mask. */
#define BITA_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V1_OVF_MASK                                            \
    "R/W" /**< Digital Modulator V1 Channel Overflow Interrupt Mask. */
#define BITP_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V2_OVF_MASK                                            \
    (3U) /**< Digital Modulator V2 Overflow Interrupt Mask. */
#define BITL_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V2_OVF_MASK                                            \
    (1U) /**< Digital Modulator V2 Overflow Interrupt Mask. */
#define BITM_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V2_OVF_MASK                                            \
    (0X08U) /**< Digital Modulator V2 Overflow Interrupt Mask. */
#define BITA_ADE911X_MAP0_MASK2_ISO_DIG_MOD_V2_OVF_MASK                                            \
    "R/W" /**< Digital Modulator V2 Overflow Interrupt Mask. */
#define BITP_ADE911X_MAP0_MASK2_ISO_EFUSE_MEM_ERR_MASK                                             \
    (4U) /**< EFuse Memory Error Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK2_ISO_EFUSE_MEM_ERR_MASK                                             \
    (1U) /**< EFuse Memory Error Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK2_ISO_EFUSE_MEM_ERR_MASK                                             \
    (0X10U) /**< EFuse Memory Error Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK2_ISO_EFUSE_MEM_ERR_MASK                                             \
    "R/W" /**< EFuse Memory Error Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK2_ISO_PHY_CRC_ERR_MASK                                               \
    (5U) /**< Data Link CRC Error Interrupt Mask                                                   \
          */
#define BITL_ADE911X_MAP0_MASK2_ISO_PHY_CRC_ERR_MASK                                               \
    (1U) /**< Data Link CRC Error Interrupt Mask                                                   \
          */
#define BITM_ADE911X_MAP0_MASK2_ISO_PHY_CRC_ERR_MASK                                               \
    (0X20U) /**< Data Link CRC Error Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK2_ISO_PHY_CRC_ERR_MASK                                               \
    "R/W" /**< Data Link CRC Error Interrupt Mask */
#define BITP_ADE911X_MAP0_MASK2_ISO_CLK_STBL_ERR_MASK                                              \
    (6U) /**< Clock Stability Error Interrupt Mask */
#define BITL_ADE911X_MAP0_MASK2_ISO_CLK_STBL_ERR_MASK                                              \
    (1U) /**< Clock Stability Error Interrupt Mask */
#define BITM_ADE911X_MAP0_MASK2_ISO_CLK_STBL_ERR_MASK                                              \
    (0X40U) /**< Clock Stability Error Interrupt Mask */
#define BITA_ADE911X_MAP0_MASK2_ISO_CLK_STBL_ERR_MASK                                              \
    "R/W" /**< Clock Stability Error Interrupt Mask */

/* ----------------------------------------------------------------------------------------------------
          CONFIG_ZX                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG (0U) /**< Zero Crossing Channel Select. */
#define BITL_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG (2U) /**< Zero Crossing Channel Select. */
#define BITM_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG                                              \
    (0X03U)                                                   /**< Zero Crossing Channel Select.   \
                                                               */
#define BITA_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG "R/W"   /**< Zero Crossing Channel Select. */
#define BITP_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL       (2U)    /**< Zero Crossing Edge Select */
#define BITL_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL       (2U)    /**< Zero Crossing Edge Select */
#define BITM_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL       (0X0CU) /**< Zero Crossing Edge Select */
#define BITA_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL       "R/W"   /**< Zero Crossing Edge Select */

#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL_SQUARE                                             \
    (0X00U) /**< ZX Pin Reflects the Sign of the Input Signal */
#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL_POSEDGE                                            \
    (0X01U) /**< Detect Zero Crossings with Positive Slope */
#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL_NEGEDGE                                            \
    (0X02U) /**< Detect Zero Crossings with Negative Slope */
#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_EDGE_SEL_EITHER                                             \
    (0X03U) /**< Detect Zero Crossings with Positive or Negative Slopes */
#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG_NO_ZX                                        \
    (0X00U) /**< Disable Zero Crossing Output */
#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG_ZX_I1                                        \
    (0X01U) /**< Output Zero Crossing Function from the Current Channel on ZX Pin */
#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG_ZX_V1                                        \
    (0X02U) /**< Output Zero Crossing Function from the V1 Channel on ZX Pin */
#define ENUM_ADE911X_MAP0_CONFIG_ZX_ZX_CHANNEL_CONFIG_ZX_V2                                        \
    (0X03U) /**< Output Zero Crossing Function from the V2 Channel on ZX Pin */

/* ----------------------------------------------------------------------------------------------------
          SCRATCH                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_SCRATCH_SCRATCH                                                          \
    (0U) /**< Software Debug Register for Testing SPI R/W.                                         \
          */
#define BITL_ADE911X_MAP0_SCRATCH_SCRATCH                                                          \
    (8U) /**< Software Debug Register for Testing SPI R/W.                                         \
          */
#define BITM_ADE911X_MAP0_SCRATCH_SCRATCH                                                          \
    (0XFFU) /**< Software Debug Register for Testing SPI R/W. */
#define BITA_ADE911X_MAP0_SCRATCH_SCRATCH                                                          \
    "R/W" /**< Software Debug Register for Testing SPI R/W.                                        \
           */

/* ----------------------------------------------------------------------------------------------------
          SYNC_SNAP                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_SYNC_SNAP_SNAPSHOT       (0U)    /**< ADC Snapshot. */
#define BITL_ADE911X_MAP0_SYNC_SNAP_SNAPSHOT       (1U)    /**< ADC Snapshot. */
#define BITM_ADE911X_MAP0_SYNC_SNAP_SNAPSHOT       (0X01U) /**< ADC Snapshot. */
#define BITA_ADE911X_MAP0_SYNC_SNAP_SNAPSHOT       "R/W"   /**< ADC Snapshot. */
#define BITP_ADE911X_MAP0_SYNC_SNAP_ALIGN          (1U)    /**< ADC Align */
#define BITL_ADE911X_MAP0_SYNC_SNAP_ALIGN          (1U)    /**< ADC Align */
#define BITM_ADE911X_MAP0_SYNC_SNAP_ALIGN          (0X02U) /**< ADC Align */
#define BITA_ADE911X_MAP0_SYNC_SNAP_ALIGN          "R/W"   /**< ADC Align */
#define BITP_ADE911X_MAP0_SYNC_SNAP_PREP_BROADCAST (2U)    /**< ADC Prepare Broadcast. */
#define BITL_ADE911X_MAP0_SYNC_SNAP_PREP_BROADCAST (1U)    /**< ADC Prepare Broadcast. */
#define BITM_ADE911X_MAP0_SYNC_SNAP_PREP_BROADCAST (0X04U) /**< ADC Prepare Broadcast. */
#define BITA_ADE911X_MAP0_SYNC_SNAP_PREP_BROADCAST "R/W"   /**< ADC Prepare Broadcast. */

/* ----------------------------------------------------------------------------------------------------
          SNAPSHOT_COUNT_HI                                     Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    (0U) /**< System Timing Controller Count */
#define BITL_ADE911X_MAP0_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    (6U) /**< System Timing Controller Count */
#define BITM_ADE911X_MAP0_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    (0X3FU) /**< System Timing Controller Count */
#define BITA_ADE911X_MAP0_SNAPSHOT_COUNT_HI_SNAPSHOT_COUNT                                         \
    "R" /**< System Timing Controller Count */

/* ----------------------------------------------------------------------------------------------------
          SNAPSHOT_COUNT_LO                                     Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    (0U) /**< System Timing Controller Count */
#define BITL_ADE911X_MAP0_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    (8U) /**< System Timing Controller Count */
#define BITM_ADE911X_MAP0_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    (0XFFU) /**< System Timing Controller Count */
#define BITA_ADE911X_MAP0_SNAPSHOT_COUNT_LO_SNAPSHOT_COUNT                                         \
    "R" /**< System Timing Controller Count */

/* ----------------------------------------------------------------------------------------------------
          WR_LOCK                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_WR_LOCK_WR_LOCK (0U)    /**< Configuration Register Write Lock */
#define BITL_ADE911X_MAP0_WR_LOCK_WR_LOCK (8U)    /**< Configuration Register Write Lock */
#define BITM_ADE911X_MAP0_WR_LOCK_WR_LOCK (0XFFU) /**< Configuration Register Write Lock */
#define BITA_ADE911X_MAP0_WR_LOCK_WR_LOCK "R/W"   /**< Configuration Register Write Lock */

#define ENUM_ADE911X_MAP0_WR_LOCK_WR_LOCK_CONFIG_LOCK   (0XD4U) /**< Lock Key. */
#define ENUM_ADE911X_MAP0_WR_LOCK_WR_LOCK_CONFIG_UNLOCK (0X5EU) /**< Unlock Key. */

/* ----------------------------------------------------------------------------------------------------
          STATUS0                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_STATUS0_COMFLT_ERR (0U) /**< Isolation Communications Fault Interrupt */
#define BITL_ADE911X_MAP0_STATUS0_COMFLT_ERR (1U) /**< Isolation Communications Fault Interrupt */
#define BITM_ADE911X_MAP0_STATUS0_COMFLT_ERR                                                       \
    (0X01U) /**< Isolation Communications Fault Interrupt */
#define BITA_ADE911X_MAP0_STATUS0_COMFLT_ERR                                                       \
    "R/W"                                            /**< Isolation Communications Fault Interrupt \
                                                      */
#define BITP_ADE911X_MAP0_STATUS0_SPI_CRC_ERR   (1U) /**< SPI Write CRC Error Interrupt */
#define BITL_ADE911X_MAP0_STATUS0_SPI_CRC_ERR   (1U) /**< SPI Write CRC Error Interrupt */
#define BITM_ADE911X_MAP0_STATUS0_SPI_CRC_ERR   (0X02U) /**< SPI Write CRC Error Interrupt */
#define BITA_ADE911X_MAP0_STATUS0_SPI_CRC_ERR   "R/W"   /**< SPI Write CRC Error Interrupt */
#define BITP_ADE911X_MAP0_STATUS0_EFUSE_MEM_ERR (2U)    /**< eFuse Memory Error. */
#define BITL_ADE911X_MAP0_STATUS0_EFUSE_MEM_ERR (1U)    /**< eFuse Memory Error. */
#define BITM_ADE911X_MAP0_STATUS0_EFUSE_MEM_ERR (0X04U) /**< eFuse Memory Error. */
#define BITA_ADE911X_MAP0_STATUS0_EFUSE_MEM_ERR "R"     /**< eFuse Memory Error. */
#define BITP_ADE911X_MAP0_STATUS0_CRC_CHG                                                          \
    (3U) /**< Register Map Background CRC Change Interrupt                                         \
          */
#define BITL_ADE911X_MAP0_STATUS0_CRC_CHG                                                          \
    (1U) /**< Register Map Background CRC Change Interrupt                                         \
          */
#define BITM_ADE911X_MAP0_STATUS0_CRC_CHG                                                          \
    (0X08U) /**< Register Map Background CRC Change Interrupt */
#define BITA_ADE911X_MAP0_STATUS0_CRC_CHG                                                          \
    "R/W"                                     /**< Register Map Background CRC Change Interrupt    \
                                               */
#define BITP_ADE911X_MAP0_STATUS0_COM_UP (4U) /**< Communication Across Isolation Established. */
#define BITL_ADE911X_MAP0_STATUS0_COM_UP (1U) /**< Communication Across Isolation Established. */
#define BITM_ADE911X_MAP0_STATUS0_COM_UP                                                           \
    (0X10U) /**< Communication Across Isolation Established.                                       \
             */
#define BITA_ADE911X_MAP0_STATUS0_COM_UP     "R/W" /**< Communication Across Isolation Established. */
#define BITP_ADE911X_MAP0_STATUS0_RESET_DONE (5U)    /**< Reset Done Interrupt. */
#define BITL_ADE911X_MAP0_STATUS0_RESET_DONE (1U)    /**< Reset Done Interrupt. */
#define BITM_ADE911X_MAP0_STATUS0_RESET_DONE (0X20U) /**< Reset Done Interrupt. */
#define BITA_ADE911X_MAP0_STATUS0_RESET_DONE "R/W"   /**< Reset Done Interrupt. */
#define BITP_ADE911X_MAP0_STATUS0_STATUS2X   (6U)    /**< STATUS2 Indicator. */
#define BITL_ADE911X_MAP0_STATUS0_STATUS2X   (1U)    /**< STATUS2 Indicator. */
#define BITM_ADE911X_MAP0_STATUS0_STATUS2X   (0X40U) /**< STATUS2 Indicator. */
#define BITA_ADE911X_MAP0_STATUS0_STATUS2X   "R"     /**< STATUS2 Indicator. */
#define BITP_ADE911X_MAP0_STATUS0_STATUS1X   (7U)    /**< STATUS1 Indicator. */
#define BITL_ADE911X_MAP0_STATUS0_STATUS1X   (1U)    /**< STATUS1 Indicator. */
#define BITM_ADE911X_MAP0_STATUS0_STATUS1X   (0X80U) /**< STATUS1 Indicator. */
#define BITA_ADE911X_MAP0_STATUS0_STATUS1X   "R"     /**< STATUS1 Indicator. */

/* ----------------------------------------------------------------------------------------------------
          STATUS1                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_STATUS1_ADC_SYNC_DONE                                                    \
    (0U) /**< SPI Write to ADC Synchronization Registers. */
#define BITL_ADE911X_MAP0_STATUS1_ADC_SYNC_DONE                                                    \
    (1U) /**< SPI Write to ADC Synchronization Registers. */
#define BITM_ADE911X_MAP0_STATUS1_ADC_SYNC_DONE                                                    \
    (0X01U) /**< SPI Write to ADC Synchronization Registers. */
#define BITA_ADE911X_MAP0_STATUS1_ADC_SYNC_DONE                                                    \
    "R/W" /**< SPI Write to ADC Synchronization Registers. */
#define BITP_ADE911X_MAP0_STATUS1_I_WAV_OVRNG (1U) /**< ADC Current Channel Waveform Overrange. */
#define BITL_ADE911X_MAP0_STATUS1_I_WAV_OVRNG (1U) /**< ADC Current Channel Waveform Overrange. */
#define BITM_ADE911X_MAP0_STATUS1_I_WAV_OVRNG                                                      \
    (0X02U) /**< ADC Current Channel Waveform Overrange. */
#define BITA_ADE911X_MAP0_STATUS1_I_WAV_OVRNG                                                      \
    "R/W"                                           /**< ADC Current Channel Waveform Overrange.   \
                                                     */
#define BITP_ADE911X_MAP0_STATUS1_V1_WAV_OVRNG (2U) /**< ADC V1 Channel Waveform Overrange. */
#define BITL_ADE911X_MAP0_STATUS1_V1_WAV_OVRNG (1U) /**< ADC V1 Channel Waveform Overrange. */
#define BITM_ADE911X_MAP0_STATUS1_V1_WAV_OVRNG (0X04U) /**< ADC V1 Channel Waveform Overrange. */
#define BITA_ADE911X_MAP0_STATUS1_V1_WAV_OVRNG "R/W"   /**< ADC V1 Channel Waveform Overrange. */
#define BITP_ADE911X_MAP0_STATUS1_V2_WAV_OVRNG (3U)    /**< ADC V2 Channel Waveform Overrange. */
#define BITL_ADE911X_MAP0_STATUS1_V2_WAV_OVRNG (1U)    /**< ADC V2 Channel Waveform Overrange. */
#define BITM_ADE911X_MAP0_STATUS1_V2_WAV_OVRNG (0X08U) /**< ADC V2 Channel Waveform Overrange. */
#define BITA_ADE911X_MAP0_STATUS1_V2_WAV_OVRNG "R/W"   /**< ADC V2 Channel Waveform Overrange. */

/* ----------------------------------------------------------------------------------------------------
          STATUS2                                               Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_STATUS2_ISO_TEST_MMR_ERR                                                 \
    (0U) /**< ISO Die Register Change Detected and Corrected. */
#define BITL_ADE911X_MAP0_STATUS2_ISO_TEST_MMR_ERR                                                 \
    (1U) /**< ISO Die Register Change Detected and Corrected. */
#define BITM_ADE911X_MAP0_STATUS2_ISO_TEST_MMR_ERR                                                 \
    (0X01U) /**< ISO Die Register Change Detected and Corrected. */
#define BITA_ADE911X_MAP0_STATUS2_ISO_TEST_MMR_ERR                                                 \
    "R/W" /**< ISO Die Register Change Detected and Corrected. */
#define BITP_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_I_OVF                                                \
    (1U) /**< ISO Digital Modulator Current Channel Overflow Detected on the ISO Die. */
#define BITL_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_I_OVF                                                \
    (1U) /**< ISO Digital Modulator Current Channel Overflow Detected on the ISO Die. */
#define BITM_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_I_OVF                                                \
    (0X02U) /**< ISO Digital Modulator Current Channel Overflow Detected on the ISO Die. */
#define BITA_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_I_OVF                                                \
    "R/W" /**< ISO Digital Modulator Current Channel Overflow Detected on the ISO Die. */
#define BITP_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V1_OVF                                               \
    (2U) /**< ISO Digital Modulator V1 Channel Overflow Detected. */
#define BITL_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V1_OVF                                               \
    (1U) /**< ISO Digital Modulator V1 Channel Overflow Detected. */
#define BITM_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V1_OVF                                               \
    (0X04U) /**< ISO Digital Modulator V1 Channel Overflow Detected. */
#define BITA_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V1_OVF                                               \
    "R/W" /**< ISO Digital Modulator V1 Channel Overflow Detected. */
#define BITP_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V2_OVF                                               \
    (3U) /**< ISO Digital Modulator V2 Channel Overflow Detected. */
#define BITL_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V2_OVF                                               \
    (1U) /**< ISO Digital Modulator V2 Channel Overflow Detected. */
#define BITM_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V2_OVF                                               \
    (0X08U) /**< ISO Digital Modulator V2 Channel Overflow Detected. */
#define BITA_ADE911X_MAP0_STATUS2_ISO_DIG_MOD_V2_OVF                                               \
    "R/W" /**< ISO Digital Modulator V2 Channel Overflow Detected. */
#define BITP_ADE911X_MAP0_STATUS2_ISO_EFUSE_MEM_ERR (4U)    /**< ISO eFuse Memory Error. */
#define BITL_ADE911X_MAP0_STATUS2_ISO_EFUSE_MEM_ERR (1U)    /**< ISO eFuse Memory Error. */
#define BITM_ADE911X_MAP0_STATUS2_ISO_EFUSE_MEM_ERR (0X10U) /**< ISO eFuse Memory Error. */
#define BITA_ADE911X_MAP0_STATUS2_ISO_EFUSE_MEM_ERR "R/W"   /**< ISO eFuse Memory Error. */
#define BITP_ADE911X_MAP0_STATUS2_ISO_PHY_CRC_ERR                                                  \
    (5U) /**< ISO PHY Error or Data Link CRC or ECC Error Detected. */
#define BITL_ADE911X_MAP0_STATUS2_ISO_PHY_CRC_ERR                                                  \
    (1U) /**< ISO PHY Error or Data Link CRC or ECC Error Detected. */
#define BITM_ADE911X_MAP0_STATUS2_ISO_PHY_CRC_ERR                                                  \
    (0X20U) /**< ISO PHY Error or Data Link CRC or ECC Error Detected. */
#define BITA_ADE911X_MAP0_STATUS2_ISO_PHY_CRC_ERR                                                  \
    "R/W" /**< ISO PHY Error or Data Link CRC or ECC Error Detected. */
#define BITP_ADE911X_MAP0_STATUS2_ISO_CLK_STBL_ERR                                                 \
    (6U) /**< ISO ADC Clock Stability Error Detected. */
#define BITL_ADE911X_MAP0_STATUS2_ISO_CLK_STBL_ERR                                                 \
    (1U) /**< ISO ADC Clock Stability Error Detected. */
#define BITM_ADE911X_MAP0_STATUS2_ISO_CLK_STBL_ERR                                                 \
    (0X40U) /**< ISO ADC Clock Stability Error Detected. */
#define BITA_ADE911X_MAP0_STATUS2_ISO_CLK_STBL_ERR                                                 \
    "R/W" /**< ISO ADC Clock Stability Error Detected. */

/* ----------------------------------------------------------------------------------------------------
          COM_FLT_TYPE                                          Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_COM_FLT_TYPE_ISO_ECC_ERR                                                 \
    (0U) /**< ECC Error Detected on ISO to NONISO Communications. */
#define BITL_ADE911X_MAP0_COM_FLT_TYPE_ISO_ECC_ERR                                                 \
    (1U) /**< ECC Error Detected on ISO to NONISO Communications. */
#define BITM_ADE911X_MAP0_COM_FLT_TYPE_ISO_ECC_ERR                                                 \
    (0X01U) /**< ECC Error Detected on ISO to NONISO Communications. */
#define BITA_ADE911X_MAP0_COM_FLT_TYPE_ISO_ECC_ERR                                                 \
    "R" /**< ECC Error Detected on ISO to NONISO Communications. */
#define BITP_ADE911X_MAP0_COM_FLT_TYPE_ISO_PHY_ERR                                                 \
    (1U) /**< PHY Error Detected on ISO to NONISO Communications. */
#define BITL_ADE911X_MAP0_COM_FLT_TYPE_ISO_PHY_ERR                                                 \
    (1U) /**< PHY Error Detected on ISO to NONISO Communications. */
#define BITM_ADE911X_MAP0_COM_FLT_TYPE_ISO_PHY_ERR                                                 \
    (0X02U) /**< PHY Error Detected on ISO to NONISO Communications. */
#define BITA_ADE911X_MAP0_COM_FLT_TYPE_ISO_PHY_ERR                                                 \
    "R" /**< PHY Error Detected on ISO to NONISO Communications. */
#define BITP_ADE911X_MAP0_COM_FLT_TYPE_ISO_STATUS_RD_ECC_ERR                                       \
    (2U) /**< ISO to NONISO Status Read Error Detected. */
#define BITL_ADE911X_MAP0_COM_FLT_TYPE_ISO_STATUS_RD_ECC_ERR                                       \
    (1U) /**< ISO to NONISO Status Read Error Detected. */
#define BITM_ADE911X_MAP0_COM_FLT_TYPE_ISO_STATUS_RD_ECC_ERR                                       \
    (0X04U) /**< ISO to NONISO Status Read Error Detected. */
#define BITA_ADE911X_MAP0_COM_FLT_TYPE_ISO_STATUS_RD_ECC_ERR                                       \
    "R" /**< ISO to NONISO Status Read Error Detected. */

/* ----------------------------------------------------------------------------------------------------
          COM_FLT_COUNT                                         Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_COM_FLT_COUNT_COM_FLT_COUNT                                              \
    (0U) /**< ECC or PHY Error Count on ISO to NONISO Communications. */
#define BITL_ADE911X_MAP0_COM_FLT_COUNT_COM_FLT_COUNT                                              \
    (8U) /**< ECC or PHY Error Count on ISO to NONISO Communications. */
#define BITM_ADE911X_MAP0_COM_FLT_COUNT_COM_FLT_COUNT                                              \
    (0XFFU) /**< ECC or PHY Error Count on ISO to NONISO Communications. */
#define BITA_ADE911X_MAP0_COM_FLT_COUNT_COM_FLT_COUNT                                              \
    "R" /**< ECC or PHY Error Count on ISO to NONISO Communications. */

/* ----------------------------------------------------------------------------------------------------
          CONFIG_CRC                                            Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_CONFIG_CRC_CRC_FORCE                                                     \
    (0U) /**< Force Background Register Map CRC Recalculation. */
#define BITL_ADE911X_MAP0_CONFIG_CRC_CRC_FORCE                                                     \
    (1U) /**< Force Background Register Map CRC Recalculation. */
#define BITM_ADE911X_MAP0_CONFIG_CRC_CRC_FORCE                                                     \
    (0X01U) /**< Force Background Register Map CRC Recalculation. */
#define BITA_ADE911X_MAP0_CONFIG_CRC_CRC_FORCE                                                     \
    "R/W" /**< Force Background Register Map CRC Recalculation. */
#define BITP_ADE911X_MAP0_CONFIG_CRC_CRC_DONE (1U)    /**< CRC Done Flag. */
#define BITL_ADE911X_MAP0_CONFIG_CRC_CRC_DONE (1U)    /**< CRC Done Flag. */
#define BITM_ADE911X_MAP0_CONFIG_CRC_CRC_DONE (0X02U) /**< CRC Done Flag. */
#define BITA_ADE911X_MAP0_CONFIG_CRC_CRC_DONE "R/W"   /**< CRC Done Flag. */

/* ----------------------------------------------------------------------------------------------------
          I_WAV_HI                                              Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_I_WAV_HI_I_WAV (0U)    /**< ADC Current Channel Waveform Data */
#define BITL_ADE911X_MAP0_I_WAV_HI_I_WAV (8U)    /**< ADC Current Channel Waveform Data */
#define BITM_ADE911X_MAP0_I_WAV_HI_I_WAV (0XFFU) /**< ADC Current Channel Waveform Data */
#define BITA_ADE911X_MAP0_I_WAV_HI_I_WAV "R/W"   /**< ADC Current Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          I_WAV_MD                                              Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_I_WAV_MD_I_WAV (0U)    /**< ADC Current Channel Waveform Data */
#define BITL_ADE911X_MAP0_I_WAV_MD_I_WAV (8U)    /**< ADC Current Channel Waveform Data */
#define BITM_ADE911X_MAP0_I_WAV_MD_I_WAV (0XFFU) /**< ADC Current Channel Waveform Data */
#define BITA_ADE911X_MAP0_I_WAV_MD_I_WAV "R/W"   /**< ADC Current Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          I_WAV_LO                                              Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_I_WAV_LO_I_WAV (0U)    /**< ADC Current Channel Waveform Data */
#define BITL_ADE911X_MAP0_I_WAV_LO_I_WAV (8U)    /**< ADC Current Channel Waveform Data */
#define BITM_ADE911X_MAP0_I_WAV_LO_I_WAV (0XFFU) /**< ADC Current Channel Waveform Data */
#define BITA_ADE911X_MAP0_I_WAV_LO_I_WAV "R/W"   /**< ADC Current Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V1_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_V1_WAV_HI_V1_WAV (0U)    /**< ADC V1 Channel Waveform Data */
#define BITL_ADE911X_MAP0_V1_WAV_HI_V1_WAV (8U)    /**< ADC V1 Channel Waveform Data */
#define BITM_ADE911X_MAP0_V1_WAV_HI_V1_WAV (0XFFU) /**< ADC V1 Channel Waveform Data */
#define BITA_ADE911X_MAP0_V1_WAV_HI_V1_WAV "R/W"   /**< ADC V1 Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V1_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_V1_WAV_MD_V1_WAV (0U)    /**< ADC V1 Channel Waveform Data */
#define BITL_ADE911X_MAP0_V1_WAV_MD_V1_WAV (8U)    /**< ADC V1 Channel Waveform Data */
#define BITM_ADE911X_MAP0_V1_WAV_MD_V1_WAV (0XFFU) /**< ADC V1 Channel Waveform Data */
#define BITA_ADE911X_MAP0_V1_WAV_MD_V1_WAV "R/W"   /**< ADC V1 Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V1_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_V1_WAV_LO_V1_WAV (0U)    /**< ADC V1 Channel Waveform Data */
#define BITL_ADE911X_MAP0_V1_WAV_LO_V1_WAV (8U)    /**< ADC V1 Channel Waveform Data */
#define BITM_ADE911X_MAP0_V1_WAV_LO_V1_WAV (0XFFU) /**< ADC V1 Channel Waveform Data */
#define BITA_ADE911X_MAP0_V1_WAV_LO_V1_WAV "R/W"   /**< ADC V1 Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V2_WAV_HI                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_V2_WAV_HI_V2_WAV (0U)    /**< ADC V2 Channel Waveform Data */
#define BITL_ADE911X_MAP0_V2_WAV_HI_V2_WAV (8U)    /**< ADC V2 Channel Waveform Data */
#define BITM_ADE911X_MAP0_V2_WAV_HI_V2_WAV (0XFFU) /**< ADC V2 Channel Waveform Data */
#define BITA_ADE911X_MAP0_V2_WAV_HI_V2_WAV "R/W"   /**< ADC V2 Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V2_WAV_MD                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_V2_WAV_MD_V2_WAV (0U)    /**< ADC V2 Channel Waveform Data */
#define BITL_ADE911X_MAP0_V2_WAV_MD_V2_WAV (8U)    /**< ADC V2 Channel Waveform Data */
#define BITM_ADE911X_MAP0_V2_WAV_MD_V2_WAV (0XFFU) /**< ADC V2 Channel Waveform Data */
#define BITA_ADE911X_MAP0_V2_WAV_MD_V2_WAV "R/W"   /**< ADC V2 Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          V2_WAV_LO                                             Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_V2_WAV_LO_V2_WAV (0U)    /**< ADC V2 Channel Waveform Data */
#define BITL_ADE911X_MAP0_V2_WAV_LO_V2_WAV (8U)    /**< ADC V2 Channel Waveform Data */
#define BITM_ADE911X_MAP0_V2_WAV_LO_V2_WAV (0XFFU) /**< ADC V2 Channel Waveform Data */
#define BITA_ADE911X_MAP0_V2_WAV_LO_V2_WAV "R/W"   /**< ADC V2 Channel Waveform Data */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_5                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_UNIQUE_PART_ID_5_UNIQUE_PART_ID (0U)    /**< Unique Part ID. */
#define BITL_ADE911X_MAP0_UNIQUE_PART_ID_5_UNIQUE_PART_ID (8U)    /**< Unique Part ID. */
#define BITM_ADE911X_MAP0_UNIQUE_PART_ID_5_UNIQUE_PART_ID (0XFFU) /**< Unique Part ID. */
#define BITA_ADE911X_MAP0_UNIQUE_PART_ID_5_UNIQUE_PART_ID "R"     /**< Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_4                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_UNIQUE_PART_ID_4_UNIQUE_PART_ID (0U)    /**< Unique Part ID. */
#define BITL_ADE911X_MAP0_UNIQUE_PART_ID_4_UNIQUE_PART_ID (8U)    /**< Unique Part ID. */
#define BITM_ADE911X_MAP0_UNIQUE_PART_ID_4_UNIQUE_PART_ID (0XFFU) /**< Unique Part ID. */
#define BITA_ADE911X_MAP0_UNIQUE_PART_ID_4_UNIQUE_PART_ID "R"     /**< Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_3                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_UNIQUE_PART_ID_3_UNIQUE_PART_ID (0U)    /**< Unique Part ID. */
#define BITL_ADE911X_MAP0_UNIQUE_PART_ID_3_UNIQUE_PART_ID (8U)    /**< Unique Part ID. */
#define BITM_ADE911X_MAP0_UNIQUE_PART_ID_3_UNIQUE_PART_ID (0XFFU) /**< Unique Part ID. */
#define BITA_ADE911X_MAP0_UNIQUE_PART_ID_3_UNIQUE_PART_ID "R"     /**< Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_2                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_UNIQUE_PART_ID_2_UNIQUE_PART_ID (0U)    /**< Unique Part ID. */
#define BITL_ADE911X_MAP0_UNIQUE_PART_ID_2_UNIQUE_PART_ID (8U)    /**< Unique Part ID. */
#define BITM_ADE911X_MAP0_UNIQUE_PART_ID_2_UNIQUE_PART_ID (0XFFU) /**< Unique Part ID. */
#define BITA_ADE911X_MAP0_UNIQUE_PART_ID_2_UNIQUE_PART_ID "R"     /**< Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_1                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_UNIQUE_PART_ID_1_UNIQUE_PART_ID (0U)    /**< Unique Part ID. */
#define BITL_ADE911X_MAP0_UNIQUE_PART_ID_1_UNIQUE_PART_ID (8U)    /**< Unique Part ID. */
#define BITM_ADE911X_MAP0_UNIQUE_PART_ID_1_UNIQUE_PART_ID (0XFFU) /**< Unique Part ID. */
#define BITA_ADE911X_MAP0_UNIQUE_PART_ID_1_UNIQUE_PART_ID "R"     /**< Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          UNIQUE_PART_ID_0                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_UNIQUE_PART_ID_0_UNIQUE_PART_ID (0U)    /**< Unique Part ID. */
#define BITL_ADE911X_MAP0_UNIQUE_PART_ID_0_UNIQUE_PART_ID (8U)    /**< Unique Part ID. */
#define BITM_ADE911X_MAP0_UNIQUE_PART_ID_0_UNIQUE_PART_ID (0XFFU) /**< Unique Part ID. */
#define BITA_ADE911X_MAP0_UNIQUE_PART_ID_0_UNIQUE_PART_ID "R"     /**< Unique Part ID. */

/* ----------------------------------------------------------------------------------------------------
          SILICON_REVISION                                      Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_SILICON_REVISION_ISO_CHIP_REV                                            \
    (0U) /**< Silicon Revision for ISO Chip.                                                       \
          */
#define BITL_ADE911X_MAP0_SILICON_REVISION_ISO_CHIP_REV                                            \
    (4U) /**< Silicon Revision for ISO Chip.                                                       \
          */
#define BITM_ADE911X_MAP0_SILICON_REVISION_ISO_CHIP_REV                                            \
    (0X0FU)                                                 /**< Silicon Revision for ISO Chip. */
#define BITA_ADE911X_MAP0_SILICON_REVISION_ISO_CHIP_REV "R" /**< Silicon Revision for ISO Chip. */
#define BITP_ADE911X_MAP0_SILICON_REVISION_NONISO_CHIP_REV                                         \
    (4U) /**< Silicon Revision for NONISO Chip. */
#define BITL_ADE911X_MAP0_SILICON_REVISION_NONISO_CHIP_REV                                         \
    (4U) /**< Silicon Revision for NONISO Chip. */
#define BITM_ADE911X_MAP0_SILICON_REVISION_NONISO_CHIP_REV                                         \
    (0XF0U) /**< Silicon Revision for NONISO Chip. */
#define BITA_ADE911X_MAP0_SILICON_REVISION_NONISO_CHIP_REV                                         \
    "R" /**< Silicon Revision for NONISO Chip. */

/* ----------------------------------------------------------------------------------------------------
          VERSION_PRODUCT                                       Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP0_VERSION_PRODUCT_VERSION_PRODUCT (0U)    /**< Version Product. */
#define BITL_ADE911X_MAP0_VERSION_PRODUCT_VERSION_PRODUCT (8U)    /**< Version Product. */
#define BITM_ADE911X_MAP0_VERSION_PRODUCT_VERSION_PRODUCT (0XFFU) /**< Version Product. */
#define BITA_ADE911X_MAP0_VERSION_PRODUCT_VERSION_PRODUCT "R"     /**< Version Product. */

#define ENUM_ADE911X_MAP0_VERSION_PRODUCT_VERSION_PRODUCT_ADE9113 (0X00U) /**< ADE9113 */
#define ENUM_ADE911X_MAP0_VERSION_PRODUCT_VERSION_PRODUCT_ADE9112 (0X01U) /**< ADE9112 */
#define ENUM_ADE911X_MAP0_VERSION_PRODUCT_VERSION_PRODUCT_ADE9103 (0X03U) /**< ADE9103 */

#endif /* end ifndef ADE911X_MAP0_ADDR_RDEF_H_ */

/* ====================================================================================================
        ADE911X_MAP1 Module Instances Address and Mask Definitions
   ====================================================================================================
 */
#define INST_ADE911X_MAP1 (0XB0U) /**< ade911x_map1: Description Not Available*/

#ifndef ADE911X_MAP1_ADDR_RDEF_H_
#define ADE911X_MAP1_ADDR_RDEF_H_    /**< ADE911X_MAP1: ADE9113/ADE9112 Hot Side Addressable SPI   \
                                        register map */

#define MASK_ADE911X_MAP1                                                                          \
    (0XFFU) /**< ADE911X_MAP1: ADE9113/ADE9112 Hot Side Addressable SPI register map */

/* ====================================================================================================
        ADE911X_MAP1 Module Register ResetValue Definitions
   ====================================================================================================
 */
#define RSTVAL_ADE911X_MAP1_DC_OFFSET_MODE (0X0U)

/* ====================================================================================================
        ADE911X_MAP1 Module Register BitPositions, Lengths, Masks and Enumerations Definitions
   ====================================================================================================
 */

/* ----------------------------------------------------------------------------------------------------
          DC_OFFSET_MODE                                        Value             Description
   ----------------------------------------------------------------------------------------------------
 */
#define BITP_ADE911X_MAP1_DC_OFFSET_MODE_ISO_I_ADC_SHORT                                           \
    (0U) /**< Short the Current Channel Inputs */
#define BITL_ADE911X_MAP1_DC_OFFSET_MODE_ISO_I_ADC_SHORT                                           \
    (1U) /**< Short the Current Channel Inputs */
#define BITM_ADE911X_MAP1_DC_OFFSET_MODE_ISO_I_ADC_SHORT                                           \
    (0X01U) /**< Short the Current Channel Inputs */
#define BITA_ADE911X_MAP1_DC_OFFSET_MODE_ISO_I_ADC_SHORT                                           \
    "R/W" /**< Short the Current Channel Inputs */

#endif /* end ifndef ADE911X_MAP1_ADDR_RDEF_H_ */

#endif /* ADE911X_ADDR_RDEF_H */

/** @} */
