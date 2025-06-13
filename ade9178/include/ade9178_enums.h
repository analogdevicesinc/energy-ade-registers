/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

 /**
 * @file         ade9178_enums.h
 * @brief        ADE9178 register Enums
 * @{
 */

#ifndef __ADE9178_ENUMS_H__
#define __ADE9178_ENUMS_H__

typedef enum
{
	/**Signed.*/
	ADE9178_ACC_SIGNED =  0,
	/**Absolute Value.*/
	ADE9178_ACC_ABS =  1,
	/**Positive.*/
	ADE9178_ACC_POS =  2,
	/**Negative.*/
	ADE9178_ACC_NEG =  3,
} ADE9178_ACCMODE;


typedef enum
{
	/**Synchronized with Zero Crossing.*/
	ADE9178_ZX_MODE =  0,
	/**Synchronized with User Defined Half Period Value.*/
	ADE9178_USER_PERIOD_MODE =  1,
} ADE9178_AI_RMSHALF_MODE_SEL;


typedef enum
{
	/**256000 Bits/s*/
	ADE9178_RATE_256000 =  0,
	/**512000 Bits/s*/
	ADE9178_RATE_512000 =  1,
	/**1024000 Bits/s*/
	ADE9178_RATE_1024000 =  2,
	/**1536000 Bits/s*/
	ADE9178_RATE_1536000 =  3,
	/**2048000 Bits/s*/
	ADE9178_RATE_2048000 =  4,
	/**3072000 Bits/s*/
	ADE9178_RATE_3072000 =  5,
} ADE9178_BAUD_RATE;


typedef enum
{
	/**Continuous Interrupts.*/
	ADE9178_DIP_SWELL_IRQ_MODE_CONTINUOUS =  0,
	/**Enter and Exit Interrupts.*/
	ADE9178_DIP_SWELL_IRQ_MODE_ENTER_EXIT =  1,
} ADE9178_DIP_SWELL_HALF_IRQ_MODE;


typedef enum
{
	/**Time Based Accumulation.*/
	ADE9178_EGY_MS =  0,
	/**Zero Crossing Based Accumulation.*/
	ADE9178_EGY_ZX =  1,
} ADE9178_EGY_TMR_MODE;


typedef enum
{
	/**38.695Hz.*/
	ADE9178_HPF_38P695 =  0,
	/**19.6375Hz.*/
	ADE9178_HPF_19P6375 =  1,
	/**9.895Hz.*/
	ADE9178_HPF_9P895 =  2,
	/**4.9675Hz.*/
	ADE9178_HPF_4P9675 =  3,
	/**2.49Hz.*/
	ADE9178_HPF_2P49 =  4,
	/**1.2475Hz.*/
	ADE9178_HPF_1P2475 =  5,
	/**0.625Hz.*/
	ADE9178_HPF_0P625 =  6,
	/**0.3125Hz.*/
	ADE9178_HPF_0P3125 =  7,
} ADE9178_HPF_CRN;


typedef enum
{
	/**Auxiliary 0 Channel Used in ISUM Calculation.*/
	ADE9178_ISUM_AUX0_SEL =  0,
	/**Auxiliary 1 Channel Used in ISUM Calculation.*/
	ADE9178_ISUM_AUX1_SEL =  1,
	/**Auxiliary 2 Channel Used in ISUM Calculation.*/
	ADE9178_ISUM_AUX2_SEL =  2,
	/**Auxiliary 3 Channel Used in ISUM Calculation.*/
	ADE9178_ISUM_AUX3_SEL =  3,
	/**Auxiliary 4 Channel Used in ISUM Calculation.*/
	ADE9178_ISUM_AUX4_SEL =  4,
	/**Auxiliary 5 Channel Used in ISUM Calculation.*/
	ADE9178_ISUM_AUX5_SEL =  5,
} ADE9178_ISUM_AUXSEL;


