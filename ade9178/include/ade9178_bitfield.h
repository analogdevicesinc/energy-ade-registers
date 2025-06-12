/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

 /**
 * @file         ade9178_bitfield.h
 * @addtogroup   ADE9178_HEADERS ADE9178 Headers
 * @brief        ADE9178 bitfield registers
 * @{
 */

#ifndef __ADE9178_BITFIELD_H__
#define __ADE9178_BITFIELD_H__

typedef struct
{
    /** Reserved.*/
    unsigned int swrst : 1;
    /** Line Cycle Frequency Selection.*/
    unsigned int selfreq : 1;
    /** User Line Period Enable.*/
    unsigned int uperiodSel : 1;
    /** Period Averaging Configuration.*/
    unsigned int periodAvgCfg : 2;
    /** High Pass Filter Disable.*/
    unsigned int hpfdis : 1;
    /** High Pass Filter Corner Selection.*/
    unsigned int hpfCrn : 3;
    /** Low Pass Filter Active Power Disable.*/
    unsigned int disaplpf : 1;
    /** Fast RMSHALF Sample Source Select.*/
    unsigned int rmshalfSrcSel : 1;
    /** RMSONE Sample Source Select.*/
    unsigned int rmsoneSrcSel : 1;
    /** Zero Crossing Source Select.*/
    unsigned int zxSrcSel : 1;
    /** Nominal Phase Voltage RMS for Phase A Total Apparent Power.*/
    unsigned int vnomaEn : 1;
    /** Nominal Phase Voltage RMS for Phase B Total Apparent Power.*/
    unsigned int vnombEn : 1;
    /** Nominal Phase Voltage RMS for Phase C Total Apparent Power.*/
    unsigned int vnomcEn : 1;
    /** Power Settling Time Selection.*/
    unsigned int pwrSettle : 2;
    /** Dip and Swell Half Cycle Interrupt Mode Selection.*/
    unsigned int dipSwellHalfIrqMode : 1;
    /** Dip and Swell One Cycle Interrupt Mode Selection.*/
    unsigned int dipSwellOneIrqMode : 1;
    /** ISUM Calculation Configuration.*/
    unsigned int isumCfg : 2;
    /** Neutral Channel Selection Configuration for ISUM.*/
    unsigned int isumAuxsel : 3;
    /** Three-Wire and Four-Wire Hardware Configuration Selection.*/
    unsigned int vconsel : 3;
    /** Phase B Current Calculation Selection.*/
    unsigned int iconsel : 1;
    /** Disable CRC Check.*/
    unsigned int crcDis : 1;
} ADE9178_MET_CONFIG0;


typedef struct
{
    /** Peak Detection Phase Selection for Voltage Channels.*/
    unsigned int vpeaksel : 3;
    /** Peak Detection Phase Selection for Current Channels.*/
    unsigned int ipeaksel : 3;
    /** Peak Detection Phase Selection for Auxiliary Channels.*/
    unsigned int auxpeaksel : 6;
} ADE9178_MET_PEAK_CONFIG;


typedef struct
{
    /** Channel A Selection for PEN Fault Detection.*/
    unsigned int penChansela : 4;
    /** Channel B Selection for PEN Fault Detection.*/
    unsigned int penChanselb : 4;
    /** Channel C Selection for PEN Fault Detection.*/
    unsigned int penChanselc : 4;
    /** Line Period Measurement Selection for PEN Channels.*/
    unsigned int penLpSel : 2;
} ADE9178_MET_PEN_CONFIG;


typedef struct
{
    /** CF1 Output Disable.*/
    unsigned int cfdis : 1;
    /** CF1 Energy Output Type.*/
    unsigned int pwrsel : 3;
    /** Phases to Include in CF1 Pulse Output.*/
    unsigned int phasesel : 3;
    /** CF1 Accumulation Mode Configuration.*/
    unsigned int accmode : 2;
    /** CF1 Pulse Width Select.*/
    unsigned int widthsel : 1;
    /** Clear CF1 Accumulator.*/
    unsigned int accClear : 1;
} ADE9178_MET_CF1_CONFIG;


typedef struct
{
    /** CF2 Output Disable.*/
    unsigned int cfdis : 1;
    /** CF2 Energy Output Type.*/
    unsigned int pwrsel : 3;
    /** Phases to Include in CF2 Pulse Output.*/
    unsigned int phasesel : 3;
    /** CF2 Accumulation Mode Configuration.*/
    unsigned int accmode : 2;
    /** CF2 Pulse Width Select.*/
    unsigned int widthsel : 1;
    /** Clear CF2 Accumulator.*/
    unsigned int accClear : 1;
} ADE9178_MET_CF2_CONFIG;


