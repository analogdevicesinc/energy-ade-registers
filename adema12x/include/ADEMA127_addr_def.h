/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file ADEMA127_addr_def.h
 * @addtogroup ADC_HEADERS ADC Headers
 * @{
 */

#ifndef ADEMA127_ADDR_DEF_H
#define ADEMA127_ADDR_DEF_H

#if defined(_LANGUAGE_C) || (defined(__GNUC__) && !defined(__ASSEMBLER__))
#include <stdint.h>
#endif /* _LANGUAGE_C */

/* ====================================================================================================
        ADEMA127_MMR_RETAINED Module Instances Register Address Defintions
   ====================================================================================================
 */
#define ADDR_ADEMA127_MMR_RETAINED_SWRST      (0X0001U) /* Software Reset */
#define ADDR_ADEMA127_MMR_RETAINED_CONFIG0    (0X0002U) /* ADC Configuration */
#define ADDR_ADEMA127_MMR_RETAINED_TDM_STATUS (0X0003U) /* Tamper Detect Status */
#define ADDR_ADEMA127_MMR_RETAINED_ADC_PD     (0X0004U) /* ADC Power Down */
#define ADDR_ADEMA127_MMR_RETAINED_ADC_CMI    (0X0005U) /* ADC Input Common Mode Configuration */
#define ADDR_ADEMA127_MMR_RETAINED_ADC_GAIN   (0X0006U) /* ADC Gain Configuration */
#define ADDR_ADEMA127_MMR_RETAINED_ADC_INV    (0X0007U) /* ADC Input Inversion */
#define ADDR_ADEMA127_MMR_RETAINED_CONFIG_CRC_MMR_RETAINED                                         \
    (0X0008U) /* Configuration of Background Retained Register Map CRC */
#define ADDR_ADEMA127_MMR_RETAINED_TDM_CONFIG (0X0009U) /* Tamper Detect Configuration */
#define ADDR_ADEMA127_MMR_RETAINED_TDM_THRSH_MSB                                                   \
    (0X000AU) /* Tamper Detect Threshold Most Significant Bits */
#define ADDR_ADEMA127_MMR_RETAINED_TDM_THRSH_LSB                                                   \
    (0X000BU) /* Tamper Detect Threshold Least Significant Bits */
#define ADDR_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_HI                                      \
    (0X000EU) /* Background Retained Register Map CRC Most Significant Byte */
#define ADDR_ADEMA127_MMR_RETAINED_CRC_RESULT_MMR_RETAINED_LO                                      \
    (0X000FU) /* Background Retained Register Map CRC Least Significant Byte */

/* ====================================================================================================
        ADEMA127_MMR Module Instances Register Address Defintions
   ====================================================================================================
 */
#define ADDR_ADEMA127_MMR_EFUSE_REFRESH        (0X0010U) /* EFuse Refresh */
#define ADDR_ADEMA127_MMR_ACCESS_EXTENDED_MMAP (0X0012U) /* Extended Memory Map Access Control */
#define ADDR_ADEMA127_MMR_SCRATCH              (0X0013U) /* Software Debug Register */
#define ADDR_ADEMA127_MMR_SYNC_SNAP            (0X0014U) /* ADC Synchronization Control */
#define ADDR_ADEMA127_MMR_SNAPSHOT_COUNT_HI    (0X0017U) /* System Timing Controller Counter */
#define ADDR_ADEMA127_MMR_SNAPSHOT_COUNT_LO    (0X0018U) /* System Timing Controller Counter */
#define ADDR_ADEMA127_MMR_MASK0                (0X0019U) /* High Priority Interrupt Mask */
#define ADDR_ADEMA127_MMR_MASK1                (0X001AU) /* Lower Priority Interrupt Mask */
#define ADDR_ADEMA127_MMR_MASK2                (0X001BU) /* DSP Interrupt Mask */
#define ADDR_ADEMA127_MMR_WR_LOCK              (0X001FU) /* Configuration Lock */
#define ADDR_ADEMA127_MMR_STATUS0              (0X0020U) /* Latched Status of High Priority Interrupts */
#define ADDR_ADEMA127_MMR_STATUS1              (0X0021U) /* Latched Status of Lower Priority Interrupts */
#define ADDR_ADEMA127_MMR_STATUS2              (0X0022U) /* DSP Status */
#define ADDR_ADEMA127_MMR_CONFIG_CRC_MMR                                                           \
    (0X0025U) /* Configuration of Background Register Map CRC */
#define ADDR_ADEMA127_MMR_V0_WAV_HI                                                                \
    (0X0026U) /* ADC Channel 0 Waveform Data Most Significant Byte */
#define ADDR_ADEMA127_MMR_V0_WAV_MD (0X0027U) /* ADC Channel 0 Waveform Data Middle Byte */
#define ADDR_ADEMA127_MMR_V0_WAV_LO                                                                \
    (0X0028U) /* ADC Channel 0 Waveform Data Least Significant Byte */
#define ADDR_ADEMA127_MMR_V1_WAV_HI                                                                \
    (0X0029U) /* ADC Channel 1 Waveform Data Most Significant Byte */
#define ADDR_ADEMA127_MMR_V1_WAV_MD (0X002AU) /* ADC Channel 1 Waveform Data Middle Byte */
#define ADDR_ADEMA127_MMR_V1_WAV_LO                                                                \
    (0X002BU) /* ADC Channel 1 Waveform Data Least Significant Byte */
#define ADDR_ADEMA127_MMR_V2_WAV_HI                                                                \
    (0X002CU) /* ADC Channel 2 Waveform Data Most Significant Byte */
#define ADDR_ADEMA127_MMR_V2_WAV_MD (0X002DU) /* ADC Channel 2 Waveform Data Middle Byte */
#define ADDR_ADEMA127_MMR_V2_WAV_LO                                                                \
    (0X002EU) /* ADC Channel 2 Waveform Data Least Significant Byte */
#define ADDR_ADEMA127_MMR_V3_WAV_HI                                                                \
    (0X002FU) /* ADC Channel 3 Waveform Data Most Significant Byte */
#define ADDR_ADEMA127_MMR_V3_WAV_MD (0X0030U) /* ADC Channel 3 Waveform Data Middle Byte */
#define ADDR_ADEMA127_MMR_V3_WAV_LO                                                                \
    (0X0031U) /* ADC Channel 3 Waveform Data Least Significant Byte */
#define ADDR_ADEMA127_MMR_V4_WAV_HI                                                                \
    (0X0032U) /* ADC Channel 4 Waveform Data Most Significant Byte */
#define ADDR_ADEMA127_MMR_V4_WAV_MD (0X0033U) /* ADC Channel 4 Waveform Data Middle Byte */
#define ADDR_ADEMA127_MMR_V4_WAV_LO                                                                \
    (0X0034U) /* ADC Channel 4 Waveform Data Least Significant Byte */
#define ADDR_ADEMA127_MMR_V5_WAV_HI                                                                \
    (0X0035U) /* ADC Channel 5 Waveform Data Most Significant Byte */
#define ADDR_ADEMA127_MMR_V5_WAV_MD (0X0036U) /* ADC Channel 5 Waveform Data Middle Byte */
#define ADDR_ADEMA127_MMR_V5_WAV_LO                                                                \
    (0X0037U) /* ADC Channel 5 Waveform Data Least Significant Byte */
#define ADDR_ADEMA127_MMR_V6_WAV_HI                                                                \
    (0X0038U) /* ADC Channel 6 Waveform Data Most Significant Byte */
#define ADDR_ADEMA127_MMR_V6_WAV_MD (0X0039U) /* ADC Channel 6 Waveform Data Middle Byte */
#define ADDR_ADEMA127_MMR_V6_WAV_LO                                                                \
    (0X003AU) /* ADC Channel 6 Waveform Data Least Significant Byte */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_LOCK (0X003BU) /* Datapath Configuration Lock */
#define ADDR_ADEMA127_MMR_DATARATE                                                                 \
    (0X003CU) /* ADC Sample Rate and Output Data Rate Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_ALPHA_CH0_1                                                     \
    (0X003DU) /* ADC Channel 0 and 1 DC Block Filter Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_ALPHA_CH2_3                                                     \
    (0X003EU) /* ADC Channel 2 and 3 DC Block Filter Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_ALPHA_CH4_5                                                     \
    (0X003FU) /* ADC Channel 4 and 5 DC Block Filter Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_ALPHA_CH6                                                       \
    (0X0040U) /* ADC Channel 6 DC Block Filter Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_CH0                                                      \
    (0X0041U) /* ADC Channel 0 DSP Data Path Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_CH1                                                      \
    (0X0042U) /* ADC Channel 1 DSP Data Path Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_CH2                                                      \
    (0X0043U) /* ADC Channel 2 DSP Data Path Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_CH3                                                      \
    (0X0044U) /* ADC Channel 3 DSP Data Path Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_CH4                                                      \
    (0X0045U) /* ADC Channel 4 DSP Data Path Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_CH5                                                      \
    (0X0046U) /* ADC Channel 5 DSP Data Path Configuration */
#define ADDR_ADEMA127_MMR_DATAPATH_CONFIG_CH6                                                      \
    (0X0047U) /* ADC Channel 6 DSP Data Path Configuration */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH0_HI                                                      \
    (0X0048U) /* ADC Channel 0 Phase Offset Most Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH0_LO                                                      \
    (0X0049U) /* ADC Channel 0 Phase Offset Least Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH1_HI                                                      \
    (0X004AU) /* ADC Channel 1 Phase Offset Most Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH1_LO                                                      \
    (0X004BU) /* ADC Channel 1 Phase Offset Least Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH2_HI                                                      \
    (0X004CU) /* ADC Channel 2 Phase Offset Most Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH2_LO                                                      \
    (0X004DU) /* ADC Channel 2 Phase Offset Least Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH3_HI                                                      \
    (0X004EU) /* ADC Channel 3 Phase Offset Most Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH3_LO                                                      \
    (0X004FU) /* ADC Channel 3 Phase Offset Least Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH4_HI                                                      \
    (0X0050U) /* ADC Channel 4 Phase Offset Most Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH4_LO                                                      \
    (0X0051U) /* ADC Channel 4 Phase Offset Least Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH5_HI                                                      \
    (0X0052U) /* ADC Channel 5 Phase Offset Most Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH5_LO                                                      \
    (0X0053U) /* ADC Channel 5 Phase Offset Least Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH6_HI                                                      \
    (0X0054U) /* ADC Channel 6 Phase Offset Most Significant Byte */
#define ADDR_ADEMA127_MMR_PHASE_OFFSET_CH6_LO                                                      \
    (0X0055U) /* ADC Channel 6 Phase Offset Least Significant Byte */
#define ADDR_ADEMA127_MMR_CRC_RESULT_MMR_HI                                                        \
    (0X005CU) /* Background Register Map CRC Most Significant Byte */
#define ADDR_ADEMA127_MMR_CRC_RESULT_MMR_LO                                                        \
    (0X005DU) /* Background Register Map CRC Least Significant Byte */
#define ADDR_ADEMA127_MMR_UNIQUE_PART_ID_5 (0X0075U) /* Unique Part ID */
#define ADDR_ADEMA127_MMR_UNIQUE_PART_ID_4 (0X0076U) /* Unique Part ID */
#define ADDR_ADEMA127_MMR_UNIQUE_PART_ID_3 (0X0077U) /* Unique Part ID */
#define ADDR_ADEMA127_MMR_UNIQUE_PART_ID_2 (0X0078U) /* Unique Part ID */
#define ADDR_ADEMA127_MMR_UNIQUE_PART_ID_1 (0X0079U) /* Unique Part ID */
#define ADDR_ADEMA127_MMR_UNIQUE_PART_ID_0 (0X007AU) /* Unique Part ID */
#define ADDR_ADEMA127_MMR_SILICON_REVISION (0X007DU) /* Silicon Revision */
#define ADDR_ADEMA127_MMR_PRODUCT_ID       (0X007EU) /* Product Id */

/* ====================================================================================================
        ADEMA127_DSP_RAM_CH Module Instances Register Address Defintions
   ====================================================================================================
 */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B0_LO                                                 \
    (0X0401U) /* Compensation Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B0_MD                                                 \
    (0X0402U) /* Compensation Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B0_HI                                                 \
    (0X0403U) /* Compensation Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B1_LO                                                 \
    (0X0405U) /* Compensation Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B1_MD                                                 \
    (0X0406U) /* Compensation Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B1_HI                                                 \
    (0X0407U) /* Compensation Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B2_LO                                                 \
    (0X0409U) /* Compensation Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B2_MD                                                 \
    (0X040AU) /* Compensation Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B2_HI                                                 \
    (0X040BU) /* Compensation Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B3_LO                                                 \
    (0X040DU) /* Compensation Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B3_MD                                                 \
    (0X040EU) /* Compensation Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B3_HI                                                 \
    (0X040FU) /* Compensation Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B4_LO                                                 \
    (0X0411U) /* Compensation Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B4_MD                                                 \
    (0X0412U) /* Compensation Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_COMP_COEFF_B4_HI                                                 \
    (0X0413U) /* Compensation Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SHIFT     (0X041DU) /* Arithmetic Shift in Datapath */
#define ADDR_ADEMA127_DSP_RAM_CH0_GAIN_LO   (0X0421U) /* Channel Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_GAIN_MD   (0X0422U) /* Channel Gain Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_GAIN_HI   (0X0423U) /* Channel Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_OFFSET_LO (0X0425U) /* Channel Offset Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_OFFSET_MD (0X0426U) /* Channel Offset Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_OFFSET_HI (0X0427U) /* Channel Offset Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_XT_GAIN_LO                                                       \
    (0X0429U) /* Crosstalk Compensation Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_XT_GAIN_MD                                                       \
    (0X042AU) /* Crosstalk Compensation Gain Middle Byte                                           \
               */
#define ADDR_ADEMA127_DSP_RAM_CH0_XT_GAIN_HI                                                       \
    (0X042BU) /* Crosstalk Compensation Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_XT_AGGRESSOR (0X042DU) /* Crosstalk Compensation Aggressor */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_B0_LO                                              \
    (0X0431U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_B0_MD                                              \
    (0X0432U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_B0_HI                                              \
    (0X0433U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_B1_LO                                              \
    (0X0435U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_B1_MD                                              \
    (0X0436U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_B1_HI                                              \
    (0X0437U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_A1_LO                                              \
    (0X0439U) /* Sensor Compensation / All Pass Coefficient A1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_A1_MD                                              \
    (0X043AU) /* Sensor Compensation / All Pass Coefficient A1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH0_SCF_APF_COEFF_A1_HI                                              \
    (0X043BU) /* Sensor Compensation / All Pass Coefficient A1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B0_LO                                                 \
    (0X0441U) /* Compensation Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B0_MD                                                 \
    (0X0442U) /* Compensation Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B0_HI                                                 \
    (0X0443U) /* Compensation Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B1_LO                                                 \
    (0X0445U) /* Compensation Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B1_MD                                                 \
    (0X0446U) /* Compensation Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B1_HI                                                 \
    (0X0447U) /* Compensation Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B2_LO                                                 \
    (0X0449U) /* Compensation Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B2_MD                                                 \
    (0X044AU) /* Compensation Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B2_HI                                                 \
    (0X044BU) /* Compensation Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B3_LO                                                 \
    (0X044DU) /* Compensation Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B3_MD                                                 \
    (0X044EU) /* Compensation Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B3_HI                                                 \
    (0X044FU) /* Compensation Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B4_LO                                                 \
    (0X0451U) /* Compensation Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B4_MD                                                 \
    (0X0452U) /* Compensation Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_COMP_COEFF_B4_HI                                                 \
    (0X0453U) /* Compensation Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SHIFT     (0X045DU) /* Arithmetic Shift in Datapath */
#define ADDR_ADEMA127_DSP_RAM_CH1_GAIN_LO   (0X0461U) /* Channel Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_GAIN_MD   (0X0462U) /* Channel Gain Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_GAIN_HI   (0X0463U) /* Channel Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_OFFSET_LO (0X0465U) /* Channel Offset Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_OFFSET_MD (0X0466U) /* Channel Offset Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_OFFSET_HI (0X0467U) /* Channel Offset Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_XT_GAIN_LO                                                       \
    (0X0469U) /* Crosstalk Compensation Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_XT_GAIN_MD                                                       \
    (0X046AU) /* Crosstalk Compensation Gain Middle Byte                                           \
               */
#define ADDR_ADEMA127_DSP_RAM_CH1_XT_GAIN_HI                                                       \
    (0X046BU) /* Crosstalk Compensation Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_XT_AGGRESSOR (0X046DU) /* Crosstalk Compensation Aggressor */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_B0_LO                                              \
    (0X0471U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_B0_MD                                              \
    (0X0472U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_B0_HI                                              \
    (0X0473U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_B1_LO                                              \
    (0X0475U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_B1_MD                                              \
    (0X0476U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_B1_HI                                              \
    (0X0477U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_A1_LO                                              \
    (0X0479U) /* Sensor Compensation / All Pass Coefficient A1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_A1_MD                                              \
    (0X047AU) /* Sensor Compensation / All Pass Coefficient A1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH1_SCF_APF_COEFF_A1_HI                                              \
    (0X047BU) /* Sensor Compensation / All Pass Coefficient A1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B0_LO                                                 \
    (0X0481U) /* Compensation Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B0_MD                                                 \
    (0X0482U) /* Compensation Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B0_HI                                                 \
    (0X0483U) /* Compensation Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B1_LO                                                 \
    (0X0485U) /* Compensation Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B1_MD                                                 \
    (0X0486U) /* Compensation Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B1_HI                                                 \
    (0X0487U) /* Compensation Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B2_LO                                                 \
    (0X0489U) /* Compensation Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B2_MD                                                 \
    (0X048AU) /* Compensation Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B2_HI                                                 \
    (0X048BU) /* Compensation Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B3_LO                                                 \
    (0X048DU) /* Compensation Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B3_MD                                                 \
    (0X048EU) /* Compensation Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B3_HI                                                 \
    (0X048FU) /* Compensation Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B4_LO                                                 \
    (0X0491U) /* Compensation Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B4_MD                                                 \
    (0X0492U) /* Compensation Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_COMP_COEFF_B4_HI                                                 \
    (0X0493U) /* Compensation Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SHIFT     (0X049DU) /* Arithmetic Shift in Datapath */
#define ADDR_ADEMA127_DSP_RAM_CH2_GAIN_LO   (0X04A1U) /* Channel Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_GAIN_MD   (0X04A2U) /* Channel Gain Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_GAIN_HI   (0X04A3U) /* Channel Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_OFFSET_LO (0X04A5U) /* Channel Offset Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_OFFSET_MD (0X04A6U) /* Channel Offset Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_OFFSET_HI (0X04A7U) /* Channel Offset Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_XT_GAIN_LO                                                       \
    (0X04A9U) /* Crosstalk Compensation Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_XT_GAIN_MD                                                       \
    (0X04AAU) /* Crosstalk Compensation Gain Middle Byte                                           \
               */
#define ADDR_ADEMA127_DSP_RAM_CH2_XT_GAIN_HI                                                       \
    (0X04ABU) /* Crosstalk Compensation Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_XT_AGGRESSOR (0X04ADU) /* Crosstalk Compensation Aggressor */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_B0_LO                                              \
    (0X04B1U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_B0_MD                                              \
    (0X04B2U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_B0_HI                                              \
    (0X04B3U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_B1_LO                                              \
    (0X04B5U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_B1_MD                                              \
    (0X04B6U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_B1_HI                                              \
    (0X04B7U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_A1_LO                                              \
    (0X04B9U) /* Sensor Compensation / All Pass Coefficient A1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_A1_MD                                              \
    (0X04BAU) /* Sensor Compensation / All Pass Coefficient A1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH2_SCF_APF_COEFF_A1_HI                                              \
    (0X04BBU) /* Sensor Compensation / All Pass Coefficient A1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B0_LO                                                 \
    (0X04C1U) /* Compensation Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B0_MD                                                 \
    (0X04C2U) /* Compensation Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B0_HI                                                 \
    (0X04C3U) /* Compensation Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B1_LO                                                 \
    (0X04C5U) /* Compensation Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B1_MD                                                 \
    (0X04C6U) /* Compensation Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B1_HI                                                 \
    (0X04C7U) /* Compensation Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B2_LO                                                 \
    (0X04C9U) /* Compensation Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B2_MD                                                 \
    (0X04CAU) /* Compensation Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B2_HI                                                 \
    (0X04CBU) /* Compensation Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B3_LO                                                 \
    (0X04CDU) /* Compensation Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B3_MD                                                 \
    (0X04CEU) /* Compensation Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B3_HI                                                 \
    (0X04CFU) /* Compensation Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B4_LO                                                 \
    (0X04D1U) /* Compensation Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B4_MD                                                 \
    (0X04D2U) /* Compensation Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_COMP_COEFF_B4_HI                                                 \
    (0X04D3U) /* Compensation Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SHIFT     (0X04DDU) /* Arithmetic Shift in Datapath */
#define ADDR_ADEMA127_DSP_RAM_CH3_GAIN_LO   (0X04E1U) /* Channel Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_GAIN_MD   (0X04E2U) /* Channel Gain Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_GAIN_HI   (0X04E3U) /* Channel Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_OFFSET_LO (0X04E5U) /* Channel Offset Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_OFFSET_MD (0X04E6U) /* Channel Offset Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_OFFSET_HI (0X04E7U) /* Channel Offset Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_XT_GAIN_LO                                                       \
    (0X04E9U) /* Crosstalk Compensation Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_XT_GAIN_MD                                                       \
    (0X04EAU) /* Crosstalk Compensation Gain Middle Byte                                           \
               */
#define ADDR_ADEMA127_DSP_RAM_CH3_XT_GAIN_HI                                                       \
    (0X04EBU) /* Crosstalk Compensation Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_XT_AGGRESSOR (0X04EDU) /* Crosstalk Compensation Aggressor */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_B0_LO                                              \
    (0X04F1U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_B0_MD                                              \
    (0X04F2U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_B0_HI                                              \
    (0X04F3U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_B1_LO                                              \
    (0X04F5U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_B1_MD                                              \
    (0X04F6U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_B1_HI                                              \
    (0X04F7U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_A1_LO                                              \
    (0X04F9U) /* Sensor Compensation / All Pass Coefficient A1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_A1_MD                                              \
    (0X04FAU) /* Sensor Compensation / All Pass Coefficient A1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH3_SCF_APF_COEFF_A1_HI                                              \
    (0X04FBU) /* Sensor Compensation / All Pass Coefficient A1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B0_LO                                                 \
    (0X0501U) /* Compensation Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B0_MD                                                 \
    (0X0502U) /* Compensation Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B0_HI                                                 \
    (0X0503U) /* Compensation Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B1_LO                                                 \
    (0X0505U) /* Compensation Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B1_MD                                                 \
    (0X0506U) /* Compensation Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B1_HI                                                 \
    (0X0507U) /* Compensation Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B2_LO                                                 \
    (0X0509U) /* Compensation Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B2_MD                                                 \
    (0X050AU) /* Compensation Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B2_HI                                                 \
    (0X050BU) /* Compensation Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B3_LO                                                 \
    (0X050DU) /* Compensation Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B3_MD                                                 \
    (0X050EU) /* Compensation Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B3_HI                                                 \
    (0X050FU) /* Compensation Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B4_LO                                                 \
    (0X0511U) /* Compensation Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B4_MD                                                 \
    (0X0512U) /* Compensation Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_COMP_COEFF_B4_HI                                                 \
    (0X0513U) /* Compensation Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SHIFT     (0X051DU) /* Arithmetic Shift in Datapath */
#define ADDR_ADEMA127_DSP_RAM_CH4_GAIN_LO   (0X0521U) /* Channel Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_GAIN_MD   (0X0522U) /* Channel Gain Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_GAIN_HI   (0X0523U) /* Channel Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_OFFSET_LO (0X0525U) /* Channel Offset Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_OFFSET_MD (0X0526U) /* Channel Offset Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_OFFSET_HI (0X0527U) /* Channel Offset Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_XT_GAIN_LO                                                       \
    (0X0529U) /* Crosstalk Compensation Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_XT_GAIN_MD                                                       \
    (0X052AU) /* Crosstalk Compensation Gain Middle Byte                                           \
               */
#define ADDR_ADEMA127_DSP_RAM_CH4_XT_GAIN_HI                                                       \
    (0X052BU) /* Crosstalk Compensation Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_XT_AGGRESSOR (0X052DU) /* Crosstalk Compensation Aggressor */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_B0_LO                                              \
    (0X0531U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_B0_MD                                              \
    (0X0532U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_B0_HI                                              \
    (0X0533U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_B1_LO                                              \
    (0X0535U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_B1_MD                                              \
    (0X0536U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_B1_HI                                              \
    (0X0537U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_A1_LO                                              \
    (0X0539U) /* Sensor Compensation / All Pass Coefficient A1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_A1_MD                                              \
    (0X053AU) /* Sensor Compensation / All Pass Coefficient A1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH4_SCF_APF_COEFF_A1_HI                                              \
    (0X053BU) /* Sensor Compensation / All Pass Coefficient A1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B0_LO                                                 \
    (0X0541U) /* Compensation Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B0_MD                                                 \
    (0X0542U) /* Compensation Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B0_HI                                                 \
    (0X0543U) /* Compensation Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B1_LO                                                 \
    (0X0545U) /* Compensation Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B1_MD                                                 \
    (0X0546U) /* Compensation Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B1_HI                                                 \
    (0X0547U) /* Compensation Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B2_LO                                                 \
    (0X0549U) /* Compensation Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B2_MD                                                 \
    (0X054AU) /* Compensation Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B2_HI                                                 \
    (0X054BU) /* Compensation Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B3_LO                                                 \
    (0X054DU) /* Compensation Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B3_MD                                                 \
    (0X054EU) /* Compensation Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B3_HI                                                 \
    (0X054FU) /* Compensation Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B4_LO                                                 \
    (0X0551U) /* Compensation Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B4_MD                                                 \
    (0X0552U) /* Compensation Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_COMP_COEFF_B4_HI                                                 \
    (0X0553U) /* Compensation Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SHIFT     (0X055DU) /* Arithmetic Shift in Datapath */
#define ADDR_ADEMA127_DSP_RAM_CH5_GAIN_LO   (0X0561U) /* Channel Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_GAIN_MD   (0X0562U) /* Channel Gain Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_GAIN_HI   (0X0563U) /* Channel Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_OFFSET_LO (0X0565U) /* Channel Offset Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_OFFSET_MD (0X0566U) /* Channel Offset Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_OFFSET_HI (0X0567U) /* Channel Offset Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_XT_GAIN_LO                                                       \
    (0X0569U) /* Crosstalk Compensation Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_XT_GAIN_MD                                                       \
    (0X056AU) /* Crosstalk Compensation Gain Middle Byte                                           \
               */
#define ADDR_ADEMA127_DSP_RAM_CH5_XT_GAIN_HI                                                       \
    (0X056BU) /* Crosstalk Compensation Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_XT_AGGRESSOR (0X056DU) /* Crosstalk Compensation Aggressor */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_B0_LO                                              \
    (0X0571U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_B0_MD                                              \
    (0X0572U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_B0_HI                                              \
    (0X0573U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_B1_LO                                              \
    (0X0575U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_B1_MD                                              \
    (0X0576U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_B1_HI                                              \
    (0X0577U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_A1_LO                                              \
    (0X0579U) /* Sensor Compensation / All Pass Coefficient A1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_A1_MD                                              \
    (0X057AU) /* Sensor Compensation / All Pass Coefficient A1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH5_SCF_APF_COEFF_A1_HI                                              \
    (0X057BU) /* Sensor Compensation / All Pass Coefficient A1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B0_LO                                                 \
    (0X0581U) /* Compensation Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B0_MD                                                 \
    (0X0582U) /* Compensation Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B0_HI                                                 \
    (0X0583U) /* Compensation Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B1_LO                                                 \
    (0X0585U) /* Compensation Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B1_MD                                                 \
    (0X0586U) /* Compensation Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B1_HI                                                 \
    (0X0587U) /* Compensation Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B2_LO                                                 \
    (0X0589U) /* Compensation Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B2_MD                                                 \
    (0X058AU) /* Compensation Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B2_HI                                                 \
    (0X058BU) /* Compensation Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B3_LO                                                 \
    (0X058DU) /* Compensation Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B3_MD                                                 \
    (0X058EU) /* Compensation Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B3_HI                                                 \
    (0X058FU) /* Compensation Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B4_LO                                                 \
    (0X0591U) /* Compensation Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B4_MD                                                 \
    (0X0592U) /* Compensation Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_COMP_COEFF_B4_HI                                                 \
    (0X0593U) /* Compensation Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SHIFT     (0X059DU) /* Arithmetic Shift in Datapath */
#define ADDR_ADEMA127_DSP_RAM_CH6_GAIN_LO   (0X05A1U) /* Channel Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_GAIN_MD   (0X05A2U) /* Channel Gain Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_GAIN_HI   (0X05A3U) /* Channel Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_OFFSET_LO (0X05A5U) /* Channel Offset Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_OFFSET_MD (0X05A6U) /* Channel Offset Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_OFFSET_HI (0X05A7U) /* Channel Offset Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_XT_GAIN_LO                                                       \
    (0X05A9U) /* Crosstalk Compensation Gain Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_XT_GAIN_MD                                                       \
    (0X05AAU) /* Crosstalk Compensation Gain Middle Byte                                           \
               */
#define ADDR_ADEMA127_DSP_RAM_CH6_XT_GAIN_HI                                                       \
    (0X05ABU) /* Crosstalk Compensation Gain Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_XT_AGGRESSOR (0X05ADU) /* Crosstalk Compensation Aggressor */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_B0_LO                                              \
    (0X05B1U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_B0_MD                                              \
    (0X05B2U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_B0_HI                                              \
    (0X05B3U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_B1_LO                                              \
    (0X05B5U) /* Sensor Compensation / All Pass Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_B1_MD                                              \
    (0X05B6U) /* Sensor Compensation / All Pass Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_B1_HI                                              \
    (0X05B7U) /* Sensor Compensation / All Pass Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_A1_LO                                              \
    (0X05B9U) /* Sensor Compensation / All Pass Coefficient A1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_A1_MD                                              \
    (0X05BAU) /* Sensor Compensation / All Pass Coefficient A1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_CH6_SCF_APF_COEFF_A1_HI                                              \
    (0X05BBU) /* Sensor Compensation / All Pass Coefficient A1 Most Significant Byte */

/* ====================================================================================================
        ADEMA127_DSP_RAM_ALL Module Instances Register Address Defintions
   ====================================================================================================
 */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_LO                                                  \
    (0X05C1U) /* Low Pass Filter Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_MD                                                  \
    (0X05C2U) /* Low Pass Filter Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B0_HI                                                  \
    (0X05C3U) /* Low Pass Filter Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_LO                                                  \
    (0X05C5U) /* Low Pass Filter Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_MD                                                  \
    (0X05C6U) /* Low Pass Filter Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B1_HI                                                  \
    (0X05C7U) /* Low Pass Filter Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_LO                                                  \
    (0X05C9U) /* Low Pass Filter Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_MD                                                  \
    (0X05CAU) /* Low Pass Filter Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B2_HI                                                  \
    (0X05CBU) /* Low Pass Filter Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_LO                                                  \
    (0X05CDU) /* Low Pass Filter Coefficient B3 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_MD                                                  \
    (0X05CEU) /* Low Pass Filter Coefficient B3 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B3_HI                                                  \
    (0X05CFU) /* Low Pass Filter Coefficient B3 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_LO                                                  \
    (0X05D1U) /* Low Pass Filter Coefficient B4 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_MD                                                  \
    (0X05D2U) /* Low Pass Filter Coefficient B4 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B4_HI                                                  \
    (0X05D3U) /* Low Pass Filter Coefficient B4 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_LO                                                  \
    (0X05D5U) /* Low Pass Filter Coefficient B5 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_MD                                                  \
    (0X05D6U) /* Low Pass Filter Coefficient B5 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B5_HI                                                  \
    (0X05D7U) /* Low Pass Filter Coefficient B5 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_LO                                                  \
    (0X05D9U) /* Low Pass Filter Coefficient B6 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_MD                                                  \
    (0X05DAU) /* Low Pass Filter Coefficient B6 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B6_HI                                                  \
    (0X05DBU) /* Low Pass Filter Coefficient B6 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_LO                                                  \
    (0X05DDU) /* Low Pass Filter Coefficient B7 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_MD                                                  \
    (0X05DEU) /* Low Pass Filter Coefficient B7 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B7_HI                                                  \
    (0X05DFU) /* Low Pass Filter Coefficient B7 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_LO                                                  \
    (0X05E1U) /* Low Pass Filter Coefficient B8 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_MD                                                  \
    (0X05E2U) /* Low Pass Filter Coefficient B8 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B8_HI                                                  \
    (0X05E3U) /* Low Pass Filter Coefficient B8 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_LO                                                  \
    (0X05E5U) /* Low Pass Filter Coefficient B9 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_MD                                                  \
    (0X05E6U) /* Low Pass Filter Coefficient B9 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B9_HI                                                  \
    (0X05E7U) /* Low Pass Filter Coefficient B9 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_LO                                                 \
    (0X05E9U) /* Low Pass Filter Coefficient B10 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_MD                                                 \
    (0X05EAU) /* Low Pass Filter Coefficient B10 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B10_HI                                                 \
    (0X05EBU) /* Low Pass Filter Coefficient B10 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_LO                                                 \
    (0X05EDU) /* Low Pass Filter Coefficient B11 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_MD                                                 \
    (0X05EEU) /* Low Pass Filter Coefficient B11 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B11_HI                                                 \
    (0X05EFU) /* Low Pass Filter Coefficient B11 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_LO                                                 \
    (0X05F1U) /* Low Pass Filter Coefficient B12 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_MD                                                 \
    (0X05F2U) /* Low Pass Filter Coefficient B12 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B12_HI                                                 \
    (0X05F3U) /* Low Pass Filter Coefficient B12 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_LO                                                 \
    (0X05F5U) /* Low Pass Filter Coefficient B13 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_MD                                                 \
    (0X05F6U) /* Low Pass Filter Coefficient B13 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B13_HI                                                 \
    (0X05F7U) /* Low Pass Filter Coefficient B13 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_LO                                                 \
    (0X05F9U) /* Low Pass Filter Coefficient B14 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_MD                                                 \
    (0X05FAU) /* Low Pass Filter Coefficient B14 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B14_HI                                                 \
    (0X05FBU) /* Low Pass Filter Coefficient B14 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_LO                                                 \
    (0X05FDU) /* Low Pass Filter Coefficient B15 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_MD                                                 \
    (0X05FEU) /* Low Pass Filter Coefficient B15 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B15_HI                                                 \
    (0X05FFU) /* Low Pass Filter Coefficient B15 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_LO                                                 \
    (0X0601U) /* Low Pass Filter Coefficient B16 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_MD                                                 \
    (0X0602U) /* Low Pass Filter Coefficient B16 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B16_HI                                                 \
    (0X0603U) /* Low Pass Filter Coefficient B16 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_LO                                                 \
    (0X0605U) /* Low Pass Filter Coefficient B17 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_MD                                                 \
    (0X0606U) /* Low Pass Filter Coefficient B17 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_LPF_COEFF_B17_HI                                                 \
    (0X0607U) /* Low Pass Filter Coefficient B17 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_LO                                                  \
    (0X0609U) /* High Pass Filter Coefficient B0 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_MD                                                  \
    (0X060AU) /* High Pass Filter Coefficient B0 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B0_HI                                                  \
    (0X060BU) /* High Pass Filter Coefficient B0 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_LO                                                  \
    (0X060DU) /* High Pass Filter Coefficient B1 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_MD                                                  \
    (0X060EU) /* High Pass Filter Coefficient B1 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B1_HI                                                  \
    (0X060FU) /* High Pass Filter Coefficient B1 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_LO                                                  \
    (0X0611U) /* High Pass Filter Coefficient B2 Least Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_MD                                                  \
    (0X0612U) /* High Pass Filter Coefficient B2 Middle Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_B2_HI                                                  \
    (0X0613U) /* High Pass Filter Coefficient B2 Most Significant Byte */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_0                                                   \
    (0X0615U) /* High Pass Filter Coefficient A1 Byte 0 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_1                                                   \
    (0X0616U) /* High Pass Filter Coefficient A1 Byte 1 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_2                                                   \
    (0X0617U) /* High Pass Filter Coefficient A1 Byte 2 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_3                                                   \
    (0X0619U) /* High Pass Filter Coefficient A1 Byte 3 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_4                                                   \
    (0X061AU) /* High Pass Filter Coefficient A1 Byte 4 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A1_5                                                   \
    (0X061BU) /* High Pass Filter Coefficient A1 Byte 5 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_0                                                   \
    (0X061DU) /* High Pass Filter Coefficient A2 Byte 0 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_1                                                   \
    (0X061EU) /* High Pass Filter Coefficient A2 Byte 1 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_2                                                   \
    (0X061FU) /* High Pass Filter Coefficient A2 Byte 2 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_3                                                   \
    (0X0621U) /* High Pass Filter Coefficient A2 Byte 3 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_4                                                   \
    (0X0622U) /* High Pass Filter Coefficient A2 Byte 4 */
#define ADDR_ADEMA127_DSP_RAM_ALL_HPF_COEFF_A2_5                                                   \
    (0X0623U) /* High Pass Filter Coefficient A2 Byte 5 */

#endif /* ADEMA127_ADDR_DEF_H */

/** @} */