typedef enum
{
	/**ISUM = AI_PCF + BI_PCF + CI_PCF*/
	ADE9178_ISUM_APPROX_NRMS1 =  0,
	/**ISUM = AI_PCF + BI_PCF + CI_PCF + AUXx_PCF*/
	ADE9178_ISUM_MISMATCH_P =  1,
	/**ISUM = AI_PCF + BI_PCF + CI_PCF - AUXx_PCF*/
	ADE9178_ISUM_MISMATCH_M =  2,
	/**ISUM = AI_PCF + BI_PCF + CI_PCF*/
	ADE9178_ISUM_APPROX_NRMS2 =  3,
} ADE9178_ISUM_CFG;


typedef enum
{
	/**Phase A Voltage Channel Period.*/
	ADE9178_LP_AV =  0,
	/**Phase B Voltage Channel Period.*/
	ADE9178_LP_BV =  1,
	/**Phase C Voltage Channel Period.*/
	ADE9178_LP_CV =  2,
	/**Combined Voltage Channel Period.*/
	ADE9178_LP_COMB =  3,
} ADE9178_LP_SEL;


typedef enum
{
	/**Evaluation Over 64 Samples.*/
	ADE9178_NOLOAD_TMR_64 =  0,
	/**Evaluation Over 128 Samples.*/
	ADE9178_NOLOAD_TMR_128 =  1,
	/**Evaluation Over 256 Samples.*/
	ADE9178_NOLOAD_TMR_256 =  2,
	/**Evaluation Over 512 Samples.*/
	ADE9178_NOLOAD_TMR_512 =  3,
	/**Evaluation Over 1024 Samples.*/
	ADE9178_NOLOAD_TMR_1024 =  4,
	/**Evaluation Over 2048 Samples.*/
	ADE9178_NOLOAD_TMR_2048 =  5,
	/**Evaluation Over 4096 Samples.*/
	ADE9178_NOLOAD_TMR_4096 =  6,
	/**Disable No Load Threshold.*/
	ADE9178_NOLOAD_TMR_DIS =  7,
} ADE9178_NOLOAD_TMR;


typedef enum
{
	/**AV Data Processing Path*/
	ADE9178_CHAN_AV =  0,
	/**AI Data Processing Path*/
	ADE9178_CHAN_AI =  1,
	/**BV Data Processing Path*/
	ADE9178_CHAN_BV =  2,
	/**BI Data Processing Path*/
	ADE9178_CHAN_BI =  3,
	/**CV Data Processing Path*/
	ADE9178_CHAN_CV =  4,
	/**CI Data Processing Path*/
	ADE9178_CHAN_CI =  5,
	/**AUX0 Data Processing Path*/
	ADE9178_CHAN_AUX0 =  6,
	/**AUX1 Data Processing Path*/
	ADE9178_CHAN_AUX1 =  7,
	/**AUX2 Data Processing Path*/
	ADE9178_CHAN_AUX2 =  8,
	/**AUX3 Data Processing Path*/
	ADE9178_CHAN_AUX3 =  9,
	/**AUX4 Data Processing Path*/
	ADE9178_CHAN_AUX4 =  10,
	/**AUX5 Data Processing Path*/
	ADE9178_CHAN_AUX5 =  11,
} ADE9178_PEN_CHANSEL;


typedef enum
{
	/**Line Period Measurement from PEN Channel A.*/
	ADE9178_LP_PEN_A =  0,
	/**Line Period Measurement from PEN Channel B.*/
	ADE9178_LP_PEN_B =  1,
	/**Line Period Measurement from PEN Channel C.*/
	ADE9178_LP_PEN_C =  2,
	/**Line Period Measurement from Combined PEN Channels.*/
	ADE9178_LP_PEN_COMB =  3,
} ADE9178_PEN_LP_SEL;