typedef struct
{
    /** AVRMSHALF Mode Selection*/
    unsigned int avRmshalfModeSel : 1;
    /** AIRMSHALF Mode Selection*/
    unsigned int aiRmshalfModeSel : 1;
    /** BVRMSHALF Mode Selection*/
    unsigned int bvRmshalfModeSel : 1;
    /** BIRMSHALF Mode Selection*/
    unsigned int biRmshalfModeSel : 1;
    /** CVRMSHALF Mode Selection*/
    unsigned int cvRmshalfModeSel : 1;
    /** CIRMSHALF Mode Selection*/
    unsigned int ciRmshalfModeSel : 1;
    /** AUX0RMSHALF Mode Selection*/
    unsigned int aux0RmshalfModeSel : 1;
    /** AUX1RMSHALF Mode Selection*/
    unsigned int aux1RmshalfModeSel : 1;
    /** AUX2RMSHALF Mode Selection*/
    unsigned int aux2RmshalfModeSel : 1;
    /** AUX3RMSHALF Mode Selection*/
    unsigned int aux3RmshalfModeSel : 1;
    /** AUX4RMSHALF Mode Selection*/
    unsigned int aux4RmshalfModeSel : 1;
    /** AUX5RMSHALF Mode Selection*/
    unsigned int aux5RmshalfModeSel : 1;
} ADE9178_MET_RMSHALF_CONFIG;


typedef struct
{
    /** Zero Crossing Signal Selection.*/
    unsigned int zxSel : 2;
    /** Line Period Measurement Selection.*/
    unsigned int lpSel : 2;
} ADE9178_MET_ZX_LP_SEL;


typedef struct
{
    /** Energy Accumulators Enable.*/
    unsigned int egyPwrEn : 1;
    /** Energy Accumulation Mode.*/
    unsigned int egyTmrMode : 1;
    /** Energy Register Update Mode.*/
    unsigned int egyLdAccum : 1;
    /** Energy Register Reset on Read Enable.*/
    unsigned int rdRstEn : 1;
    /** No Load Condition Evaluation Window.*/
    unsigned int noloadTmr : 3;
} ADE9178_MET_EP_CFG;


typedef struct
{
    /** Enable Waveform Streaming*/
    unsigned int wfsEn : 1;
    /** Baud Rate for Waveform Streaming*/
    unsigned int baudRate : 4;
    /** Waveform Samples to Send*/
    unsigned int wfSrc : 2;
    /** Set to Enable Phase A Voltage Waveform Streaming.*/
    unsigned int avWfsEn : 1;
    /** Set to Enable Phase A Current Waveform Streaming.*/
    unsigned int aiWfsEn : 1;
    /** Set to Enable Phase B Voltage Waveform Streaming.*/
    unsigned int bvWfsEn : 1;
    /** Set to Enable Phase B Current Waveform Streaming.*/
    unsigned int biWfsEn : 1;
    /** Set to Enable Phase C Voltage Waveform Streaming.*/
    unsigned int cvWfsEn : 1;
    /** Set to Enable Phase C Current Waveform Streaming.*/
    unsigned int ciWfsEn : 1;
    /** Set to Enable Auxiliary 0 Channel Waveform Streaming.*/
    unsigned int aux0WfsEn : 1;
    /** Set to Enable Auxiliary 1 Channel Waveform Streaming.*/
    unsigned int aux1WfsEn : 1;
    /** Set to Enable Auxiliary 2 Channel Waveform Streaming.*/
    unsigned int aux2WfsEn : 1;
    /** Set to Enable Auxiliary 3 Channel Waveform Streaming.*/
    unsigned int aux3WfsEn : 1;
    /** Set to Enable Auxiliary 4 Channel Waveform Streaming.*/
    unsigned int aux4WfsEn : 1;
    /** Set to Enable Auxiliary 5 Channel Waveform Streaming.*/
    unsigned int aux5WfsEn : 1;
} ADE9178_MET_WFS_CONFIG;


typedef struct
{
    /** Set This Bit to Start the Measurements.*/
    unsigned int adcRun : 1;
    /** Set This Bit to Initialize the ADCs.*/
    unsigned int adcInit : 1;
    /** Set This Bit to Synchronize the ADCs.*/
    unsigned int adcSync : 1;
} ADE9178_MET_ADC_CONTROL;


typedef struct
{
    /** ADC AV Channel Data Multiplexing.*/
    unsigned int av : 5;
    /** ADC AI Channel Data Multiplexing.*/
    unsigned int ai : 5;
    /** ADC BV Channel Data Multiplexing.*/
    unsigned int bv : 5;
    /** ADC BI Channel Data Multiplexing.*/
    unsigned int bi : 5;
    /** ADC CV Channel Data Multiplexing.*/
    unsigned int cv : 5;
    /** ADC CI Channel Data Multiplexing.*/
    unsigned int ci : 5;
} ADE9178_MET_ADC_REDIRECT0;


typedef struct
{
    /** ADC AUX0 Channel Data Multiplexing.*/
    unsigned int aux0 : 5;
    /** ADC AUX1 Channel Data Multiplexing.*/
    unsigned int aux1 : 5;
    /** ADC AUX2 Channel Data Multiplexing.*/
    unsigned int aux2 : 5;
    /** ADC AUX3 Channel Data Multiplexing.*/
    unsigned int aux3 : 5;
    /** ADC AUX4 Channel Data Multiplexing.*/
    unsigned int aux4 : 5;
    /** ADC AUX5 Channel Data Multiplexing.*/
    unsigned int aux5 : 5;
} ADE9178_MET_ADC_REDIRECT1;


typedef struct
{
    /** CRC MASK0 Enable.*/
    unsigned int crcMask0En : 1;
    /** CRC MASK1 Enable.*/
    unsigned int crcMask1En : 1;
    /** CRC MASK2 Enable.*/
    unsigned int crcMask2En : 1;
    /** CRC MASK3 Enable.*/
    unsigned int crcMask3En : 1;
    /** CRC DIPHALF_LVL Enable.*/
    unsigned int crcDiphalfLvlEn : 1;
    /** CRC DIPHALF_CYC Enable.*/
    unsigned int crcDiphalfCycEn : 1;
    /** CRC DIPONE_LVL Enable.*/
    unsigned int crcDiponeLvlEn : 1;
    /** CRC DIPONE_CYC Enable.*/
    unsigned int crcDiponeCycEn : 1;
    /** CRC SWELLHALF_LVL Enable.*/
    unsigned int crcSwellhalfLvlEn : 1;
    /** CRC SWELLHALF_CYC Enable.*/
    unsigned int crcSwellhalfCycEn : 1;
    /** CRC SWELLONE_LVL Enable.*/
    unsigned int crcSwelloneLvlEn : 1;
    /** CRC SWELLONE_CYC Enable.*/
    unsigned int crcSwelloneCycEn : 1;
    /** CRC ACT_NL_LVL Enable.*/
    unsigned int crcActNlLvlEn : 1;
    /** CRC APP_NL_LVL Enable.*/
    unsigned int crcAppNlLvlEn : 1;
    /** CRC ZXTOUT_EN Enable.*/
    unsigned int crcZxtoutEn : 1;
    /** CRC ZXLPSEL Enable.*/
    unsigned int crcZxlpselEn : 1;
} ADE9178_MET_CRC_OPTEN;


typedef struct
{
    /** Absolute Value of the Peak Current.*/
    unsigned int ipeakval : 24;
    /** Current Channel Peak Phase.*/
    unsigned int ipphase : 3;
} ADE9178_MET_IPEAK;


typedef struct
{
    /** Absolute Value of the Peak Voltage.*/
    unsigned int vpeakval : 24;
    /** Voltage Channel Peak Phase.*/
    unsigned int vpphase : 3;
} ADE9178_MET_VPEAK;


typedef struct
{
    /** Absolute Peak Value of the Auxiliary Channels.*/
    unsigned int auxpeakval : 24;
    /** Auxiliary Channel Peak Phase.*/
    unsigned int auxphase : 6;
} ADE9178_MET_AUXPEAK;


typedef struct
{
    /** Phase A Active Power Sign Bit.*/
    unsigned int awsign : 1;
    /** Phase B Active Power Sign Bit.*/
    unsigned int bwsign : 1;
    /** Phase C Active Power Sign Bit.*/
    unsigned int cwsign : 1;
    /** CF1 Last Sum Sign.*/
    unsigned int sum1sign : 1;
    /** CF2 Last Sum Sign.*/
    unsigned int sum2sign : 1;
} ADE9178_MET_PHSIGN;


typedef struct
{
    /** Phase A Total Active Energy No Load Status.*/
    unsigned int awattnl : 1;
    /** Phase A Total Apparent Energy No Load Status.*/
    unsigned int avanl : 1;
    /** Phase B Total Active Energy No Load Status.*/
    unsigned int bwattnl : 1;
    /** Phase B Total Apparent Energy No Load Status.*/
    unsigned int bvanl : 1;
    /** Phase C Total Active Energy No Load Status.*/
    unsigned int cwattnl : 1;
    /** Phase C Total Apparent Energy No Load Status.*/
    unsigned int cvanl : 1;
} ADE9178_MET_PHNOLOAD;


typedef struct
{
    /** Energy Data Ready.*/
    unsigned int egyrdy : 1;
    /** Phase A Active Power Sign Change.*/
    unsigned int revapa : 1;
    /** Phase B Active Power Sign Change.*/
    unsigned int revapb : 1;
    /** Phase C Active Power Sign Change.*/
    unsigned int revapc : 1;
    /** CF1 Polarity Sign Change.*/
    unsigned int revpsum1 : 1;
    /** CF2 Polarity Sign Change.*/
    unsigned int revpsum2 : 1;
    /** CF1 Pulse Issued.*/
    unsigned int cf1 : 1;
    /** CF2 Pulse Issued.*/
    unsigned int cf2 : 1;
    /** One Cycle RMS Data Ready.*/
    unsigned int rmsonerdy : 1;
    /** Power Factor Data Ready.*/
    unsigned int pfRdy : 1;
    /** ISUM RMS Mismatch.*/
    unsigned int isummismtch : 1;
    /** Total Active Energy No Load Condition Changed.*/
    unsigned int wattnload : 1;
    /** Total Apparent Energy No Load Condition Changed.*/
    unsigned int vanload : 1;
    /** CRC Changed.*/
    unsigned int crcChg : 1;
    /** Reset Completed and Ready for SPI Communication.*/
    unsigned int rstdone : 1;
    /** Phase Sequence Error Occurred on Voltage Zero Crossings.*/
    unsigned int seqerr : 1;
    /** Phase A Voltage Zero Crossing Timeout.*/
    unsigned int zxtoav : 1;
    /** Phase B Voltage Zero Crossing Timeout.*/
    unsigned int zxtobv : 1;
    /** Phase C Voltage Zero Crossing Timeout.*/
    unsigned int zxtocv : 1;
    /** Phase A Voltage Zero Crossing Detected.*/
    unsigned int zxav : 1;
    /** Phase B Voltage Zero Crossing Detected.*/
    unsigned int zxbv : 1;
    /** Phase C Voltage Zero Crossing Detected.*/
    unsigned int zxcv : 1;
    /** Combined Voltage Channels Zero Crossing Detected.*/
    unsigned int zxcomb : 1;
    /** Phase A Current Zero Crossing Detected.*/
    unsigned int zxai : 1;
    /** Phase B Current Zero Crossing Detected.*/
    unsigned int zxbi : 1;
    /** Phase C Current Zero Crossing Detected.*/
    unsigned int zxci : 1;
    /** Auxiliary 0 Channel Zero Crossing Detected.*/
    unsigned int zxaux0 : 1;
    /** Auxiliary 1 Channel Zero Crossing Detected.*/
    unsigned int zxaux1 : 1;
    /** Auxiliary 2 Channel Zero Crossing Detected.*/
    unsigned int zxaux2 : 1;
    /** Auxiliary 3 Channel Zero Crossing Detected.*/
    unsigned int zxaux3 : 1;
    /** Auxiliary 4 Channel Zero Crossing Detected.*/
    unsigned int zxaux4 : 1;
    /** Auxiliary 5 Channel Zero Crossing Detected.*/
    unsigned int zxaux5 : 1;
} ADE9178_MET_STATUS0;