typedef enum
{
	/**No Additional Averaging.*/
	ADE9178_AVG_NORMAL =  0,
	/**Average by 8.*/
	ADE9178_AVG_8 =  1,
	/**Average by 16.*/
	ADE9178_AVG_16 =  2,
	/**Average by 32.*/
	ADE9178_AVG_32 =  3,
} ADE9178_PERIOD_AVG_CFG;


typedef enum
{
	/**Total Active Power.*/
	ADE9178_CF_TOTAL_ACTIVE =  0,
	/**Total Apparent Power.*/
	ADE9178_CF_TOTAL_APPARENT =  1,
	/**Total Reactive Power.*/
	ADE9178_CF_TOTAL_REACTIVE =  2,
	/**Fundamental Active Power.*/
	ADE9178_CF_FUNDAMENTAL_ACTIVE =  3,
	/**Fundamental Reactive Power.*/
	ADE9178_CF_FUNDAMENTAL_REACTIVE =  4,
	/**Fundamental Apparent Power.*/
	ADE9178_CF_FUNDAMENTAL_APPARENT =  5,
} ADE9178_PWRSEL;


typedef enum
{
	/**Settle for 64ms.*/
	ADE9178_PWR_SETTLE_64 =  0,
	/**Settle for 128ms.*/
	ADE9178_PWR_SETTLE_128 =  1,
	/**Settle for 256ms.*/
	ADE9178_PWR_SETTLE_256 =  2,
	/**Settle for 0ms.*/
	ADE9178_PWR_SETTLE_0 =  3,
} ADE9178_PWR_SETTLE;


typedef enum
{
	/**Samples After High Pass Filter Used for RMSHALF.*/
	ADE9178_INP_AFTER_HPF =  0,
	/**Samples Before High Pass Filter Used for RMSHALF.*/
	ADE9178_INP_BEFORE_HPF =  1,
} ADE9178_RMSHALF_SRC_SEL;


typedef enum
{
	/**50 Hz.*/
	ADE9178_SELFREQ_50 =  0,
	/**60 Hz.*/
	ADE9178_SELFREQ_60 =  1,
} ADE9178_SELFREQ;


typedef enum
{
	/**4-Wire Wye.*/
	ADE9178_VCON_4WYE_1 =  0,
	/**3-Wire Delta. BV' = AV − CV.*/
	ADE9178_VCON_3DELTA_1 =  1,
	/**4-Wire Wye, Non-Blondel Compliant. BV' = −AV − CV.*/
	ADE9178_VCON_4WYE_2 =  2,
	/**4-Wire Wye, Non-Blondel Compliant. BV'= −AV.*/
	ADE9178_VCON_4WYE_3 =  3,
	/**3-Wire Delta. AV' = AV − BV; BV' = AV − CV; CV' = CV − BV.*/
	ADE9178_VCON_3DELTA_2 =  4,
} ADE9178_VCONSEL;


typedef enum
{
	/**ADC Samples.*/
	ADE9178_ADC_SAMPLES =  0,
	/**PCF Output.*/
	ADE9178_PCF_OUTPUT =  1,
	/**Metrology Debug Output.*/
	ADE9178_DEBUG_OUTPUT =  3,
} ADE9178_WF_SRC;


typedef enum
{
	/**Phase A Voltage Channel Zero Crossings.*/
	ADE9178_ZX_AV =  0,
	/**Phase B Voltage Channel Zero Crossings.*/
	ADE9178_ZX_BV =  1,
	/**Phase C Voltage Channel Zero Crossings.*/
	ADE9178_ZX_CV =  2,
	/**Combined Voltage Channel Zero Crossings.*/
	ADE9178_ZX_COMB =  3,
} ADE9178_ZX_SEL;


typedef enum
{
	/**ZX After Phase Compensation.*/
	ADE9178_ZX_POST_PCF =  0,
	/**ZX Before High Pass Filter.*/
	ADE9178_ZX_PRE_HPF =  1,
} ADE9178_ZX_SRC_SEL;


#endif /* __ADE9178_ENUMS_H__*/

/**
 * @}
 */