typedef struct
{
    /** Energy Data Ready.*/
    unsigned int egyrdy : 1;
    /** Phase A Active Power Sign Change.*/
    unsigned int revapa : 1;
    /** Phase B Active Power Sign Change.*/
    unsigned int revapb : 1;
    /** Phase C Active Power Sign Change.*/
    unsigned int revapc : 1;
    /** CF1 Polarity Sign Change.*/
    unsigned int revpsum1 : 1;
    /** CF2 Polarity Sign Change.*/
    unsigned int revpsum2 : 1;
    /** CF1 Pulse Issued.*/
    unsigned int cf1 : 1;
    /** CF2 Pulse Issued.*/
    unsigned int cf2 : 1;
    /** One Cycle RMS Data Ready.*/
    unsigned int rmsonerdy : 1;
    /** Power Factor Data Ready.*/
    unsigned int pfRdy : 1;
    /** ISUM RMS Mismatch.*/
    unsigned int isummismtch : 1;
    /** Total Active Energy No Load Condition Changed.*/
    unsigned int wattnload : 1;
    /** Total Apparent Energy No Load Condition Changed.*/
    unsigned int vanload : 1;
    /** CRC Changed.*/
    unsigned int crcChg : 1;
    /** Error Occurred.*/
    unsigned int error : 1;
    /** Phase Sequence Error Occurred on Voltage Zero Crossings.*/
    unsigned int seqerr : 1;
    /** Phase A Voltage Zero Crossing Timeout.*/
    unsigned int zxtoav : 1;
    /** Phase B Voltage Zero Crossing Timeout.*/
    unsigned int zxtobv : 1;
    /** Phase C Voltage Zero Crossing Timeout.*/
    unsigned int zxtocv : 1;
    /** Phase A Voltage Zero Crossing Detected.*/
    unsigned int zxav : 1;
    /** Phase B Voltage Zero Crossing Detected.*/
    unsigned int zxbv : 1;
    /** Phase C Voltage Zero Crossing Detected.*/
    unsigned int zxcv : 1;
    /** Combined Voltage Channels Zero Crossing Detected.*/
    unsigned int zxcomb : 1;
    /** Phase A Current Zero Crossing Detected.*/
    unsigned int zxai : 1;
    /** Phase B Current Zero Crossing Detected.*/
    unsigned int zxbi : 1;
    /** Phase C Current Zero Crossing Detected.*/
    unsigned int zxci : 1;
    /** Auxiliary 0 Channel Zero Crossing Detected.*/
    unsigned int zxaux0 : 1;
    /** Auxiliary 1 Channel Zero Crossing Detected.*/
    unsigned int zxaux1 : 1;
    /** Auxiliary 2 Channel Zero Crossing Detected.*/
    unsigned int zxaux2 : 1;
    /** Auxiliary 3 Channel Zero Crossing Detected.*/
    unsigned int zxaux3 : 1;
    /** Auxiliary 4 Channel Zero Crossing Detected.*/
    unsigned int zxaux4 : 1;
    /** Auxiliary 5 Channel Zero Crossing Detected.*/
    unsigned int zxaux5 : 1;
} ADE9178_MET_STATUS1;


typedef struct
{
    /** Phase A Voltage Dip Condition Detected.*/
    unsigned int avdipone : 1;
    /** Phase A Current Dip Condition Detected.*/
    unsigned int aidipone : 1;
    /** Phase B Voltage Dip Condition Detected.*/
    unsigned int bvdipone : 1;
    /** Phase B Current Dip Condition Detected.*/
    unsigned int bidipone : 1;
    /** Phase C Voltage Dip Condition Detected.*/
    unsigned int cvdipone : 1;
    /** Phase C Current Dip Condition Detected.*/
    unsigned int cidipone : 1;
    /** Auxiliary 0 Channel Dip Condition Detected.*/
    unsigned int aux0dipone : 1;
    /** Auxiliary 1 Channel Dip Condition Detected.*/
    unsigned int aux1dipone : 1;
    /** Auxiliary 2 Channel Dip Condition Detected.*/
    unsigned int aux2dipone : 1;
    /** Auxiliary 3 Channel Dip Condition Detected.*/
    unsigned int aux3dipone : 1;
    /** Auxiliary 4 Channel Dip Condition Detected.*/
    unsigned int aux4dipone : 1;
    /** Auxiliary 5 Channel Dip Condition Detected.*/
    unsigned int aux5dipone : 1;
    /** Phase A Voltage Swell Condition Detected.*/
    unsigned int avswellone : 1;
    /** Phase A Current Swell Condition Detected.*/
    unsigned int aiswellone : 1;
    /** Phase B Voltage Swell Condition Detected.*/
    unsigned int bvswellone : 1;
    /** Phase B Current Swell Condition Detected.*/
    unsigned int biswellone : 1;
    /** Phase C Voltage Swell Condition Detected.*/
    unsigned int cvswellone : 1;
    /** Phase C Current Swell Condition Detected.*/
    unsigned int ciswellone : 1;
    /** Auxiliary 0 Channel Swell Condition Detected.*/
    unsigned int aux0swellone : 1;
    /** Auxiliary 1 Channel Swell Condition Detected.*/
    unsigned int aux1swellone : 1;
    /** Auxiliary 2 Channel Swell Condition Detected.*/
    unsigned int aux2swellone : 1;
    /** Auxiliary 3 Channel Swell Condition Detected.*/
    unsigned int aux3swellone : 1;
    /** Auxiliary 4 Channel Swell Condition Detected.*/
    unsigned int aux4swellone : 1;
    /** Auxiliary 5 Channel Swell Condition Detected.*/
    unsigned int aux5swellone : 1;
    /** VSUM Swell Condition Detected.*/
    unsigned int vsumswellone : 1;
    /** VP2P Dip Condition Detected.*/
    unsigned int vabdipone : 1;
    /** VP2P Dip Condition Detected.*/
    unsigned int vbcdipone : 1;
    /** VP2P Dip Condition Detected.*/
    unsigned int vacdipone : 1;
    /** VP2P Swell Condition Detected.*/
    unsigned int vabswellone : 1;
    /** VP2P Swell Condition Detected.*/
    unsigned int vbcswellone : 1;
    /** VP2P Swell Condition Detected.*/
    unsigned int vacswellone : 1;
} ADE9178_MET_STATUS2;


typedef struct
{
    /** Phase A Voltage Dip Condition Detected.*/
    unsigned int avdiphalf : 1;
    /** Phase A Current Dip Condition Detected.*/
    unsigned int aidiphalf : 1;
    /** Phase B Voltage Dip Condition Detected.*/
    unsigned int bvdiphalf : 1;
    /** Phase B Current Dip Condition Detected.*/
    unsigned int bidiphalf : 1;
    /** Phase C Voltage Dip Condition Detected.*/
    unsigned int cvdiphalf : 1;
    /** Phase C Current Dip Condition Detected.*/
    unsigned int cidiphalf : 1;
    /** Auxiliary 0 Channel Dip Condition Detected.*/
    unsigned int aux0diphalf : 1;
    /** Auxiliary 1 Channel Dip Condition Detected.*/
    unsigned int aux1diphalf : 1;
    /** Auxiliary 2 Channel Dip Condition Detected.*/
    unsigned int aux2diphalf : 1;
    /** Auxiliary 3 Channel Dip Condition Detected.*/
    unsigned int aux3diphalf : 1;
    /** Auxiliary 4 Channel Dip Condition Detected.*/
    unsigned int aux4diphalf : 1;
    /** Auxiliary 5 Channel Dip Condition Detected.*/
    unsigned int aux5diphalf : 1;
    /** Phase A Voltage Swell Condition Detected.*/
    unsigned int avswellhalf : 1;
    /** Phase A Current Swell Condition Detected.*/
    unsigned int aiswellhalf : 1;
    /** Phase B Voltage Swell Condition Detected.*/
    unsigned int bvswellhalf : 1;
    /** Phase B Current Swell Condition Detected.*/
    unsigned int biswellhalf : 1;
    /** Phase C Voltage Swell Condition Detected.*/
    unsigned int cvswellhalf : 1;
    /** Phase C Current Swell Condition Detected.*/
    unsigned int ciswellhalf : 1;
    /** Auxiliary 0 Channel Swell Condition Detected.*/
    unsigned int aux0swellhalf : 1;
    /** Auxiliary 1 Channel Swell Condition Detected.*/
    unsigned int aux1swellhalf : 1;
    /** Auxiliary 2 Channel Swell Condition Detected.*/
    unsigned int aux2swellhalf : 1;
    /** Auxiliary 3 Channel Swell Condition Detected.*/
    unsigned int aux3swellhalf : 1;
    /** Auxiliary 4 Channel Swell Condition Detected.*/
    unsigned int aux4swellhalf : 1;
    /** Auxiliary 5 Channel Swell Condition Detected.*/
    unsigned int aux5swellhalf : 1;
} ADE9178_MET_STATUS3;


typedef struct
{
    /** Error Occurs in ADC Initialization.*/
    unsigned int adcInitError : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error0 : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error1 : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error2 : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error3 : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error4 : 1;
    /** ADC CRC Error Occurs.*/
    unsigned int adcCrcError : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error5 : 1;
    /** ADC Data Ready Frequency Error.*/
    unsigned int dreadyFreqError : 1;
    /** ADC0 STATUS0*/
    unsigned int adc0Status0 : 1;
    /** ADC0 STATUS1*/
    unsigned int adc0Status1 : 1;
    /** ADC0 STATUS2*/
    unsigned int adc0Status2 : 1;
    /** ADC1 STATUS0*/
    unsigned int adc1Status0 : 1;
    /** ADC1 STATUS1*/
    unsigned int adc1Status1 : 1;
    /** ADC1 STATUS2*/
    unsigned int adc1Status2 : 1;
    /** ADC2 STATUS0*/
    unsigned int adc2Status0 : 1;
    /** ADC2 STATUS1*/
    unsigned int adc2Status1 : 1;
    /** ADC2 STATUS2*/
    unsigned int adc2Status2 : 1;
    /** ADC3 STATUS0*/
    unsigned int adc3Status0 : 1;
    /** ADC3 STATUS1*/
    unsigned int adc3Status1 : 1;
    /** ADC3 STATUS2*/
    unsigned int adc3Status2 : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error6 : 1;
    /** Internal Error. Reset ADE9178 and ADCs.*/
    unsigned int error7 : 1;
} ADE9178_MET_ERROR_STATUS;


typedef struct
{
    /** Energy Data Ready Mask.*/
    unsigned int egyrdy : 1;
    /** Phase A Active Power Sign Change Mask.*/
    unsigned int revapa : 1;
    /** Phase B Active Power Sign Change Mask.*/
    unsigned int revapb : 1;
    /** Phase C Active Power Sign Change Mask.*/
    unsigned int revapc : 1;
    /** CF1 Polarity Sign Change Mask.*/
    unsigned int revpsum1 : 1;
    /** CF2 Polarity Sign Change Mask.*/
    unsigned int revpsum2 : 1;
    /** CF1 Pulse Issued Mask.*/
    unsigned int cf1 : 1;
    /** CF2 Pulse Issued Mask.*/
    unsigned int cf2 : 1;
    /** One Cycle RMS RMS Data Ready Mask.*/
    unsigned int rmsonerdy : 1;
    /** Power Factor Data Ready Mask.*/
    unsigned int pfRdy : 1;
    /** ISUM RMS Mismatch Mask.*/
    unsigned int isummismtch : 1;
    /** Total Active Energy No Load Condition Changed Mask.*/
    unsigned int wattnload : 1;
    /** Total Apparent Energy No Load Condition Changed Mask.*/
    unsigned int vanload : 1;
    /** CRC Changed Mask.*/
    unsigned int crcChg : 1;
    /** Reset Completed and Ready for SPI Communication.*/
    unsigned int rstdone : 1;
    /** Phase Sequence Error Occurred on Voltage Zero Crossings.*/
    unsigned int seqerr : 1;
    /** Phase A Voltage Zero Crossing Timeout Mask.*/
    unsigned int zxtoav : 1;
    /** Phase B Voltage Zero Crossing Timeout Mask.*/
    unsigned int zxtobv : 1;
    /** Phase C Voltage Zero Crossing Timeout Mask.*/
    unsigned int zxtocv : 1;
    /** Phase A Voltage Zero Crossing Detected Mask.*/
    unsigned int zxav : 1;
    /** Phase B Voltage Zero Crossing Detected Mask.*/
    unsigned int zxbv : 1;
    /** Phase C Voltage Zero Crossing Detected Mask.*/
    unsigned int zxcv : 1;
    /** Combined Voltage Channels Zero Crossing Detected Mask.*/
    unsigned int zxcomb : 1;
    /** Phase A Current Zero Crossing Detected Mask.*/
    unsigned int zxai : 1;
    /** Phase B Current Zero Crossing Detected Mask.*/
    unsigned int zxbi : 1;
    /** Phase C Current Zero Crossing Detected Mask.*/
    unsigned int zxci : 1;
    /** Auxiliary 0 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux0 : 1;
    /** Auxiliary 1 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux1 : 1;
    /** Auxiliary 2 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux2 : 1;
    /** Auxiliary 3 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux3 : 1;
    /** Auxiliary 4 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux4 : 1;
    /** Auxiliary 5 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux5 : 1;
} ADE9178_MET_MASK0;


typedef struct
{
    /** Energy Data Ready Mask.*/
    unsigned int egyrdy : 1;
    /** Phase A Active Power Sign Change Mask.*/
    unsigned int revapa : 1;
    /** Phase B Active Power Sign Change Mask.*/
    unsigned int revapb : 1;
    /** Phase C Active Power Sign Change Mask.*/
    unsigned int revapc : 1;
    /** CF1 Polarity Sign Change Mask.*/
    unsigned int revpsum1 : 1;
    /** CF2 Polarity Sign Change Mask.*/
    unsigned int revpsum2 : 1;
    /** CF1 Pulse Issued Mask.*/
    unsigned int cf1 : 1;
    /** CF2 Pulse Issued Mask.*/
    unsigned int cf2 : 1;
    /** One Cycle RMS RMS Data Ready Mask.*/
    unsigned int rmsonerdy : 1;
    /** Power Factor Data Ready Mask.*/
    unsigned int pfRdy : 1;
    /** ISUM RMS Mismatch Mask.*/
    unsigned int isummismtch : 1;
    /** Total Active Energy No Load Condition Changed Mask.*/
    unsigned int wattnload : 1;
    /** Total Apparent Energy No Load Condition Changed Mask.*/
    unsigned int vanload : 1;
    /** CRC Changed Mask.*/
    unsigned int crcChg : 1;
    /** Error Occurred.*/
    unsigned int error : 1;
    /** Phase Sequence Error Occurred on Voltage Zero Crossings.*/
    unsigned int seqerr : 1;
    /** Phase A Voltage Zero Crossing Timeout Mask.*/
    unsigned int zxtoav : 1;
    /** Phase B Voltage Zero Crossing Timeout Mask.*/
    unsigned int zxtobv : 1;
    /** Phase C Voltage Zero Crossing Timeout Mask.*/
    unsigned int zxtocv : 1;
    /** Phase A Voltage Zero Crossing Detected Mask.*/
    unsigned int zxav : 1;
    /** Phase B Voltage Zero Crossing Detected Mask.*/
    unsigned int zxbv : 1;
    /** Phase C Voltage Zero Crossing Detected Mask.*/
    unsigned int zxcv : 1;
    /** Combined Voltage Channels Zero Crossing Detected Mask.*/
    unsigned int zxcomb : 1;
    /** Phase A Current Zero Crossing Detected Mask.*/
    unsigned int zxai : 1;
    /** Phase B Current Zero Crossing Detected Mask.*/
    unsigned int zxbi : 1;
    /** Phase C Current Zero Crossing Detected Mask.*/
    unsigned int zxci : 1;
    /** Auxiliary 0 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux0 : 1;
    /** Auxiliary 1 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux1 : 1;
    /** Auxiliary 2 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux2 : 1;
    /** Auxiliary 3 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux3 : 1;
    /** Auxiliary 4 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux4 : 1;
    /** Auxiliary 5 Channel Zero Crossing Detected Mask.*/
    unsigned int zxaux5 : 1;
} ADE9178_MET_MASK1;


typedef struct
{
    /** Phase A Voltage Dip Condition Detected.*/
    unsigned int avdipone : 1;
    /** Phase A Current Dip Condition Detected.*/
    unsigned int aidipone : 1;
    /** Phase B Voltage Dip Condition Detected.*/
    unsigned int bvdipone : 1;
    /** Phase B Current Dip Condition Detected.*/
    unsigned int bidipone : 1;
    /** Phase C Voltage Dip Condition Detected.*/
    unsigned int cvdipone : 1;
    /** Phase C Current Dip Condition Detected.*/
    unsigned int cidipone : 1;
    /** Auxiliary 0 Channel Dip Condition Detected.*/
    unsigned int aux0dipone : 1;
    /** Auxiliary 1 Channel Dip Condition Detected.*/
    unsigned int aux1dipone : 1;
    /** Auxiliary 2 Channel Dip Condition Detected.*/
    unsigned int aux2dipone : 1;
    /** Auxiliary 3 Channel Dip Condition Detected.*/
    unsigned int aux3dipone : 1;
    /** Auxiliary 4 Channel Dip Condition Detected.*/
    unsigned int aux4dipone : 1;
    /** Auxiliary 5 Channel Dip Condition Detected.*/
    unsigned int aux5dipone : 1;
    /** Phase A Voltage Swell Condition Detected.*/
    unsigned int avswellone : 1;
    /** Phase A Current Swell Condition Detected.*/
    unsigned int aiswellone : 1;
    /** Phase B Voltage Swell Condition Detected.*/
    unsigned int bvswellone : 1;
    /** Phase B Current Swell Condition Detected.*/
    unsigned int biswellone : 1;
    /** Phase C Voltage Swell Condition Detected.*/
    unsigned int cvswellone : 1;
    /** Phase C Current Swell Condition Detected.*/
    unsigned int ciswellone : 1;
    /** Auxiliary 0 Channel Swell Condition Detected.*/
    unsigned int aux0swellone : 1;
    /** Auxiliary 1 Channel Swell Condition Detected.*/
    unsigned int aux1swellone : 1;
    /** Auxiliary 2 Channel Swell Condition Detected.*/
    unsigned int aux2swellone : 1;
    /** Auxiliary 3 Channel Swell Condition Detected.*/
    unsigned int aux3swellone : 1;
    /** Auxiliary 4 Channel Swell Condition Detected.*/
    unsigned int aux4swellone : 1;
    /** Auxiliary 5 Channel Swell Condition Detected.*/
    unsigned int aux5swellone : 1;
    /** VSUM Swell Condition Detected.*/
    unsigned int vsumswellone : 1;
    /** VP2P Dip Condition Detected.*/
    unsigned int vabdipone : 1;
    /** VP2P Dip Condition Detected.*/
    unsigned int vbcdipone : 1;
    /** VP2P Dip Condition Detected.*/
    unsigned int vacdipone : 1;
    /** VP2P Swell Condition Detected.*/
    unsigned int vabswellone : 1;
    /** VP2P Swell Condition Detected.*/
    unsigned int vbcswellone : 1;
    /** VP2P Swell Condition Detected.*/
    unsigned int vacswellone : 1;
} ADE9178_MET_MASK2;


typedef struct
{
    /** Phase A Voltage Dip Condition Detected.*/
    unsigned int avdiphalf : 1;
    /** Phase A Current Dip Condition Detected.*/
    unsigned int aidiphalf : 1;
    /** Phase B Voltage Dip Condition Detected.*/
    unsigned int bvdiphalf : 1;
    /** Phase B Current Dip Condition Detected.*/
    unsigned int bidiphalf : 1;
    /** Phase C Voltage Dip Condition Detected.*/
    unsigned int cvdiphalf : 1;
    /** Phase C Current Dip Condition Detected.*/
    unsigned int cidiphalf : 1;
    /** Auxiliary 0 Channel Dip Condition Detected.*/
    unsigned int aux0diphalf : 1;
    /** Auxiliary 1 Channel Dip Condition Detected.*/
    unsigned int aux1diphalf : 1;
    /** Auxiliary 2 Channel Dip Condition Detected.*/
    unsigned int aux2diphalf : 1;
    /** Auxiliary 3 Channel Dip Condition Detected.*/
    unsigned int aux3diphalf : 1;
    /** Auxiliary 4 Channel Dip Condition Detected.*/
    unsigned int aux4diphalf : 1;
    /** Auxiliary 5 Channel Dip Condition Detected.*/
    unsigned int aux5diphalf : 1;
    /** Phase A Voltage Swell Condition Detected.*/
    unsigned int avswellhalf : 1;
    /** Phase A Current Swell Condition Detected.*/
    unsigned int aiswellhalf : 1;
    /** Phase B Voltage Swell Condition Detected.*/
    unsigned int bvswellhalf : 1;
    /** Phase B Current Swell Condition Detected.*/
    unsigned int biswellhalf : 1;
    /** Phase C Voltage Swell Condition Detected.*/
    unsigned int cvswellhalf : 1;
    /** Phase C Current Swell Condition Detected.*/
    unsigned int ciswellhalf : 1;
    /** Auxiliary 0 Channel Swell Condition Detected.*/
    unsigned int aux0swellhalf : 1;
    /** Auxiliary 1 Channel Swell Condition Detected.*/
    unsigned int aux1swellhalf : 1;
    /** Auxiliary 2 Channel Swell Condition Detected.*/
    unsigned int aux2swellhalf : 1;
    /** Auxiliary 3 Channel Swell Condition Detected.*/
    unsigned int aux3swellhalf : 1;
    /** Auxiliary 4 Channel Swell Condition Detected.*/
    unsigned int aux4swellhalf : 1;
    /** Auxiliary 5 Channel Swell Condition Detected.*/
    unsigned int aux5swellhalf : 1;
} ADE9178_MET_MASK3;


typedef struct
{
    /** Adc Initialization Error Bit Mask.*/
    unsigned int adcInitError : 1;
    /** Error0 Bit Mask.*/
    unsigned int error0 : 1;
    /** Error1 Bit Mask.*/
    unsigned int error1 : 1;
    /** Error2 Bit Mask.*/
    unsigned int error2 : 1;
    /** Error3 Bit Mask.*/
    unsigned int error3 : 1;
    /** Error4 Bit Mask.*/
    unsigned int error4 : 1;
    /** ADC CRC Error Bit Mask.*/
    unsigned int adcCrcError : 1;
    /** Error5 Bit Mask.*/
    unsigned int error5 : 1;
    /** ADC Data Ready Frequency Error Bit Mask.*/
    unsigned int dreadyFreqError : 1;
    /** ADC0 STATUS0 Bit Mask*/
    unsigned int adc0Status0 : 1;
    /** ADC0 STATUS1 Bit Mask*/
    unsigned int adc0Status1 : 1;
    /** ADC0 STATUS2 Bit Mask*/
    unsigned int adc0Status2 : 1;
    /** ADC1 STATUS0 Bit Mask*/
    unsigned int adc1Status0 : 1;
    /** ADC1 STATUS1 Bit Mask*/
    unsigned int adc1Status1 : 1;
    /** ADC1 STATUS2 Bit Mask*/
    unsigned int adc1Status2 : 1;
    /** ADC2 STATUS0 Bit Mask*/
    unsigned int adc2Status0 : 1;
    /** ADC2 STATUS1 Bit Mask*/
    unsigned int adc2Status1 : 1;
    /** ADC2 STATUS2 Bit Mask*/
    unsigned int adc2Status2 : 1;
    /** ADC3 STATUS0 Bit Mask*/
    unsigned int adc3Status0 : 1;
    /** ADC3 STATUS1 Bit Mask*/
    unsigned int adc3Status1 : 1;
    /** ADC3 STATUS2 Bit Mask*/
    unsigned int adc3Status2 : 1;
    /** Error6 Bit Mask.*/
    unsigned int error6 : 1;
    /** Error7 Bit Mask.*/
    unsigned int error7 : 1;
} ADE9178_MET_ERROR_MASK;


#endif /* __ADE9178_BITFIELD_H__*/

/**
 * @}
 */
