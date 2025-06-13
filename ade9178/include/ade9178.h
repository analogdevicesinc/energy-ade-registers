/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

 /**
 * @file         ade9178.h
 * @addtogroup   ADE9178_HEADERS ADE9178 Headers
 * @brief        ADE9178 registers
 * @{
 */

#ifndef __ADE9178_H__
#define __ADE9178_H__

#define ADE9178_REG_AVGAIN                                           (0x0)           /**< Phase A Voltage Gain Adjust. */
#define ADE9178_REG_AVOS                                             (0x1)           /**< Phase A Voltage Channel Offset. */
#define ADE9178_REG_AVPHCAL                                          (0x2)           /**< Phase A Voltage Phase Correction Factor. */
#define ADE9178_REG_AVRMSOS                                          (0x3)           /**< Phase A Voltage RMS Offset. */
#define ADE9178_REG_AVRMSHALFOS                                      (0x4)           /**< Phase A Voltage Half Cycle RMS Offset. */
#define ADE9178_REG_AVRMSONEOS                                       (0x5)           /**< Phase A Voltage One Cycle RMS Offset. */
#define ADE9178_REG_AVDIPHALF_LVL                                    (0x6)           /**< Phase A Voltage RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AVDIPONE_LVL                                     (0x7)           /**< Phase A Voltage RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_AVSWELLHALF_LVL                                  (0x8)           /**< Phase A Voltage RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AVSWELLONE_LVL                                   (0x9)           /**< Phase A Voltage RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AVDIPHALF_CYC                                    (0xa)           /**< Phase A Voltage RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AVDIPONE_CYC                                     (0xb)           /**< Phase A Voltage RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AVSWELLHALF_CYC                                  (0xc)           /**< Phase A Voltage RMSHALF Swell Half Line Cycle Configuration */
#define ADE9178_REG_AVSWELLONE_CYC                                   (0xd)           /**< Phase A Voltage RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_AIGAIN                                           (0xe)           /**< Phase A Current Gain Adjust. */
#define ADE9178_REG_AIOS                                             (0xf)           /**< Phase A Current Channel Offset. */
#define ADE9178_REG_AIPHCAL                                          (0x10)          /**< Phase A Current Phase Correction Factor. */
#define ADE9178_REG_AIRMSOS                                          (0x11)          /**< Phase A Current RMS Offset. */
#define ADE9178_REG_AIRMSHALFOS                                      (0x12)          /**< Phase A Current Half Cycle RMS Offset. */
#define ADE9178_REG_AIRMSONEOS                                       (0x13)          /**< Phase A Current One Cycle RMS Offset. */
#define ADE9178_REG_AIDIPHALF_LVL                                    (0x14)          /**< Phase A Current RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AIDIPONE_LVL                                     (0x15)          /**< Phase A Current RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_AISWELLHALF_LVL                                  (0x16)          /**< Phase A Current RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AISWELLONE_LVL                                   (0x17)          /**< Phase A Current RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AIDIPHALF_CYC                                    (0x18)          /**< Phase A Current RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AIDIPONE_CYC                                     (0x19)          /**< Phase A Current RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AISWELLHALF_CYC                                  (0x1a)          /**< Phase A Current RMSHALF Swell Half Line Cycle Configuration */
#define ADE9178_REG_AISWELLONE_CYC                                   (0x1b)          /**< Phase A Current RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_BVGAIN                                           (0x1c)          /**< Phase B Voltage Gain Adjust. */
#define ADE9178_REG_BVOS                                             (0x1d)          /**< Phase B Voltage Channel Offset. */
#define ADE9178_REG_BVPHCAL                                          (0x1e)          /**< Phase B Voltage Phase Correction Factor. */
#define ADE9178_REG_BVRMSOS                                          (0x1f)          /**< Phase B Voltage RMS Offset. */
#define ADE9178_REG_BVRMSHALFOS                                      (0x20)          /**< Phase B Voltage Half Cycle RMS Offset. */
#define ADE9178_REG_BVRMSONEOS                                       (0x21)          /**< Phase B Voltage One Cycle RMS Offset. */
#define ADE9178_REG_BVDIPHALF_LVL                                    (0x22)          /**< Phase B Voltage RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_BVDIPONE_LVL                                     (0x23)          /**< Phase B Voltage RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_BVSWELLHALF_LVL                                  (0x24)          /**< Phase B Voltage RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_BVSWELLONE_LVL                                   (0x25)          /**< Phase B Voltage RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_BVDIPHALF_CYC                                    (0x26)          /**< Phase B Voltage RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_BVDIPONE_CYC                                     (0x27)          /**< Phase B Voltage RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_BVSWELLHALF_CYC                                  (0x28)          /**< Phase B Voltage RMSHALF Swell Half Line Cycle Configuration */
#define ADE9178_REG_BVSWELLONE_CYC                                   (0x29)          /**< Phase B Voltage RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_BIGAIN                                           (0x2a)          /**< Phase B Current Gain Adjust. */
#define ADE9178_REG_BIOS                                             (0x2b)          /**< Phase B Current Channel Offset. */
#define ADE9178_REG_BIPHCAL                                          (0x2c)          /**< Phase B Current Phase Correction Factor. */
#define ADE9178_REG_BIRMSOS                                          (0x2d)          /**< Phase B Current RMS Offset. */
#define ADE9178_REG_BIRMSHALFOS                                      (0x2e)          /**< Phase B Current Half Cycle RMS Offset. */
#define ADE9178_REG_BIRMSONEOS                                       (0x2f)          /**< Phase B Current One Cycle RMS Offset. */
#define ADE9178_REG_BIDIPHALF_LVL                                    (0x30)          /**< Phase B Current RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_BIDIPONE_LVL                                     (0x31)          /**< Phase B Current RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_BISWELLHALF_LVL                                  (0x32)          /**< Phase B Current RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_BISWELLONE_LVL                                   (0x33)          /**< Phase B Current RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_BIDIPHALF_CYC                                    (0x34)          /**< Phase B Current RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_BIDIPONE_CYC                                     (0x35)          /**< Phase B Current RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_BISWELLHALF_CYC                                  (0x36)          /**< Phase B Current RMSHALF Swell Half Line Cycle Configuration */
#define ADE9178_REG_BISWELLONE_CYC                                   (0x37)          /**< Phase B Current RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_CVGAIN                                           (0x38)          /**< Phase C Voltage Gain Adjust. */
#define ADE9178_REG_CVOS                                             (0x39)          /**< Phase C Voltage Channel Offset. */
#define ADE9178_REG_CVPHCAL                                          (0x3a)          /**< Phase C Voltage Phase Correction Factor. */
#define ADE9178_REG_CVRMSOS                                          (0x3b)          /**< Phase C Voltage RMS Offset. */
#define ADE9178_REG_CVRMSHALFOS                                      (0x3c)          /**< Phase C Voltage Half Cycle RMS Offset. */
#define ADE9178_REG_CVRMSONEOS                                       (0x3d)          /**< Phase C Voltage One Cycle RMS Offset. */
#define ADE9178_REG_CVDIPHALF_LVL                                    (0x3e)          /**< Phase C Voltage RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_CVDIPONE_LVL                                     (0x3f)          /**< Phase C Voltage RMSONE Dip Cycle Given in Line Cycles. */
#define ADE9178_REG_CVSWELLHALF_LVL                                  (0x40)          /**< Phase C Voltage RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_CVSWELLONE_LVL                                   (0x41)          /**< Phase C Voltage RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_CVDIPHALF_CYC                                    (0x42)          /**< Phase C Voltage RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_CVDIPONE_CYC                                     (0x43)          /**< Phase C Voltage RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_CVSWELLHALF_CYC                                  (0x44)          /**< Phase C Voltage RMSHALF Swell Half Line Cycle Configuration */
#define ADE9178_REG_CVSWELLONE_CYC                                   (0x45)          /**< Phase C Voltage RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_CIGAIN                                           (0x46)          /**< Phase C Current Gain Adjust. */
#define ADE9178_REG_CIOS                                             (0x47)          /**< Phase C Current Channel Offset. */
#define ADE9178_REG_CIPHCAL                                          (0x48)          /**< Phase C Current Phase Correction Factor. */
#define ADE9178_REG_CIRMSOS                                          (0x49)          /**< Phase C Current RMS Offset. */
#define ADE9178_REG_CIRMSHALFOS                                      (0x4a)          /**< Phase C Current Half Cycle RMS Offset. */
#define ADE9178_REG_CIRMSONEOS                                       (0x4b)          /**< Phase C Current One Cycle RMS Offset. */
#define ADE9178_REG_CIDIPHALF_LVL                                    (0x4c)          /**< Phase C Current RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_CIDIPONE_LVL                                     (0x4d)          /**< Phase C Current RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_CISWELLHALF_LVL                                  (0x4e)          /**< Phase C Current RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_CISWELLONE_LVL                                   (0x4f)          /**< Phase C Current RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_CIDIPHALF_CYC                                    (0x50)          /**< Phase C Current RMSHALF Dip Specified in Half Line Cycles. */
#define ADE9178_REG_CIDIPONE_CYC                                     (0x51)          /**< Phase C Current RMSONE Dip Specified in Line Cycles. */
#define ADE9178_REG_CISWELLHALF_CYC                                  (0x52)          /**< Phase C Current RMSHALF Swell Specified in Half Line Cycles. */
#define ADE9178_REG_CISWELLONE_CYC                                   (0x53)          /**< Phase C Current RMSONE Swell Specified in Line Cycles. */
#define ADE9178_REG_AUX0GAIN                                         (0x54)          /**< Auxiliary 0 Channel Gain Adjust. */
#define ADE9178_REG_AUX0OS                                           (0x55)          /**< Auxiliary 0 Channel Offset. */
#define ADE9178_REG_AUX0PHCAL                                        (0x56)          /**< Auxiliary 0 Channel Phase Correction Factor. */
#define ADE9178_REG_AUX0RMSOS                                        (0x57)          /**< Auxiliary 0 Channel RMS Offset. */
#define ADE9178_REG_AUX0RMSHALFOS                                    (0x58)          /**< Auxiliary 0 Half Cycle RMS Offset. */
#define ADE9178_REG_AUX0RMSONEOS                                     (0x59)          /**< Auxiliary 0 One Cycle RMS Offset. */
#define ADE9178_REG_AUX0DIPHALF_LVL                                  (0x5a)          /**< Auxiliary 0 Channel RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AUX0DIPONE_LVL                                   (0x5b)          /**< Auxiliary 0 Channel RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_AUX0SWELLHALF_LVL                                (0x5c)          /**< Auxiliary 0 Channel RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AUX0SWELLONE_LVL                                 (0x5d)          /**< Auxiliary 0 Channel RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AUX0DIPHALF_CYC                                  (0x5e)          /**< Auxiliary 0 RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AUX0DIPONE_CYC                                   (0x5f)          /**< Auxiliary 0 RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AUX0SWELLHALF_CYC                                (0x60)          /**< Auxiliary 0 RMSHALF Swell Half Line Cycles Configuration. */
#define ADE9178_REG_AUX0SWELLONE_CYC                                 (0x61)          /**< Auxiliary 0 RMSHALF Swell Line Cycles Configuration. */
#define ADE9178_REG_AUX1GAIN                                         (0x62)          /**< Auxiliary 1 Channel Gain Adjust. */
#define ADE9178_REG_AUX1OS                                           (0x63)          /**< Auxiliary 1 Channel Offset. */
#define ADE9178_REG_AUX1PHCAL                                        (0x64)          /**< Auxiliary 1 Channel Phase Correction Factor. */
#define ADE9178_REG_AUX1RMSOS                                        (0x65)          /**< Auxiliary 1 Channel Filtered RMS Offset. */
#define ADE9178_REG_AUX1RMSHALFOS                                    (0x66)          /**< Auxiliary 1 Channel Half Cycle RMS Offset. */
#define ADE9178_REG_AUX1RMSONEOS                                     (0x67)          /**< Auxiliary 1 Channel One Cycle RMS Offset. */
#define ADE9178_REG_AUX1DIPHALF_LVL                                  (0x68)          /**< Auxiliary 1 Channel RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AUX1DIPONE_LVL                                   (0x69)          /**< Auxiliary 1 Channel RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_AUX1SWELLHALF_LVL                                (0x6a)          /**< Auxiliary 1 Channel RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AUX1SWELLONE_LVL                                 (0x6b)          /**< Auxiliary 1 Channel RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AUX1DIPHALF_CYC                                  (0x6c)          /**< Auxiliary 1 RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AUX1DIPONE_CYC                                   (0x6d)          /**< Auxiliary 1 RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AUX1SWELLHALF_CYC                                (0x6e)          /**< Auxiliary 1 RMSHALF Swell Half Line Cycles Configuration. */
#define ADE9178_REG_AUX1SWELLONE_CYC                                 (0x6f)          /**< Auxiliary 1 RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_AUX2GAIN                                         (0x70)          /**< Auxiliary 2 Channel Gain Adjust. */
#define ADE9178_REG_AUX2OS                                           (0x71)          /**< Auxiliary 2 Channel Offset. */
#define ADE9178_REG_AUX2PHCAL                                        (0x72)          /**< Auxiliary 2 Channel Phase Correction Factor. */
#define ADE9178_REG_AUX2RMSOS                                        (0x73)          /**< Auxiliary 2 Channel Filtered RMS Offset. */
#define ADE9178_REG_AUX2RMSHALFOS                                    (0x74)          /**< Auxiliary 2 Channel Half Cycle RMS Offset. */
#define ADE9178_REG_AUX2RMSONEOS                                     (0x75)          /**< Auxiliary 2 Channel One Cycle RMS Offset. */
#define ADE9178_REG_AUX2DIPHALF_LVL                                  (0x76)          /**< Auxiliary 2 Channel RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AUX2DIPONE_LVL                                   (0x77)          /**< Auxiliary 2 Channel RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_AUX2SWELLHALF_LVL                                (0x78)          /**< Auxiliary 2 Channel RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AUX2SWELLONE_LVL                                 (0x79)          /**< Auxiliary 2 Channel RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AUX2DIPHALF_CYC                                  (0x7a)          /**< Auxiliary 2 RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AUX2DIPONE_CYC                                   (0x7b)          /**< Auxiliary 2 RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AUX2SWELLHALF_CYC                                (0x7c)          /**< Auxiliary 2 RMSHALF Swell Half Line Cycles Configuration. */
#define ADE9178_REG_AUX2SWELLONE_CYC                                 (0x7d)          /**< Auxiliary 2 RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_AUX3GAIN                                         (0x7e)          /**< Auxiliary 3 Channel Gain Adjust. */
#define ADE9178_REG_AUX3OS                                           (0x7f)          /**< Auxiliary 3 Channel Offset. */
#define ADE9178_REG_AUX3PHCAL                                        (0x80)          /**< Auxiliary 3 Channel Phase Correction Factor. */
#define ADE9178_REG_AUX3RMSOS                                        (0x81)          /**< Auxiliary 3 Channel Filtered RMS Offset. */
#define ADE9178_REG_AUX3RMSHALFOS                                    (0x82)          /**< Auxiliary 3 Channel Half Cycle RMS Offset. */
#define ADE9178_REG_AUX3RMSONEOS                                     (0x83)          /**< Auxiliary 3 Channel One Cycle RMS Offset. */
#define ADE9178_REG_AUX3DIPHALF_LVL                                  (0x84)          /**< Auxiliary 3 Channel RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AUX3DIPONE_LVL                                   (0x85)          /**< Auxiliary 3 Channel RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_AUX3SWELLHALF_LVL                                (0x86)          /**< Auxiliary 3 Channel RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AUX3SWELLONE_LVL                                 (0x87)          /**< Auxiliary 3 Channel RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AUX3DIPHALF_CYC                                  (0x88)          /**< Auxiliary 3 RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AUX3DIPONE_CYC                                   (0x89)          /**< Auxiliary 3 RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AUX3SWELLHALF_CYC                                (0x8a)          /**< Auxiliary 3 RMSHALF Swell Half Line Cycles Configuration. */
#define ADE9178_REG_AUX3SWELLONE_CYC                                 (0x8b)          /**< Auxiliary 3 RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_AUX4GAIN                                         (0x8c)          /**< Auxiliary 4 Channel Gain Adjust. */
#define ADE9178_REG_AUX4OS                                           (0x8d)          /**< Auxiliary 4 Channel Offset. */
#define ADE9178_REG_AUX4PHCAL                                        (0x8e)          /**< Auxiliary 4 Channel Phase Correction Factor. */
#define ADE9178_REG_AUX4RMSOS                                        (0x8f)          /**< Auxiliary 4 Channel Filtered RMS Offset. */
#define ADE9178_REG_AUX4RMSHALFOS                                    (0x90)          /**< Auxiliary 4 Channel Half Cycle RMS Offset. */
#define ADE9178_REG_AUX4RMSONEOS                                     (0x91)          /**< Auxiliary 4 Channel One Cycle RMS Offset. */
#define ADE9178_REG_AUX4DIPHALF_LVL                                  (0x92)          /**< Auxiliary 4 Channel RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AUX4DIPONE_LVL                                   (0x93)          /**< Auxiliary 4 Channel RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_AUX4SWELLHALF_LVL                                (0x94)          /**< Auxiliary 4 Channel RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AUX4SWELLONE_LVL                                 (0x95)          /**< Auxiliary 4 Channel RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AUX4DIPHALF_CYC                                  (0x96)          /**< Auxiliary 4 RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AUX4DIPONE_CYC                                   (0x97)          /**< Auxiliary 4 RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AUX4SWELLHALF_CYC                                (0x98)          /**< Auxiliary 4 RMSHALF Swell Half Line Cycles Configuration. */
#define ADE9178_REG_AUX4SWELLONE_CYC                                 (0x99)          /**< Auxiliary 4 RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_AUX5GAIN                                         (0x9a)          /**< Auxiliary 5 Channel Gain Adjust. */
#define ADE9178_REG_AUX5OS                                           (0x9b)          /**< Auxiliary 5 Channel Offset. */
#define ADE9178_REG_AUX5PHCAL                                        (0x9c)          /**< Auxiliary 5 Channel Phase Correction Factor. */
#define ADE9178_REG_AUX5RMSOS                                        (0x9d)          /**< Auxiliary 5 Channel Filtered RMS Offset. */
#define ADE9178_REG_AUX5RMSHALFOS                                    (0x9e)          /**< Auxiliary 5 Channel Half Cycle RMS Offset. */
#define ADE9178_REG_AUX5RMSONEOS                                     (0x9f)          /**< Auxiliary 5 Channel One Cycle RMS Offset. */
#define ADE9178_REG_AUX5DIPHALF_LVL                                  (0xa0)          /**< Auxiliary 5 Channel RMSHALF Dip Detection Threshold Level. */
#define ADE9178_REG_AUX5DIPONE_LVL                                   (0xa1)          /**< Auxiliary 5 RMSONE Dip Specified in Line Cycles. */
#define ADE9178_REG_AUX5SWELLHALF_LVL                                (0xa2)          /**< Auxiliary 5 Channel RMSHALF Swell Detection Threshold Level. */
#define ADE9178_REG_AUX5SWELLONE_LVL                                 (0xa3)          /**< Auxiliary 5 Channel RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_AUX5DIPHALF_CYC                                  (0xa4)          /**< Auxiliary 5 RMSHALF Dip Half Line Cycles Configuration. */
#define ADE9178_REG_AUX5DIPONE_CYC                                   (0xa5)          /**< Auxiliary 5 RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_AUX5SWELLHALF_CYC                                (0xa6)          /**< Auxiliary 5 RMSHALF Swell Half Line Cycles Configuration. */
#define ADE9178_REG_AUX5SWELLONE_CYC                                 (0xa7)          /**< Auxiliary 5 RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_APGAIN                                           (0xa8)          /**< Phase A Power Gain Adjust. */
#define ADE9178_REG_AWATTOS                                          (0xa9)          /**< Phase A Total Active Power Offset Correction. */
#define ADE9178_REG_BPGAIN                                           (0xaa)          /**< Phase B Power Gain Adjust. */
#define ADE9178_REG_BWATTOS                                          (0xab)          /**< Phase B Total Active Power Offset Correction. */
#define ADE9178_REG_CPGAIN                                           (0xac)          /**< Phase C Power Gain Adjust. */
#define ADE9178_REG_CWATTOS                                          (0xad)          /**< Phase C Total Active Power Offset Correction. */
#define ADE9178_REG_CONFIG0                                          (0xae)          /**< Configuration Register 0. */
  #define ADE9178_BITP_CONFIG0_SWRST                                 (0x0)           /**< Reserved. */
  #define ADE9178_BITL_CONFIG0_SWRST                                 (0x1)           /**< Reserved. */
  #define ADE9178_BITM_CONFIG0_SWRST                                 (0x1)           /**< Reserved. */
  #define ADE9178_BITP_CONFIG0_SELFREQ                               (0x1)           /**< Line Cycle Frequency Selection. */
  #define ADE9178_BITL_CONFIG0_SELFREQ                               (0x1)           /**< Line Cycle Frequency Selection. */
  #define ADE9178_BITM_CONFIG0_SELFREQ                               (0x2)           /**< Line Cycle Frequency Selection. */
  #define ADE9178_BITP_CONFIG0_UPERIOD_SEL                           (0x2)           /**< User Line Period Enable. */
  #define ADE9178_BITL_CONFIG0_UPERIOD_SEL                           (0x1)           /**< User Line Period Enable. */
  #define ADE9178_BITM_CONFIG0_UPERIOD_SEL                           (0x4)           /**< User Line Period Enable. */
  #define ADE9178_BITP_CONFIG0_PERIOD_AVG_CFG                        (0x3)           /**< Period Averaging Configuration. */
  #define ADE9178_BITL_CONFIG0_PERIOD_AVG_CFG                        (0x2)           /**< Period Averaging Configuration. */
  #define ADE9178_BITM_CONFIG0_PERIOD_AVG_CFG                        (0x18)          /**< Period Averaging Configuration. */
  #define ADE9178_BITP_CONFIG0_HPFDIS                                (0x5)           /**< High Pass Filter Disable. */
  #define ADE9178_BITL_CONFIG0_HPFDIS                                (0x1)           /**< High Pass Filter Disable. */
  #define ADE9178_BITM_CONFIG0_HPFDIS                                (0x20)          /**< High Pass Filter Disable. */
  #define ADE9178_BITP_CONFIG0_HPF_CRN                               (0x6)           /**< High Pass Filter Corner Selection. */
  #define ADE9178_BITL_CONFIG0_HPF_CRN                               (0x3)           /**< High Pass Filter Corner Selection. */
  #define ADE9178_BITM_CONFIG0_HPF_CRN                               (0x1c0)         /**< High Pass Filter Corner Selection. */
  #define ADE9178_BITP_CONFIG0_DISAPLPF                              (0x9)           /**< Low Pass Filter Active Power Disable. */
  #define ADE9178_BITL_CONFIG0_DISAPLPF                              (0x1)           /**< Low Pass Filter Active Power Disable. */
  #define ADE9178_BITM_CONFIG0_DISAPLPF                              (0x200)         /**< Low Pass Filter Active Power Disable. */
  #define ADE9178_BITP_CONFIG0_RMSHALF_SRC_SEL                       (0xa)           /**< Fast RMSHALF Sample Source Select. */
  #define ADE9178_BITL_CONFIG0_RMSHALF_SRC_SEL                       (0x1)           /**< Fast RMSHALF Sample Source Select. */
  #define ADE9178_BITM_CONFIG0_RMSHALF_SRC_SEL                       (0x400)         /**< Fast RMSHALF Sample Source Select. */
  #define ADE9178_BITP_CONFIG0_RMSONE_SRC_SEL                        (0xb)           /**< RMSONE Sample Source Select. */
  #define ADE9178_BITL_CONFIG0_RMSONE_SRC_SEL                        (0x1)           /**< RMSONE Sample Source Select. */
  #define ADE9178_BITM_CONFIG0_RMSONE_SRC_SEL                        (0x800)         /**< RMSONE Sample Source Select. */
  #define ADE9178_BITP_CONFIG0_ZX_SRC_SEL                            (0xc)           /**< Zero Crossing Source Select. */
  #define ADE9178_BITL_CONFIG0_ZX_SRC_SEL                            (0x1)           /**< Zero Crossing Source Select. */
  #define ADE9178_BITM_CONFIG0_ZX_SRC_SEL                            (0x1000)        /**< Zero Crossing Source Select. */
  #define ADE9178_BITP_CONFIG0_VNOMA_EN                              (0xd)           /**< Nominal Phase Voltage RMS for Phase A Total Apparent Power. */
  #define ADE9178_BITL_CONFIG0_VNOMA_EN                              (0x1)           /**< Nominal Phase Voltage RMS for Phase A Total Apparent Power. */
  #define ADE9178_BITM_CONFIG0_VNOMA_EN                              (0x2000)        /**< Nominal Phase Voltage RMS for Phase A Total Apparent Power. */
  #define ADE9178_BITP_CONFIG0_VNOMB_EN                              (0xe)           /**< Nominal Phase Voltage RMS for Phase B Total Apparent Power. */
  #define ADE9178_BITL_CONFIG0_VNOMB_EN                              (0x1)           /**< Nominal Phase Voltage RMS for Phase B Total Apparent Power. */
  #define ADE9178_BITM_CONFIG0_VNOMB_EN                              (0x4000)        /**< Nominal Phase Voltage RMS for Phase B Total Apparent Power. */
  #define ADE9178_BITP_CONFIG0_VNOMC_EN                              (0xf)           /**< Nominal Phase Voltage RMS for Phase C Total Apparent Power. */
  #define ADE9178_BITL_CONFIG0_VNOMC_EN                              (0x1)           /**< Nominal Phase Voltage RMS for Phase C Total Apparent Power. */
  #define ADE9178_BITM_CONFIG0_VNOMC_EN                              (0x8000)        /**< Nominal Phase Voltage RMS for Phase C Total Apparent Power. */
  #define ADE9178_BITP_CONFIG0_PWR_SETTLE                            (0x10)          /**< Power Settling Time Selection. */
  #define ADE9178_BITL_CONFIG0_PWR_SETTLE                            (0x2)           /**< Power Settling Time Selection. */
  #define ADE9178_BITM_CONFIG0_PWR_SETTLE                            (0x30000)       /**< Power Settling Time Selection. */
  #define ADE9178_BITP_CONFIG0_DIP_SWELL_HALF_IRQ_MODE               (0x12)          /**< Dip and Swell Half Cycle Interrupt Mode Selection. */
  #define ADE9178_BITL_CONFIG0_DIP_SWELL_HALF_IRQ_MODE               (0x1)           /**< Dip and Swell Half Cycle Interrupt Mode Selection. */
  #define ADE9178_BITM_CONFIG0_DIP_SWELL_HALF_IRQ_MODE               (0x40000)       /**< Dip and Swell Half Cycle Interrupt Mode Selection. */
  #define ADE9178_BITP_CONFIG0_DIP_SWELL_ONE_IRQ_MODE                (0x13)          /**< Dip and Swell One Cycle Interrupt Mode Selection. */
  #define ADE9178_BITL_CONFIG0_DIP_SWELL_ONE_IRQ_MODE                (0x1)           /**< Dip and Swell One Cycle Interrupt Mode Selection. */
  #define ADE9178_BITM_CONFIG0_DIP_SWELL_ONE_IRQ_MODE                (0x80000)       /**< Dip and Swell One Cycle Interrupt Mode Selection. */
  #define ADE9178_BITP_CONFIG0_ISUM_CFG                              (0x14)          /**< ISUM Calculation Configuration. */
  #define ADE9178_BITL_CONFIG0_ISUM_CFG                              (0x2)           /**< ISUM Calculation Configuration. */
  #define ADE9178_BITM_CONFIG0_ISUM_CFG                              (0x300000)      /**< ISUM Calculation Configuration. */
  #define ADE9178_BITP_CONFIG0_ISUM_AUXSEL                           (0x16)          /**< Neutral Channel Selection Configuration for ISUM. */
  #define ADE9178_BITL_CONFIG0_ISUM_AUXSEL                           (0x3)           /**< Neutral Channel Selection Configuration for ISUM. */
  #define ADE9178_BITM_CONFIG0_ISUM_AUXSEL                           (0x1c00000)     /**< Neutral Channel Selection Configuration for ISUM. */
  #define ADE9178_BITP_CONFIG0_VCONSEL                               (0x19)          /**< Three-Wire and Four-Wire Hardware Configuration Selection. */
  #define ADE9178_BITL_CONFIG0_VCONSEL                               (0x3)           /**< Three-Wire and Four-Wire Hardware Configuration Selection. */
  #define ADE9178_BITM_CONFIG0_VCONSEL                               (0xe000000)     /**< Three-Wire and Four-Wire Hardware Configuration Selection. */
  #define ADE9178_BITP_CONFIG0_ICONSEL                               (0x1c)          /**< Phase B Current Calculation Selection. */
  #define ADE9178_BITL_CONFIG0_ICONSEL                               (0x1)           /**< Phase B Current Calculation Selection. */
  #define ADE9178_BITM_CONFIG0_ICONSEL                               (0x10000000)    /**< Phase B Current Calculation Selection. */
  #define ADE9178_BITP_CONFIG0_CRC_DIS                               (0x1d)          /**< Disable CRC Check. */
  #define ADE9178_BITL_CONFIG0_CRC_DIS                               (0x1)           /**< Disable CRC Check. */
  #define ADE9178_BITM_CONFIG0_CRC_DIS                               (0x20000000)    /**< Disable CRC Check. */
#define ADE9178_REG_PEAK_CONFIG                                      (0xaf)          /**< Peak Detection Configuration Register. */
  #define ADE9178_BITP_PEAK_CONFIG_VPEAKSEL                          (0x0)           /**< Peak Detection Phase Selection for Voltage Channels. */
  #define ADE9178_BITL_PEAK_CONFIG_VPEAKSEL                          (0x3)           /**< Peak Detection Phase Selection for Voltage Channels. */
  #define ADE9178_BITM_PEAK_CONFIG_VPEAKSEL                          (0x7)           /**< Peak Detection Phase Selection for Voltage Channels. */
  #define ADE9178_BITP_PEAK_CONFIG_IPEAKSEL                          (0x3)           /**< Peak Detection Phase Selection for Current Channels. */
  #define ADE9178_BITL_PEAK_CONFIG_IPEAKSEL                          (0x3)           /**< Peak Detection Phase Selection for Current Channels. */
  #define ADE9178_BITM_PEAK_CONFIG_IPEAKSEL                          (0x38)          /**< Peak Detection Phase Selection for Current Channels. */
  #define ADE9178_BITP_PEAK_CONFIG_AUXPEAKSEL                        (0x6)           /**< Peak Detection Phase Selection for Auxiliary Channels. */
  #define ADE9178_BITL_PEAK_CONFIG_AUXPEAKSEL                        (0x6)           /**< Peak Detection Phase Selection for Auxiliary Channels. */
  #define ADE9178_BITM_PEAK_CONFIG_AUXPEAKSEL                        (0xfc0)         /**< Peak Detection Phase Selection for Auxiliary Channels. */
#define ADE9178_REG_PEN_CONFIG                                       (0xb0)          /**< PEN Fault Channel Selection Configuration Register. */
  #define ADE9178_BITP_PEN_CONFIG_PEN_CHANSELA                       (0x0)           /**< Channel A Selection for PEN Fault Detection. */
  #define ADE9178_BITL_PEN_CONFIG_PEN_CHANSELA                       (0x4)           /**< Channel A Selection for PEN Fault Detection. */
  #define ADE9178_BITM_PEN_CONFIG_PEN_CHANSELA                       (0xf)           /**< Channel A Selection for PEN Fault Detection. */
  #define ADE9178_BITP_PEN_CONFIG_PEN_CHANSELB                       (0x4)           /**< Channel B Selection for PEN Fault Detection. */
  #define ADE9178_BITL_PEN_CONFIG_PEN_CHANSELB                       (0x4)           /**< Channel B Selection for PEN Fault Detection. */
  #define ADE9178_BITM_PEN_CONFIG_PEN_CHANSELB                       (0xf0)          /**< Channel B Selection for PEN Fault Detection. */
  #define ADE9178_BITP_PEN_CONFIG_PEN_CHANSELC                       (0x8)           /**< Channel C Selection for PEN Fault Detection. */
  #define ADE9178_BITL_PEN_CONFIG_PEN_CHANSELC                       (0x4)           /**< Channel C Selection for PEN Fault Detection. */
  #define ADE9178_BITM_PEN_CONFIG_PEN_CHANSELC                       (0xf00)         /**< Channel C Selection for PEN Fault Detection. */
  #define ADE9178_BITP_PEN_CONFIG_PEN_LP_SEL                         (0xc)           /**< Line Period Measurement Selection for PEN Channels. */
  #define ADE9178_BITL_PEN_CONFIG_PEN_LP_SEL                         (0x2)           /**< Line Period Measurement Selection for PEN Channels. */
  #define ADE9178_BITM_PEN_CONFIG_PEN_LP_SEL                         (0x3000)        /**< Line Period Measurement Selection for PEN Channels. */
#define ADE9178_REG_CF1_CONFIG                                       (0xb1)          /**< CF1 Configuration Register. */
  #define ADE9178_BITP_CF1_CONFIG_CFDIS                              (0x0)           /**< CF1 Output Disable. */
  #define ADE9178_BITL_CF1_CONFIG_CFDIS                              (0x1)           /**< CF1 Output Disable. */
  #define ADE9178_BITM_CF1_CONFIG_CFDIS                              (0x1)           /**< CF1 Output Disable. */
  #define ADE9178_BITP_CF1_CONFIG_PWRSEL                             (0x1)           /**< CF1 Energy Output Type. */
  #define ADE9178_BITL_CF1_CONFIG_PWRSEL                             (0x3)           /**< CF1 Energy Output Type. */
  #define ADE9178_BITM_CF1_CONFIG_PWRSEL                             (0xe)           /**< CF1 Energy Output Type. */
  #define ADE9178_BITP_CF1_CONFIG_PHASESEL                           (0x4)           /**< Phases to Include in CF1 Pulse Output. */
  #define ADE9178_BITL_CF1_CONFIG_PHASESEL                           (0x3)           /**< Phases to Include in CF1 Pulse Output. */
  #define ADE9178_BITM_CF1_CONFIG_PHASESEL                           (0x70)          /**< Phases to Include in CF1 Pulse Output. */
  #define ADE9178_BITP_CF1_CONFIG_ACCMODE                            (0x7)           /**< CF1 Accumulation Mode Configuration. */
  #define ADE9178_BITL_CF1_CONFIG_ACCMODE                            (0x2)           /**< CF1 Accumulation Mode Configuration. */
  #define ADE9178_BITM_CF1_CONFIG_ACCMODE                            (0x180)         /**< CF1 Accumulation Mode Configuration. */
  #define ADE9178_BITP_CF1_CONFIG_WIDTHSEL                           (0x9)           /**< CF1 Pulse Width Select. */
  #define ADE9178_BITL_CF1_CONFIG_WIDTHSEL                           (0x1)           /**< CF1 Pulse Width Select. */
  #define ADE9178_BITM_CF1_CONFIG_WIDTHSEL                           (0x200)         /**< CF1 Pulse Width Select. */
  #define ADE9178_BITP_CF1_CONFIG_ACC_CLEAR                          (0xa)           /**< Clear CF1 Accumulator. */
  #define ADE9178_BITL_CF1_CONFIG_ACC_CLEAR                          (0x1)           /**< Clear CF1 Accumulator. */
  #define ADE9178_BITM_CF1_CONFIG_ACC_CLEAR                          (0x400)         /**< Clear CF1 Accumulator. */
#define ADE9178_REG_CF2_CONFIG                                       (0xb2)          /**< CF2 Configuration Register. */
  #define ADE9178_BITP_CF2_CONFIG_CFDIS                              (0x0)           /**< CF2 Output Disable. */
  #define ADE9178_BITL_CF2_CONFIG_CFDIS                              (0x1)           /**< CF2 Output Disable. */
  #define ADE9178_BITM_CF2_CONFIG_CFDIS                              (0x1)           /**< CF2 Output Disable. */
  #define ADE9178_BITP_CF2_CONFIG_PWRSEL                             (0x1)           /**< CF2 Energy Output Type. */
  #define ADE9178_BITL_CF2_CONFIG_PWRSEL                             (0x3)           /**< CF2 Energy Output Type. */
  #define ADE9178_BITM_CF2_CONFIG_PWRSEL                             (0xe)           /**< CF2 Energy Output Type. */
  #define ADE9178_BITP_CF2_CONFIG_PHASESEL                           (0x4)           /**< Phases to Include in CF2 Pulse Output. */
  #define ADE9178_BITL_CF2_CONFIG_PHASESEL                           (0x3)           /**< Phases to Include in CF2 Pulse Output. */
  #define ADE9178_BITM_CF2_CONFIG_PHASESEL                           (0x70)          /**< Phases to Include in CF2 Pulse Output. */
  #define ADE9178_BITP_CF2_CONFIG_ACCMODE                            (0x7)           /**< CF2 Accumulation Mode Configuration. */
  #define ADE9178_BITL_CF2_CONFIG_ACCMODE                            (0x2)           /**< CF2 Accumulation Mode Configuration. */
  #define ADE9178_BITM_CF2_CONFIG_ACCMODE                            (0x180)         /**< CF2 Accumulation Mode Configuration. */
  #define ADE9178_BITP_CF2_CONFIG_WIDTHSEL                           (0x9)           /**< CF2 Pulse Width Select. */
  #define ADE9178_BITL_CF2_CONFIG_WIDTHSEL                           (0x1)           /**< CF2 Pulse Width Select. */
  #define ADE9178_BITM_CF2_CONFIG_WIDTHSEL                           (0x200)         /**< CF2 Pulse Width Select. */
  #define ADE9178_BITP_CF2_CONFIG_ACC_CLEAR                          (0xa)           /**< Clear CF2 Accumulator. */
  #define ADE9178_BITL_CF2_CONFIG_ACC_CLEAR                          (0x1)           /**< Clear CF2 Accumulator. */
  #define ADE9178_BITM_CF2_CONFIG_ACC_CLEAR                          (0x400)         /**< Clear CF2 Accumulator. */
#define ADE9178_REG_ISUMRMSOS                                        (0xb3)          /**< Offset Correction for ISUMRMS Calculation. */
#define ADE9178_REG_ISUMLVL                                          (0xb4)          /**< Threshold to Compare ISUMRMS Against. */
#define ADE9178_REG_VNOM                                             (0xb5)          /**< Nominal Phase Voltage RMS. */
#define ADE9178_REG_USER_PERIOD                                      (0xb6)          /**< User Configured Line Period Value. */
#define ADE9178_REG_RMSHALF_CONFIG                                   (0xb7)          /**< RMSHALF Mode Selection Configuration. */
  #define ADE9178_BITP_RMSHALF_CONFIG_AV_RMSHALF_MODE_SEL            (0x0)           /**< AVRMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AV_RMSHALF_MODE_SEL            (0x1)           /**< AVRMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AV_RMSHALF_MODE_SEL            (0x1)           /**< AVRMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_AI_RMSHALF_MODE_SEL            (0x1)           /**< AIRMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AI_RMSHALF_MODE_SEL            (0x1)           /**< AIRMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AI_RMSHALF_MODE_SEL            (0x2)           /**< AIRMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_BV_RMSHALF_MODE_SEL            (0x2)           /**< BVRMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_BV_RMSHALF_MODE_SEL            (0x1)           /**< BVRMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_BV_RMSHALF_MODE_SEL            (0x4)           /**< BVRMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_BI_RMSHALF_MODE_SEL            (0x3)           /**< BIRMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_BI_RMSHALF_MODE_SEL            (0x1)           /**< BIRMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_BI_RMSHALF_MODE_SEL            (0x8)           /**< BIRMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_CV_RMSHALF_MODE_SEL            (0x4)           /**< CVRMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_CV_RMSHALF_MODE_SEL            (0x1)           /**< CVRMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_CV_RMSHALF_MODE_SEL            (0x10)          /**< CVRMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_CI_RMSHALF_MODE_SEL            (0x5)           /**< CIRMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_CI_RMSHALF_MODE_SEL            (0x1)           /**< CIRMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_CI_RMSHALF_MODE_SEL            (0x20)          /**< CIRMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_AUX0_RMSHALF_MODE_SEL          (0x6)           /**< AUX0RMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AUX0_RMSHALF_MODE_SEL          (0x1)           /**< AUX0RMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AUX0_RMSHALF_MODE_SEL          (0x40)          /**< AUX0RMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_AUX1_RMSHALF_MODE_SEL          (0x7)           /**< AUX1RMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AUX1_RMSHALF_MODE_SEL          (0x1)           /**< AUX1RMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AUX1_RMSHALF_MODE_SEL          (0x80)          /**< AUX1RMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_AUX2_RMSHALF_MODE_SEL          (0x8)           /**< AUX2RMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AUX2_RMSHALF_MODE_SEL          (0x1)           /**< AUX2RMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AUX2_RMSHALF_MODE_SEL          (0x100)         /**< AUX2RMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_AUX3_RMSHALF_MODE_SEL          (0x9)           /**< AUX3RMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AUX3_RMSHALF_MODE_SEL          (0x1)           /**< AUX3RMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AUX3_RMSHALF_MODE_SEL          (0x200)         /**< AUX3RMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_AUX4_RMSHALF_MODE_SEL          (0xa)           /**< AUX4RMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AUX4_RMSHALF_MODE_SEL          (0x1)           /**< AUX4RMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AUX4_RMSHALF_MODE_SEL          (0x400)         /**< AUX4RMSHALF Mode Selection */
  #define ADE9178_BITP_RMSHALF_CONFIG_AUX5_RMSHALF_MODE_SEL          (0xb)           /**< AUX5RMSHALF Mode Selection */
  #define ADE9178_BITL_RMSHALF_CONFIG_AUX5_RMSHALF_MODE_SEL          (0x1)           /**< AUX5RMSHALF Mode Selection */
  #define ADE9178_BITM_RMSHALF_CONFIG_AUX5_RMSHALF_MODE_SEL          (0x800)         /**< AUX5RMSHALF Mode Selection */
#define ADE9178_REG_USER_PERIOD_HALF                                 (0xb8)          /**< User Configured Half Line Cycle Period Value. */
#define ADE9178_REG_CF1_THR                                          (0xb9)          /**< Energy Threshold for CF1 Pulse Generation. */
#define ADE9178_REG_CF2_THR                                          (0xba)          /**< Energy Threshold for CF2 Pulse Generation. */
#define ADE9178_REG_ZXTOUT                                           (0xbb)          /**< Zero Crossing Timeout Configuration Register. */
#define ADE9178_REG_ZXTHRSH                                          (0xbc)          /**< Zero Crossing Threshold Register. */
#define ADE9178_REG_ZX_LP_SEL                                        (0xbd)          /**< Zero Crossing and Line Period Configuration. */
  #define ADE9178_BITP_ZX_LP_SEL_ZX_SEL                              (0x0)           /**< Zero Crossing Signal Selection. */
  #define ADE9178_BITL_ZX_LP_SEL_ZX_SEL                              (0x2)           /**< Zero Crossing Signal Selection. */
  #define ADE9178_BITM_ZX_LP_SEL_ZX_SEL                              (0x3)           /**< Zero Crossing Signal Selection. */
  #define ADE9178_BITP_ZX_LP_SEL_LP_SEL                              (0x2)           /**< Line Period Measurement Selection. */
  #define ADE9178_BITL_ZX_LP_SEL_LP_SEL                              (0x2)           /**< Line Period Measurement Selection. */
  #define ADE9178_BITM_ZX_LP_SEL_LP_SEL                              (0xc)           /**< Line Period Measurement Selection. */
#define ADE9178_REG_SEQ_CYC                                          (0xbe)          /**< Line Cycles for Phase Sequence Error Detection. */
#define ADE9178_REG_ACT_NL_LVL                                       (0xbf)          /**< No Load Threshold in the Active Power Datapath. */
#define ADE9178_REG_APP_NL_LVL                                       (0xc0)          /**< No Load Threshold in the Apparent Power Datapath. */
#define ADE9178_REG_EP_CFG                                           (0xc1)          /**< Energy and Power Accumulation Configuration. */
  #define ADE9178_BITP_EP_CFG_EGY_PWR_EN                             (0x0)           /**< Energy Accumulators Enable. */
  #define ADE9178_BITL_EP_CFG_EGY_PWR_EN                             (0x1)           /**< Energy Accumulators Enable. */
  #define ADE9178_BITM_EP_CFG_EGY_PWR_EN                             (0x1)           /**< Energy Accumulators Enable. */
  #define ADE9178_BITP_EP_CFG_EGY_TMR_MODE                           (0x1)           /**< Energy Accumulation Mode. */
  #define ADE9178_BITL_EP_CFG_EGY_TMR_MODE                           (0x1)           /**< Energy Accumulation Mode. */
  #define ADE9178_BITM_EP_CFG_EGY_TMR_MODE                           (0x2)           /**< Energy Accumulation Mode. */
  #define ADE9178_BITP_EP_CFG_EGY_LD_ACCUM                           (0x2)           /**< Energy Register Update Mode. */
  #define ADE9178_BITL_EP_CFG_EGY_LD_ACCUM                           (0x1)           /**< Energy Register Update Mode. */
  #define ADE9178_BITM_EP_CFG_EGY_LD_ACCUM                           (0x4)           /**< Energy Register Update Mode. */
  #define ADE9178_BITP_EP_CFG_RD_RST_EN                              (0x3)           /**< Energy Register Reset on Read Enable. */
  #define ADE9178_BITL_EP_CFG_RD_RST_EN                              (0x1)           /**< Energy Register Reset on Read Enable. */
  #define ADE9178_BITM_EP_CFG_RD_RST_EN                              (0x8)           /**< Energy Register Reset on Read Enable. */
  #define ADE9178_BITP_EP_CFG_NOLOAD_TMR                             (0x4)           /**< No Load Condition Evaluation Window. */
  #define ADE9178_BITL_EP_CFG_NOLOAD_TMR                             (0x3)           /**< No Load Condition Evaluation Window. */
  #define ADE9178_BITM_EP_CFG_NOLOAD_TMR                             (0x70)          /**< No Load Condition Evaluation Window. */
#define ADE9178_REG_EGY_TIME                                         (0xc2)          /**< Energy Accumulation Update Time Configuration. */
#define ADE9178_REG_VSUMRMSONEOS                                     (0xc3)          /**< Offset Correction for VSUMRMS Calculation. */
#define ADE9178_REG_VSUMSWELLONE_LVL                                 (0xc4)          /**< VSUM RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_VSUMSWELLONE_CYC                                 (0xc5)          /**< VSUM RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_VABRMSONEOS                                      (0xc6)          /**< Offset Correction for VP2P (AV - BV) RMSONE Calculation. */
#define ADE9178_REG_VABDIPONE_LVL                                    (0xc7)          /**< VP2P (AV - BV) RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_VABDIPONE_CYC                                    (0xc8)          /**< VP2P (AV - BV) RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_VABSWELLONE_LVL                                  (0xc9)          /**< VP2P (AV - BV) RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_VABSWELLONE_CYC                                  (0xca)          /**< VP2P (AV - BV) RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_VBCRMSONEOS                                      (0xcb)          /**< Offset Correction for VP2P (BV - CV) RMSONE Calculation. */
#define ADE9178_REG_VBCDIPONE_LVL                                    (0xcc)          /**< VP2P (BV - CV) RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_VBCDIPONE_CYC                                    (0xcd)          /**< VP2P (BV - CV) RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_VBCSWELLONE_LVL                                  (0xce)          /**< VP2P (BV - CV) RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_VBCSWELLONE_CYC                                  (0xcf)          /**< VP2P (BV - CV) RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_VACRMSONEOS                                      (0xd0)          /**< Offset Correction for VP2P (AV - CV) RMSONE Calculation. */
#define ADE9178_REG_VACDIPONE_LVL                                    (0xd1)          /**< VP2P (AV - CV) RMSONE Dip Detection Threshold Level. */
#define ADE9178_REG_VACDIPONE_CYC                                    (0xd2)          /**< VP2P (AV - CV) RMSONE Dip Line Cycles Configuration. */
#define ADE9178_REG_VACSWELLONE_LVL                                  (0xd3)          /**< VP2P (AV - CV) RMSONE Swell Detection Threshold Level. */
#define ADE9178_REG_VACSWELLONE_CYC                                  (0xd4)          /**< VP2P (AV - CV) RMSONE Swell Line Cycles Configuration. */
#define ADE9178_REG_CF_LTMR                                          (0xd5)          /**< CF Calibration Pulse Width Configuration Register. */
#define ADE9178_REG_WFS_CONFIG                                       (0xd6)          /**< Waveform Streaming Configuration Register. */
  #define ADE9178_BITP_WFS_CONFIG_WFS_EN                             (0x0)           /**< Enable Waveform Streaming */
  #define ADE9178_BITL_WFS_CONFIG_WFS_EN                             (0x1)           /**< Enable Waveform Streaming */
  #define ADE9178_BITM_WFS_CONFIG_WFS_EN                             (0x1)           /**< Enable Waveform Streaming */
  #define ADE9178_BITP_WFS_CONFIG_BAUD_RATE                          (0x1)           /**< Baud Rate for Waveform Streaming */
  #define ADE9178_BITL_WFS_CONFIG_BAUD_RATE                          (0x4)           /**< Baud Rate for Waveform Streaming */
  #define ADE9178_BITM_WFS_CONFIG_BAUD_RATE                          (0x1e)          /**< Baud Rate for Waveform Streaming */
  #define ADE9178_BITP_WFS_CONFIG_WF_SRC                             (0x5)           /**< Waveform Samples to Send */
  #define ADE9178_BITL_WFS_CONFIG_WF_SRC                             (0x2)           /**< Waveform Samples to Send */
  #define ADE9178_BITM_WFS_CONFIG_WF_SRC                             (0x60)          /**< Waveform Samples to Send */
  #define ADE9178_BITP_WFS_CONFIG_AV_WFS_EN                          (0x7)           /**< Set to Enable Phase A Voltage Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AV_WFS_EN                          (0x1)           /**< Set to Enable Phase A Voltage Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AV_WFS_EN                          (0x80)          /**< Set to Enable Phase A Voltage Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_AI_WFS_EN                          (0x8)           /**< Set to Enable Phase A Current Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AI_WFS_EN                          (0x1)           /**< Set to Enable Phase A Current Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AI_WFS_EN                          (0x100)         /**< Set to Enable Phase A Current Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_BV_WFS_EN                          (0x9)           /**< Set to Enable Phase B Voltage Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_BV_WFS_EN                          (0x1)           /**< Set to Enable Phase B Voltage Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_BV_WFS_EN                          (0x200)         /**< Set to Enable Phase B Voltage Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_BI_WFS_EN                          (0xa)           /**< Set to Enable Phase B Current Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_BI_WFS_EN                          (0x1)           /**< Set to Enable Phase B Current Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_BI_WFS_EN                          (0x400)         /**< Set to Enable Phase B Current Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_CV_WFS_EN                          (0xb)           /**< Set to Enable Phase C Voltage Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_CV_WFS_EN                          (0x1)           /**< Set to Enable Phase C Voltage Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_CV_WFS_EN                          (0x800)         /**< Set to Enable Phase C Voltage Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_CI_WFS_EN                          (0xc)           /**< Set to Enable Phase C Current Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_CI_WFS_EN                          (0x1)           /**< Set to Enable Phase C Current Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_CI_WFS_EN                          (0x1000)        /**< Set to Enable Phase C Current Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_AUX0_WFS_EN                        (0xd)           /**< Set to Enable Auxiliary 0 Channel Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AUX0_WFS_EN                        (0x1)           /**< Set to Enable Auxiliary 0 Channel Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AUX0_WFS_EN                        (0x2000)        /**< Set to Enable Auxiliary 0 Channel Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_AUX1_WFS_EN                        (0xe)           /**< Set to Enable Auxiliary 1 Channel Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AUX1_WFS_EN                        (0x1)           /**< Set to Enable Auxiliary 1 Channel Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AUX1_WFS_EN                        (0x4000)        /**< Set to Enable Auxiliary 1 Channel Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_AUX2_WFS_EN                        (0xf)           /**< Set to Enable Auxiliary 2 Channel Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AUX2_WFS_EN                        (0x1)           /**< Set to Enable Auxiliary 2 Channel Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AUX2_WFS_EN                        (0x8000)        /**< Set to Enable Auxiliary 2 Channel Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_AUX3_WFS_EN                        (0x10)          /**< Set to Enable Auxiliary 3 Channel Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AUX3_WFS_EN                        (0x1)           /**< Set to Enable Auxiliary 3 Channel Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AUX3_WFS_EN                        (0x10000)       /**< Set to Enable Auxiliary 3 Channel Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_AUX4_WFS_EN                        (0x11)          /**< Set to Enable Auxiliary 4 Channel Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AUX4_WFS_EN                        (0x1)           /**< Set to Enable Auxiliary 4 Channel Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AUX4_WFS_EN                        (0x20000)       /**< Set to Enable Auxiliary 4 Channel Waveform Streaming. */
  #define ADE9178_BITP_WFS_CONFIG_AUX5_WFS_EN                        (0x12)          /**< Set to Enable Auxiliary 5 Channel Waveform Streaming. */
  #define ADE9178_BITL_WFS_CONFIG_AUX5_WFS_EN                        (0x1)           /**< Set to Enable Auxiliary 5 Channel Waveform Streaming. */
  #define ADE9178_BITM_WFS_CONFIG_AUX5_WFS_EN                        (0x40000)       /**< Set to Enable Auxiliary 5 Channel Waveform Streaming. */
#define ADE9178_REG_ADC_CONTROL                                      (0xd7)          /**< ADC Control Register */
  #define ADE9178_BITP_ADC_CONTROL_ADC_RUN                           (0x0)           /**< Set This Bit to Start the Measurements. */
  #define ADE9178_BITL_ADC_CONTROL_ADC_RUN                           (0x1)           /**< Set This Bit to Start the Measurements. */
  #define ADE9178_BITM_ADC_CONTROL_ADC_RUN                           (0x1)           /**< Set This Bit to Start the Measurements. */
  #define ADE9178_BITP_ADC_CONTROL_ADC_INIT                          (0x1)           /**< Set This Bit to Initialize the ADCs. */
  #define ADE9178_BITL_ADC_CONTROL_ADC_INIT                          (0x1)           /**< Set This Bit to Initialize the ADCs. */
  #define ADE9178_BITM_ADC_CONTROL_ADC_INIT                          (0x2)           /**< Set This Bit to Initialize the ADCs. */
  #define ADE9178_BITP_ADC_CONTROL_ADC_SYNC                          (0x2)           /**< Set This Bit to Synchronize the ADCs. */
  #define ADE9178_BITL_ADC_CONTROL_ADC_SYNC                          (0x1)           /**< Set This Bit to Synchronize the ADCs. */
  #define ADE9178_BITM_ADC_CONTROL_ADC_SYNC                          (0x4)           /**< Set This Bit to Synchronize the ADCs. */
#define ADE9178_REG_ADC_CONFIG                                       (0xd8)          /**< ADC Configuration Register. */
  #define ADE9178_BITP_ADC_CONFIG_NUM_ADC                            (0x0)           /**< Number of ADCs Daisy-chained in the System */
  #define ADE9178_BITL_ADC_CONFIG_NUM_ADC                            (0x3)           /**< Number of ADCs Daisy-chained in the System */
  #define ADE9178_BITM_ADC_CONFIG_NUM_ADC                            (0x7)           /**< Number of ADCs Daisy-chained in the System */
#define ADE9178_REG_ADC_REDIRECT0                                    (0xd9)          /**< ADC Datapath Redirection Register 0. */
  #define ADE9178_BITP_ADC_REDIRECT0_AV                              (0x0)           /**< ADC AV Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT0_AV                              (0x5)           /**< ADC AV Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT0_AV                              (0x1f)          /**< ADC AV Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT0_AI                              (0x5)           /**< ADC AI Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT0_AI                              (0x5)           /**< ADC AI Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT0_AI                              (0x3e0)         /**< ADC AI Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT0_BV                              (0xa)           /**< ADC BV Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT0_BV                              (0x5)           /**< ADC BV Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT0_BV                              (0x7c00)        /**< ADC BV Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT0_BI                              (0xf)           /**< ADC BI Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT0_BI                              (0x5)           /**< ADC BI Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT0_BI                              (0xf8000)       /**< ADC BI Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT0_CV                              (0x14)          /**< ADC CV Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT0_CV                              (0x5)           /**< ADC CV Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT0_CV                              (0x1f00000)     /**< ADC CV Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT0_CI                              (0x19)          /**< ADC CI Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT0_CI                              (0x5)           /**< ADC CI Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT0_CI                              (0x3e000000)    /**< ADC CI Channel Data Multiplexing. */
#define ADE9178_REG_ADC_REDIRECT1                                    (0xda)          /**< ADC Datapath Redirection Register 1. */
  #define ADE9178_BITP_ADC_REDIRECT1_AUX0                            (0x0)           /**< ADC AUX0 Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT1_AUX0                            (0x5)           /**< ADC AUX0 Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT1_AUX0                            (0x1f)          /**< ADC AUX0 Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT1_AUX1                            (0x5)           /**< ADC AUX1 Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT1_AUX1                            (0x5)           /**< ADC AUX1 Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT1_AUX1                            (0x3e0)         /**< ADC AUX1 Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT1_AUX2                            (0xa)           /**< ADC AUX2 Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT1_AUX2                            (0x5)           /**< ADC AUX2 Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT1_AUX2                            (0x7c00)        /**< ADC AUX2 Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT1_AUX3                            (0xf)           /**< ADC AUX3 Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT1_AUX3                            (0x5)           /**< ADC AUX3 Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT1_AUX3                            (0xf8000)       /**< ADC AUX3 Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT1_AUX4                            (0x14)          /**< ADC AUX4 Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT1_AUX4                            (0x5)           /**< ADC AUX4 Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT1_AUX4                            (0x1f00000)     /**< ADC AUX4 Channel Data Multiplexing. */
  #define ADE9178_BITP_ADC_REDIRECT1_AUX5                            (0x19)          /**< ADC AUX5 Channel Data Multiplexing. */
  #define ADE9178_BITL_ADC_REDIRECT1_AUX5                            (0x5)           /**< ADC AUX5 Channel Data Multiplexing. */
  #define ADE9178_BITM_ADC_REDIRECT1_AUX5                            (0x3e000000)    /**< ADC AUX5 Channel Data Multiplexing. */
#define ADE9178_REG_CRC_OPTEN                                        (0xdb)          /**< Configuration Registers CRC Selection. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_MASK0_EN                        (0x0)           /**< CRC MASK0 Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_MASK0_EN                        (0x1)           /**< CRC MASK0 Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_MASK0_EN                        (0x1)           /**< CRC MASK0 Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_MASK1_EN                        (0x1)           /**< CRC MASK1 Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_MASK1_EN                        (0x1)           /**< CRC MASK1 Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_MASK1_EN                        (0x2)           /**< CRC MASK1 Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_MASK2_EN                        (0x2)           /**< CRC MASK2 Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_MASK2_EN                        (0x1)           /**< CRC MASK2 Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_MASK2_EN                        (0x4)           /**< CRC MASK2 Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_MASK3_EN                        (0x3)           /**< CRC MASK3 Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_MASK3_EN                        (0x1)           /**< CRC MASK3 Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_MASK3_EN                        (0x8)           /**< CRC MASK3 Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_DIPHALF_LVL_EN                  (0x4)           /**< CRC DIPHALF_LVL Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_DIPHALF_LVL_EN                  (0x1)           /**< CRC DIPHALF_LVL Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_DIPHALF_LVL_EN                  (0x10)          /**< CRC DIPHALF_LVL Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_DIPHALF_CYC_EN                  (0x5)           /**< CRC DIPHALF_CYC Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_DIPHALF_CYC_EN                  (0x1)           /**< CRC DIPHALF_CYC Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_DIPHALF_CYC_EN                  (0x20)          /**< CRC DIPHALF_CYC Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_DIPONE_LVL_EN                   (0x6)           /**< CRC DIPONE_LVL Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_DIPONE_LVL_EN                   (0x1)           /**< CRC DIPONE_LVL Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_DIPONE_LVL_EN                   (0x40)          /**< CRC DIPONE_LVL Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_DIPONE_CYC_EN                   (0x7)           /**< CRC DIPONE_CYC Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_DIPONE_CYC_EN                   (0x1)           /**< CRC DIPONE_CYC Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_DIPONE_CYC_EN                   (0x80)          /**< CRC DIPONE_CYC Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_SWELLHALF_LVL_EN                (0x8)           /**< CRC SWELLHALF_LVL Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_SWELLHALF_LVL_EN                (0x1)           /**< CRC SWELLHALF_LVL Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_SWELLHALF_LVL_EN                (0x100)         /**< CRC SWELLHALF_LVL Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_SWELLHALF_CYC_EN                (0x9)           /**< CRC SWELLHALF_CYC Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_SWELLHALF_CYC_EN                (0x1)           /**< CRC SWELLHALF_CYC Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_SWELLHALF_CYC_EN                (0x200)         /**< CRC SWELLHALF_CYC Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_SWELLONE_LVL_EN                 (0xa)           /**< CRC SWELLONE_LVL Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_SWELLONE_LVL_EN                 (0x1)           /**< CRC SWELLONE_LVL Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_SWELLONE_LVL_EN                 (0x400)         /**< CRC SWELLONE_LVL Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_SWELLONE_CYC_EN                 (0xb)           /**< CRC SWELLONE_CYC Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_SWELLONE_CYC_EN                 (0x1)           /**< CRC SWELLONE_CYC Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_SWELLONE_CYC_EN                 (0x800)         /**< CRC SWELLONE_CYC Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_ACT_NL_LVL_EN                   (0xc)           /**< CRC ACT_NL_LVL Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_ACT_NL_LVL_EN                   (0x1)           /**< CRC ACT_NL_LVL Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_ACT_NL_LVL_EN                   (0x1000)        /**< CRC ACT_NL_LVL Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_APP_NL_LVL_EN                   (0xd)           /**< CRC APP_NL_LVL Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_APP_NL_LVL_EN                   (0x1)           /**< CRC APP_NL_LVL Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_APP_NL_LVL_EN                   (0x2000)        /**< CRC APP_NL_LVL Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_ZXTOUT_EN                       (0xe)           /**< CRC ZXTOUT_EN Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_ZXTOUT_EN                       (0x1)           /**< CRC ZXTOUT_EN Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_ZXTOUT_EN                       (0x4000)        /**< CRC ZXTOUT_EN Enable. */
  #define ADE9178_BITP_CRC_OPTEN_CRC_ZXLPSEL_EN                      (0xf)           /**< CRC ZXLPSEL Enable. */
  #define ADE9178_BITL_CRC_OPTEN_CRC_ZXLPSEL_EN                      (0x1)           /**< CRC ZXLPSEL Enable. */
  #define ADE9178_BITM_CRC_OPTEN_CRC_ZXLPSEL_EN                      (0x8000)        /**< CRC ZXLPSEL Enable. */
#define ADE9178_REG_CRC_FORCE                                        (0xdc)          /**< Force Configuration Registers CRC Update. */
  #define ADE9178_BITP_CRC_FORCE_CRC_FORCE_VAL                       (0x0)           /**< Force Configuration Registers CRC Update. */
  #define ADE9178_BITL_CRC_FORCE_CRC_FORCE_VAL                       (0x1)           /**< Force Configuration Registers CRC Update. */
  #define ADE9178_BITM_CRC_FORCE_CRC_FORCE_VAL                       (0x1)           /**< Force Configuration Registers CRC Update. */
#define ADE9178_REG_CONFIG_LOCK                                      (0xdd)          /**< Configuration Lock Register */
  #define ADE9178_BITP_CONFIG_LOCK_CONFIG_LOCK_VAL                   (0x0)           /**< Configuration Lock Register */
  #define ADE9178_BITL_CONFIG_LOCK_CONFIG_LOCK_VAL                   (0x1)           /**< Configuration Lock Register */
  #define ADE9178_BITM_CONFIG_LOCK_CONFIG_LOCK_VAL                   (0x1)           /**< Configuration Lock Register */
#define ADE9178_REG_AVRMS                                            (0x200)         /**< Phase A Filter Based Voltage RMS. */
#define ADE9178_REG_AVRMSHALF                                        (0x201)         /**< Phase A Voltage Channel Half Cycle RMS. */
#define ADE9178_REG_AVRMSONE                                         (0x202)         /**< Phase A Voltage Channel One Cycle RMS. */
#define ADE9178_REG_AVDIPHALF                                        (0x203)         /**< Phase A Voltage Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AVDIPONE                                         (0x204)         /**< Phase A Voltage Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AVSWELLHALF                                      (0x205)         /**< Phase A Voltage Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AVSWELLONE                                       (0x206)         /**< Phase A Voltage Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AIRMS                                            (0x207)         /**< Phase A Filter Based Current RMS. */
#define ADE9178_REG_AIRMSHALF                                        (0x208)         /**< Phase A Current Channel Half Cycle RMS. */
#define ADE9178_REG_AIRMSONE                                         (0x209)         /**< Phase A Current Channel One Cycle RMS. */
#define ADE9178_REG_AIDIPHALF                                        (0x20a)         /**< Phase A Current Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AIDIPONE                                         (0x20b)         /**< Phase A Current Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AISWELLHALF                                      (0x20c)         /**< Phase A Current Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AISWELLONE                                       (0x20d)         /**< Phase A Current Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_BVRMS                                            (0x20e)         /**< Phase B Filter Based Voltage RMS. */
#define ADE9178_REG_BVRMSHALF                                        (0x20f)         /**< Phase B Voltage Channel Half Cycle RMS. */
#define ADE9178_REG_BVRMSONE                                         (0x210)         /**< Phase B Voltage Channel One Cycle RMS. */
#define ADE9178_REG_BVDIPHALF                                        (0x211)         /**< Phase B Voltage Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_BVDIPONE                                         (0x212)         /**< Phase B Voltage Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_BVSWELLHALF                                      (0x213)         /**< Phase B Voltage Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_BVSWELLONE                                       (0x214)         /**< Phase B Voltage Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_BIRMS                                            (0x215)         /**< Phase B Filter Based Current RMS. */
#define ADE9178_REG_BIRMSHALF                                        (0x216)         /**< Phase B Current Channel Half Cycle RMS. */
#define ADE9178_REG_BIRMSONE                                         (0x217)         /**< Phase B Current Channel One Cycle RMS. */
#define ADE9178_REG_BIDIPHALF                                        (0x218)         /**< Phase B Current Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_BIDIPONE                                         (0x219)         /**< Phase B Current Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_BISWELLHALF                                      (0x21a)         /**< Phase B Current Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_BISWELLONE                                       (0x21b)         /**< Phase B Current Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_CVRMS                                            (0x21c)         /**< Phase C Filter Based Voltage RMS. */
#define ADE9178_REG_CVRMSHALF                                        (0x21d)         /**< Phase C Voltage Channel Half Cycle RMS. */
#define ADE9178_REG_CVRMSONE                                         (0x21e)         /**< Phase C Voltage Channel One Cycle RMS. */
#define ADE9178_REG_CVDIPHALF                                        (0x21f)         /**< Phase C Voltage Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_CVDIPONE                                         (0x220)         /**< Phase C Voltage Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_CVSWELLHALF                                      (0x221)         /**< Phase C Voltage Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_CVSWELLONE                                       (0x222)         /**< Phase C Voltage Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_CIRMS                                            (0x223)         /**< Phase C Filter Based Current RMS. */
#define ADE9178_REG_CIRMSHALF                                        (0x224)         /**< Phase C Current Channel Half Cycle RMS. */
#define ADE9178_REG_CIRMSONE                                         (0x225)         /**< Phase C Current Channel One Cycle RMS. */
#define ADE9178_REG_CIDIPHALF                                        (0x226)         /**< Phase C Current Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_CIDIPONE                                         (0x227)         /**< Phase C Current Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_CISWELLHALF                                      (0x228)         /**< Phase C Current Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_CISWELLONE                                       (0x229)         /**< Phase C Current Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AUX0RMS                                          (0x22a)         /**< Auxiliary 0 Filter Based RMS. */
#define ADE9178_REG_AUX0RMSHALF                                      (0x22b)         /**< Auxiliary 0 Channel Half Cycle RMS. */
#define ADE9178_REG_AUX0RMSONE                                       (0x22c)         /**< Auxiliary 0 Channel One Cycle RMS. */
#define ADE9178_REG_AUX0DIPHALF                                      (0x22d)         /**< Auxiliary 0 Channel Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AUX0DIPONE                                       (0x22e)         /**< Auxiliary 0 Channel Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AUX0SWELLHALF                                    (0x22f)         /**< Auxiliary 0 Channel Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AUX0SWELLONE                                     (0x230)         /**< Auxiliary 0 Channel Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AUX1RMS                                          (0x231)         /**< Auxiliary 1 Channel Filter Based RMS. */
#define ADE9178_REG_AUX1RMSHALF                                      (0x232)         /**< Auxiliary 1 Channel Half Cycle RMS. */
#define ADE9178_REG_AUX1RMSONE                                       (0x233)         /**< Auxiliary 1 Channel One Cycle RMS. */
#define ADE9178_REG_AUX1DIPHALF                                      (0x234)         /**< Auxiliary 1 Channel Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AUX1DIPONE                                       (0x235)         /**< Auxiliary 1 Channel Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AUX1SWELLHALF                                    (0x236)         /**< Auxiliary 1 Channel Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AUX1SWELLONE                                     (0x237)         /**< Auxiliary 1 Channel Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AUX2RMS                                          (0x238)         /**< Auxiliary 2 Channel Filter Based RMS. */
#define ADE9178_REG_AUX2RMSHALF                                      (0x239)         /**< Auxiliary 2 Channel Half Cycle RMS. */
#define ADE9178_REG_AUX2RMSONE                                       (0x23a)         /**< Auxiliary 2 Channel One Cycle RMS. */
#define ADE9178_REG_AUX2DIPHALF                                      (0x23b)         /**< Auxiliary 2 Channel Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AUX2DIPONE                                       (0x23c)         /**< Auxiliary 2 Channel Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AUX2SWELLHALF                                    (0x23d)         /**< Auxiliary 2 Channel Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AUX2SWELLONE                                     (0x23e)         /**< Auxiliary 2 Channel Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AUX3RMS                                          (0x23f)         /**< Auxiliary 3 Channel Filter Based RMS. */
#define ADE9178_REG_AUX3RMSHALF                                      (0x240)         /**< Auxiliary 3 Channel Half Cycle RMS. */
#define ADE9178_REG_AUX3RMSONE                                       (0x241)         /**< Auxiliary 3 Channel One Cycle RMS. */
#define ADE9178_REG_AUX3DIPHALF                                      (0x242)         /**< Auxiliary 3 Channel Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AUX3DIPONE                                       (0x243)         /**< Auxiliary 3 Channel Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AUX3SWELLHALF                                    (0x244)         /**< Auxiliary 3 Channel Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AUX3SWELLONE                                     (0x245)         /**< Auxiliary 3 Channel Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AUX4RMS                                          (0x246)         /**< Auxiliary 4 Channel Filter Based RMS. */
#define ADE9178_REG_AUX4RMSHALF                                      (0x247)         /**< Auxiliary 4 Channel Half Cycle RMS. */
#define ADE9178_REG_AUX4RMSONE                                       (0x248)         /**< Auxiliary 4 Channel One Cycle RMS. */
#define ADE9178_REG_AUX4DIPHALF                                      (0x249)         /**< Auxiliary 4 Channel Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AUX4DIPONE                                       (0x24a)         /**< Auxiliary 4 Channel Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AUX4SWELLHALF                                    (0x24b)         /**< Auxiliary 4 Channel Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AUX4SWELLONE                                     (0x24c)         /**< Auxiliary 4 Channel Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AUX5RMS                                          (0x24d)         /**< Auxiliary 5 Channel Filter Based RMS. */
#define ADE9178_REG_AUX5RMSHALF                                      (0x24e)         /**< Auxiliary 5 Channel Half Cycle RMS. */
#define ADE9178_REG_AUX5RMSONE                                       (0x24f)         /**< Auxiliary 5 Channel One Cycle RMS. */
#define ADE9178_REG_AUX5DIPHALF                                      (0x250)         /**< Auxiliary 5 Channel Minimum RMSHALF for Last Detected Dip. */
#define ADE9178_REG_AUX5DIPONE                                       (0x251)         /**< Auxiliary 5 Channel Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_AUX5SWELLHALF                                    (0x252)         /**< Auxiliary 5 Channel Maximum RMSHALF for Last Detected Swell. */
#define ADE9178_REG_AUX5SWELLONE                                     (0x253)         /**< Auxiliary 5 Channel Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_AWATT                                            (0x254)         /**< Phase A Low-pass Filtered Total Active Power. */
#define ADE9178_REG_AVA                                              (0x255)         /**< Phase A Total Apparent Power. */
#define ADE9178_REG_APF                                              (0x256)         /**< Phase A Power Factor. */
#define ADE9178_REG_AWATTHR_POS_LO                                   (0x257)         /**< Phase A Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITP_AWATTHR_POS_LO_AWATTHR_POS_LO_VAL             (0x0)           /**< Phase A Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITL_AWATTHR_POS_LO_AWATTHR_POS_LO_VAL             (0xd)           /**< Phase A Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITM_AWATTHR_POS_LO_AWATTHR_POS_LO_VAL             (0x1fff)        /**< Phase A Accumulated Positive Total Active Energy, LSB. */
#define ADE9178_REG_AWATTHR_POS_HI                                   (0x258)         /**< Phase A Accumulated Positive Total Active Energy, MSB. */
#define ADE9178_REG_AWATTHR_NEG_LO                                   (0x259)         /**< Phase A Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITP_AWATTHR_NEG_LO_AWATTHR_NEG_LO_VAL             (0x0)           /**< Phase A Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITL_AWATTHR_NEG_LO_AWATTHR_NEG_LO_VAL             (0xd)           /**< Phase A Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITM_AWATTHR_NEG_LO_AWATTHR_NEG_LO_VAL             (0x1fff)        /**< Phase A Accumulated Negative Total Active Energy, LSB. */
#define ADE9178_REG_AWATTHR_NEG_HI                                   (0x25a)         /**< Phase A Accumulated Negative Total Active Energy, MSB. */
#define ADE9178_REG_AWATTHR_SIGNED_LO                                (0x25b)         /**< Phase A Accumulated Signed Total Active Energy, LSB. */
  #define ADE9178_BITP_AWATTHR_SIGNED_LO_AWATTHR_SIGNED_LO_VAL       (0x0)           /**< Phase A Signed Accumulated Total Active Energy, LSB. */
  #define ADE9178_BITL_AWATTHR_SIGNED_LO_AWATTHR_SIGNED_LO_VAL       (0xd)           /**< Phase A Signed Accumulated Total Active Energy, LSB. */
  #define ADE9178_BITM_AWATTHR_SIGNED_LO_AWATTHR_SIGNED_LO_VAL       (0x1fff)        /**< Phase A Signed Accumulated Total Active Energy, LSB. */
#define ADE9178_REG_AWATTHR_SIGNED_HI                                (0x25c)         /**< Phase A Accumulated Signed Total Active Energy, MSB. */
#define ADE9178_REG_AVAHR_LO                                         (0x25d)         /**< Phase A Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITP_AVAHR_LO_AVAHR_LO_VAL                         (0x0)           /**< Phase A Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITL_AVAHR_LO_AVAHR_LO_VAL                         (0xd)           /**< Phase A Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITM_AVAHR_LO_AVAHR_LO_VAL                         (0x1fff)        /**< Phase A Accumulated Total Apparent Energy, LSB. */
#define ADE9178_REG_AVAHR_HI                                         (0x25e)         /**< Phase A Accumulated Total Apparent Energy, MSB. */
#define ADE9178_REG_BWATT                                            (0x25f)         /**< Phase B Low-pass Filtered Total Active Power. */
#define ADE9178_REG_BVA                                              (0x260)         /**< Phase B Total Apparent Power. */
#define ADE9178_REG_BPF                                              (0x261)         /**< Phase B Power Factor. */
#define ADE9178_REG_BWATTHR_POS_LO                                   (0x262)         /**< Phase B Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITP_BWATTHR_POS_LO_BWATTHR_POS_LO_VAL             (0x0)           /**< Phase B Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITL_BWATTHR_POS_LO_BWATTHR_POS_LO_VAL             (0xd)           /**< Phase B Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITM_BWATTHR_POS_LO_BWATTHR_POS_LO_VAL             (0x1fff)        /**< Phase B Accumulated Positive Total Active Energy, LSB. */
#define ADE9178_REG_BWATTHR_POS_HI                                   (0x263)         /**< Phase B Accumulated Positive Total Active Energy, MSB. */
#define ADE9178_REG_BWATTHR_NEG_LO                                   (0x264)         /**< Phase B Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITP_BWATTHR_NEG_LO_BWATTHR_NEG_LO_VAL             (0x0)           /**< Phase B Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITL_BWATTHR_NEG_LO_BWATTHR_NEG_LO_VAL             (0xd)           /**< Phase B Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITM_BWATTHR_NEG_LO_BWATTHR_NEG_LO_VAL             (0x1fff)        /**< Phase B Accumulated Negative Total Active Energy, LSB. */
#define ADE9178_REG_BWATTHR_NEG_HI                                   (0x265)         /**< Phase B Accumulated Negative Total Active Energy, MSB. */
#define ADE9178_REG_BWATTHR_SIGNED_LO                                (0x266)         /**< Phase B Accumulated Signed Total Active Energy, LSB. */
  #define ADE9178_BITP_BWATTHR_SIGNED_LO_BWATTHR_SIGNED_LO_VAL       (0x0)           /**< Phase B Signed Accumulated Total Active Energy, LSB. */
  #define ADE9178_BITL_BWATTHR_SIGNED_LO_BWATTHR_SIGNED_LO_VAL       (0xd)           /**< Phase B Signed Accumulated Total Active Energy, LSB. */
  #define ADE9178_BITM_BWATTHR_SIGNED_LO_BWATTHR_SIGNED_LO_VAL       (0x1fff)        /**< Phase B Signed Accumulated Total Active Energy, LSB. */
#define ADE9178_REG_BWATTHR_SIGNED_HI                                (0x267)         /**< Phase B Accumulated Signed Total Active Energy, MSB. */
#define ADE9178_REG_BVAHR_LO                                         (0x268)         /**< Phase B Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITP_BVAHR_LO_BVAHR_LO_VAL                         (0x0)           /**< Phase B Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITL_BVAHR_LO_BVAHR_LO_VAL                         (0xd)           /**< Phase B Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITM_BVAHR_LO_BVAHR_LO_VAL                         (0x1fff)        /**< Phase B Accumulated Total Apparent Energy, LSB. */
#define ADE9178_REG_BVAHR_HI                                         (0x269)         /**< Phase B Accumulated Total Apparent Energy, MSB. */
#define ADE9178_REG_CWATT                                            (0x26a)         /**< Phase C Low-pass Filtered Total Active Power. */
#define ADE9178_REG_CVA                                              (0x26b)         /**< Phase C Total Apparent Power. */
#define ADE9178_REG_CPF                                              (0x26c)         /**< Phase C Power Factor. */
#define ADE9178_REG_CWATTHR_POS_LO                                   (0x26d)         /**< Phase C Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITP_CWATTHR_POS_LO_CWATTHR_POS_LO_VAL             (0x0)           /**< Phase C Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITL_CWATTHR_POS_LO_CWATTHR_POS_LO_VAL             (0xd)           /**< Phase C Accumulated Positive Total Active Energy, LSB. */
  #define ADE9178_BITM_CWATTHR_POS_LO_CWATTHR_POS_LO_VAL             (0x1fff)        /**< Phase C Accumulated Positive Total Active Energy, LSB. */
#define ADE9178_REG_CWATTHR_POS_HI                                   (0x26e)         /**< Phase C Accumulated Positive Total Active Energy, MSB. */
#define ADE9178_REG_CWATTHR_NEG_LO                                   (0x26f)         /**< Phase C Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITP_CWATTHR_NEG_LO_CWATTHR_NEG_LO_VAL             (0x0)           /**< Phase C Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITL_CWATTHR_NEG_LO_CWATTHR_NEG_LO_VAL             (0xd)           /**< Phase C Accumulated Negative Total Active Energy, LSB. */
  #define ADE9178_BITM_CWATTHR_NEG_LO_CWATTHR_NEG_LO_VAL             (0x1fff)        /**< Phase C Accumulated Negative Total Active Energy, LSB. */
#define ADE9178_REG_CWATTHR_NEG_HI                                   (0x270)         /**< Phase C Accumulated Negative Total Active Energy, MSB. */
#define ADE9178_REG_CWATTHR_SIGNED_LO                                (0x271)         /**< Phase C Accumulated Signed Total Active Energy, LSB. */
  #define ADE9178_BITP_CWATTHR_SIGNED_LO_CWATTHR_SIGNED_LO_VAL       (0x0)           /**< Phase C Signed Accumulated Total Active Energy, LSB. */
  #define ADE9178_BITL_CWATTHR_SIGNED_LO_CWATTHR_SIGNED_LO_VAL       (0xd)           /**< Phase C Signed Accumulated Total Active Energy, LSB. */
  #define ADE9178_BITM_CWATTHR_SIGNED_LO_CWATTHR_SIGNED_LO_VAL       (0x1fff)        /**< Phase C Signed Accumulated Total Active Energy, LSB. */
#define ADE9178_REG_CWATTHR_SIGNED_HI                                (0x272)         /**< Phase C Accumulated Signed Total Active Energy, MSB. */
#define ADE9178_REG_CVAHR_LO                                         (0x273)         /**< Phase C Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITP_CVAHR_LO_CVAHR_LO_VAL                         (0x0)           /**< Phase C Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITL_CVAHR_LO_CVAHR_LO_VAL                         (0xd)           /**< Phase C Accumulated Total Apparent Energy, LSB. */
  #define ADE9178_BITM_CVAHR_LO_CVAHR_LO_VAL                         (0x1fff)        /**< Phase C Accumulated Total Apparent Energy, LSB. */
#define ADE9178_REG_CVAHR_HI                                         (0x274)         /**< Phase C Accumulated Total Apparent Energy, MSB. */
#define ADE9178_REG_ANGL_AV_BV                                       (0x275)         /**< Phase A Voltage to Phase B Voltage Angle Register. */
#define ADE9178_REG_ANGL_BV_CV                                       (0x276)         /**< Phase B Voltage to Phase C Voltage Angle Register. */
#define ADE9178_REG_ANGL_AV_CV                                       (0x277)         /**< Phase A Voltage to Phase C Voltage Angle Register. */
#define ADE9178_REG_ANGL_AV_AI                                       (0x278)         /**< Phase A Voltage to Current Angle Register. */
#define ADE9178_REG_ANGL_BV_BI                                       (0x279)         /**< Phase B Voltage to Current Angle Register. */
#define ADE9178_REG_ANGL_CV_CI                                       (0x27a)         /**< Phase C Voltage to Current Angle Register. */
#define ADE9178_REG_ANGL_AI_BI                                       (0x27b)         /**< Phase A Current to Phase B Current Angle Register. */
#define ADE9178_REG_ANGL_BI_CI                                       (0x27c)         /**< Phase B Current to Phase C Current Angle Register. */
#define ADE9178_REG_ANGL_AI_CI                                       (0x27d)         /**< Phase A Current to Phase C Current Angle Register. */
#define ADE9178_REG_ISUMRMS                                          (0x27e)         /**< Filter Based RMS Based on the Sum of Current Channels. */
#define ADE9178_REG_PEN_PERIOD                                       (0x280)         /**< Period Value Used for PEN Channels RMSONE Calculation. */
#define ADE9178_REG_APERIOD                                          (0x281)         /**< Line Period on Phase A Voltage. */
#define ADE9178_REG_BPERIOD                                          (0x282)         /**< Line Period on Phase B Voltage. */
#define ADE9178_REG_CPERIOD                                          (0x283)         /**< Line Period on Phase C Voltage. */
#define ADE9178_REG_COM_PERIOD                                       (0x284)         /**< Line Period on Combined Phase A, B, and C Voltages. */
#define ADE9178_REG_IPEAK                                            (0x285)         /**< Current Peak Register. */
  #define ADE9178_BITP_IPEAK_IPEAKVAL                                (0x0)           /**< Absolute Value of the Peak Current. */
  #define ADE9178_BITL_IPEAK_IPEAKVAL                                (0x18)          /**< Absolute Value of the Peak Current. */
  #define ADE9178_BITM_IPEAK_IPEAKVAL                                (0xffffff)      /**< Absolute Value of the Peak Current. */
  #define ADE9178_BITP_IPEAK_IPPHASE                                 (0x18)          /**< Current Channel Peak Phase. */
  #define ADE9178_BITL_IPEAK_IPPHASE                                 (0x3)           /**< Current Channel Peak Phase. */
  #define ADE9178_BITM_IPEAK_IPPHASE                                 (0x7000000)     /**< Current Channel Peak Phase. */
#define ADE9178_REG_VPEAK                                            (0x286)         /**< Voltage Peak Register. */
  #define ADE9178_BITP_VPEAK_VPEAKVAL                                (0x0)           /**< Absolute Value of the Peak Voltage. */
  #define ADE9178_BITL_VPEAK_VPEAKVAL                                (0x18)          /**< Absolute Value of the Peak Voltage. */
  #define ADE9178_BITM_VPEAK_VPEAKVAL                                (0xffffff)      /**< Absolute Value of the Peak Voltage. */
  #define ADE9178_BITP_VPEAK_VPPHASE                                 (0x18)          /**< Voltage Channel Peak Phase. */
  #define ADE9178_BITL_VPEAK_VPPHASE                                 (0x3)           /**< Voltage Channel Peak Phase. */
  #define ADE9178_BITM_VPEAK_VPPHASE                                 (0x7000000)     /**< Voltage Channel Peak Phase. */
#define ADE9178_REG_AUXPEAK                                          (0x287)         /**< Auxiliary Channels Peak Register. */
  #define ADE9178_BITP_AUXPEAK_AUXPEAKVAL                            (0x0)           /**< Absolute Peak Value of the Auxiliary Channels. */
  #define ADE9178_BITL_AUXPEAK_AUXPEAKVAL                            (0x18)          /**< Absolute Peak Value of the Auxiliary Channels. */
  #define ADE9178_BITM_AUXPEAK_AUXPEAKVAL                            (0xffffff)      /**< Absolute Peak Value of the Auxiliary Channels. */
  #define ADE9178_BITP_AUXPEAK_AUXPHASE                              (0x18)          /**< Auxiliary Channel Peak Phase. */
  #define ADE9178_BITL_AUXPEAK_AUXPHASE                              (0x6)           /**< Auxiliary Channel Peak Phase. */
  #define ADE9178_BITM_AUXPEAK_AUXPHASE                              (0x3f000000)    /**< Auxiliary Channel Peak Phase. */
#define ADE9178_REG_PHSIGN                                           (0x288)         /**< Power Sign Register. */
  #define ADE9178_BITP_PHSIGN_AWSIGN                                 (0x0)           /**< Phase A Active Power Sign Bit. */
  #define ADE9178_BITL_PHSIGN_AWSIGN                                 (0x1)           /**< Phase A Active Power Sign Bit. */
  #define ADE9178_BITM_PHSIGN_AWSIGN                                 (0x1)           /**< Phase A Active Power Sign Bit. */
  #define ADE9178_BITP_PHSIGN_BWSIGN                                 (0x1)           /**< Phase B Active Power Sign Bit. */
  #define ADE9178_BITL_PHSIGN_BWSIGN                                 (0x1)           /**< Phase B Active Power Sign Bit. */
  #define ADE9178_BITM_PHSIGN_BWSIGN                                 (0x2)           /**< Phase B Active Power Sign Bit. */
  #define ADE9178_BITP_PHSIGN_CWSIGN                                 (0x2)           /**< Phase C Active Power Sign Bit. */
  #define ADE9178_BITL_PHSIGN_CWSIGN                                 (0x1)           /**< Phase C Active Power Sign Bit. */
  #define ADE9178_BITM_PHSIGN_CWSIGN                                 (0x4)           /**< Phase C Active Power Sign Bit. */
  #define ADE9178_BITP_PHSIGN_SUM1SIGN                               (0x3)           /**< CF1 Last Sum Sign. */
  #define ADE9178_BITL_PHSIGN_SUM1SIGN                               (0x1)           /**< CF1 Last Sum Sign. */
  #define ADE9178_BITM_PHSIGN_SUM1SIGN                               (0x8)           /**< CF1 Last Sum Sign. */
  #define ADE9178_BITP_PHSIGN_SUM2SIGN                               (0x4)           /**< CF2 Last Sum Sign. */
  #define ADE9178_BITL_PHSIGN_SUM2SIGN                               (0x1)           /**< CF2 Last Sum Sign. */
  #define ADE9178_BITM_PHSIGN_SUM2SIGN                               (0x10)          /**< CF2 Last Sum Sign. */
#define ADE9178_REG_PHNOLOAD                                         (0x289)         /**< Phase No Load Register. */
  #define ADE9178_BITP_PHNOLOAD_AWATTNL                              (0x0)           /**< Phase A Total Active Energy No Load Status. */
  #define ADE9178_BITL_PHNOLOAD_AWATTNL                              (0x1)           /**< Phase A Total Active Energy No Load Status. */
  #define ADE9178_BITM_PHNOLOAD_AWATTNL                              (0x1)           /**< Phase A Total Active Energy No Load Status. */
  #define ADE9178_BITP_PHNOLOAD_AVANL                                (0x1)           /**< Phase A Total Apparent Energy No Load Status. */
  #define ADE9178_BITL_PHNOLOAD_AVANL                                (0x1)           /**< Phase A Total Apparent Energy No Load Status. */
  #define ADE9178_BITM_PHNOLOAD_AVANL                                (0x2)           /**< Phase A Total Apparent Energy No Load Status. */
  #define ADE9178_BITP_PHNOLOAD_BWATTNL                              (0x2)           /**< Phase B Total Active Energy No Load Status. */
  #define ADE9178_BITL_PHNOLOAD_BWATTNL                              (0x1)           /**< Phase B Total Active Energy No Load Status. */
  #define ADE9178_BITM_PHNOLOAD_BWATTNL                              (0x4)           /**< Phase B Total Active Energy No Load Status. */
  #define ADE9178_BITP_PHNOLOAD_BVANL                                (0x3)           /**< Phase B Total Apparent Energy No Load Status. */
  #define ADE9178_BITL_PHNOLOAD_BVANL                                (0x1)           /**< Phase B Total Apparent Energy No Load Status. */
  #define ADE9178_BITM_PHNOLOAD_BVANL                                (0x8)           /**< Phase B Total Apparent Energy No Load Status. */
  #define ADE9178_BITP_PHNOLOAD_CWATTNL                              (0x4)           /**< Phase C Total Active Energy No Load Status. */
  #define ADE9178_BITL_PHNOLOAD_CWATTNL                              (0x1)           /**< Phase C Total Active Energy No Load Status. */
  #define ADE9178_BITM_PHNOLOAD_CWATTNL                              (0x10)          /**< Phase C Total Active Energy No Load Status. */
  #define ADE9178_BITP_PHNOLOAD_CVANL                                (0x5)           /**< Phase C Total Apparent Energy No Load Status. */
  #define ADE9178_BITL_PHNOLOAD_CVANL                                (0x1)           /**< Phase C Total Apparent Energy No Load Status. */
  #define ADE9178_BITM_PHNOLOAD_CVANL                                (0x20)          /**< Phase C Total Apparent Energy No Load Status. */
#define ADE9178_REG_VSUMRMSONE                                       (0x28a)         /**< One Cycle RMS for PEN Fault. */
#define ADE9178_REG_VSUMSWELLONE                                     (0x28b)         /**< Maximum VSUMRMSONE for Last Detected Swell. */
#define ADE9178_REG_VABRMSONE                                        (0x28c)         /**< VP2P (AV - BV) One Cycle RMS. */
#define ADE9178_REG_VABDIPONE                                        (0x28d)         /**< VP2P (AV - BV) Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_VABSWELLONE                                      (0x28e)         /**< VP2P (AV - BV) Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_VBCRMSONE                                        (0x28f)         /**< VP2P (BV - CV) One Cycle RMS. */
#define ADE9178_REG_VBCDIPONE                                        (0x290)         /**< VP2P (BV - CV) Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_VBCSWELLONE                                      (0x291)         /**< VP2P (BV - CV) Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_VACRMSONE                                        (0x292)         /**< VP2P (AV - CV) One Cycle RMS. */
#define ADE9178_REG_VACDIPONE                                        (0x293)         /**< VP2P (AV - CV) Minimum RMSONE for Last Detected Dip. */
#define ADE9178_REG_VACSWELLONE                                      (0x294)         /**< VP2P (AV - CV) Maximum RMSONE for Last Detected Swell. */
#define ADE9178_REG_CRC_RSLT                                         (0x295)         /**< Configuration Registers CRC Value. */
  #define ADE9178_BITP_CRC_RSLT_CRC_RSLT_VAL                         (0x0)           /**< Configuration Registers CRC Value. */
  #define ADE9178_BITL_CRC_RSLT_CRC_RSLT_VAL                         (0x10)          /**< Configuration Registers CRC Value. */
  #define ADE9178_BITM_CRC_RSLT_CRC_RSLT_VAL                         (0xffff)        /**< Configuration Registers CRC Value. */
#define ADE9178_REG_STATUS0                                          (0x400)         /**< Status Register 0. */
  #define ADE9178_BITP_STATUS0_EGYRDY                                (0x0)           /**< Energy Data Ready. */
  #define ADE9178_BITL_STATUS0_EGYRDY                                (0x1)           /**< Energy Data Ready. */
  #define ADE9178_BITM_STATUS0_EGYRDY                                (0x1)           /**< Energy Data Ready. */
  #define ADE9178_BITP_STATUS0_REVAPA                                (0x1)           /**< Phase A Active Power Sign Change. */
  #define ADE9178_BITL_STATUS0_REVAPA                                (0x1)           /**< Phase A Active Power Sign Change. */
  #define ADE9178_BITM_STATUS0_REVAPA                                (0x2)           /**< Phase A Active Power Sign Change. */
  #define ADE9178_BITP_STATUS0_REVAPB                                (0x2)           /**< Phase B Active Power Sign Change. */
  #define ADE9178_BITL_STATUS0_REVAPB                                (0x1)           /**< Phase B Active Power Sign Change. */
  #define ADE9178_BITM_STATUS0_REVAPB                                (0x4)           /**< Phase B Active Power Sign Change. */
  #define ADE9178_BITP_STATUS0_REVAPC                                (0x3)           /**< Phase C Active Power Sign Change. */
  #define ADE9178_BITL_STATUS0_REVAPC                                (0x1)           /**< Phase C Active Power Sign Change. */
  #define ADE9178_BITM_STATUS0_REVAPC                                (0x8)           /**< Phase C Active Power Sign Change. */
  #define ADE9178_BITP_STATUS0_REVPSUM1                              (0x4)           /**< CF1 Polarity Sign Change. */
  #define ADE9178_BITL_STATUS0_REVPSUM1                              (0x1)           /**< CF1 Polarity Sign Change. */
  #define ADE9178_BITM_STATUS0_REVPSUM1                              (0x10)          /**< CF1 Polarity Sign Change. */
  #define ADE9178_BITP_STATUS0_REVPSUM2                              (0x5)           /**< CF2 Polarity Sign Change. */
  #define ADE9178_BITL_STATUS0_REVPSUM2                              (0x1)           /**< CF2 Polarity Sign Change. */
  #define ADE9178_BITM_STATUS0_REVPSUM2                              (0x20)          /**< CF2 Polarity Sign Change. */
  #define ADE9178_BITP_STATUS0_CF1                                   (0x6)           /**< CF1 Pulse Issued. */
  #define ADE9178_BITL_STATUS0_CF1                                   (0x1)           /**< CF1 Pulse Issued. */
  #define ADE9178_BITM_STATUS0_CF1                                   (0x40)          /**< CF1 Pulse Issued. */
  #define ADE9178_BITP_STATUS0_CF2                                   (0x7)           /**< CF2 Pulse Issued. */
  #define ADE9178_BITL_STATUS0_CF2                                   (0x1)           /**< CF2 Pulse Issued. */
  #define ADE9178_BITM_STATUS0_CF2                                   (0x80)          /**< CF2 Pulse Issued. */
  #define ADE9178_BITP_STATUS0_RMSONERDY                             (0x8)           /**< One Cycle RMS Data Ready. */
  #define ADE9178_BITL_STATUS0_RMSONERDY                             (0x1)           /**< One Cycle RMS Data Ready. */
  #define ADE9178_BITM_STATUS0_RMSONERDY                             (0x100)         /**< One Cycle RMS Data Ready. */
  #define ADE9178_BITP_STATUS0_PF_RDY                                (0x9)           /**< Power Factor Data Ready. */
  #define ADE9178_BITL_STATUS0_PF_RDY                                (0x1)           /**< Power Factor Data Ready. */
  #define ADE9178_BITM_STATUS0_PF_RDY                                (0x200)         /**< Power Factor Data Ready. */
  #define ADE9178_BITP_STATUS0_ISUMMISMTCH                           (0xa)           /**< ISUM RMS Mismatch. */
  #define ADE9178_BITL_STATUS0_ISUMMISMTCH                           (0x1)           /**< ISUM RMS Mismatch. */
  #define ADE9178_BITM_STATUS0_ISUMMISMTCH                           (0x400)         /**< ISUM RMS Mismatch. */
  #define ADE9178_BITP_STATUS0_WATTNLOAD                             (0xb)           /**< Total Active Energy No Load Condition Changed. */
  #define ADE9178_BITL_STATUS0_WATTNLOAD                             (0x1)           /**< Total Active Energy No Load Condition Changed. */
  #define ADE9178_BITM_STATUS0_WATTNLOAD                             (0x800)         /**< Total Active Energy No Load Condition Changed. */
  #define ADE9178_BITP_STATUS0_VANLOAD                               (0xc)           /**< Total Apparent Energy No Load Condition Changed. */
  #define ADE9178_BITL_STATUS0_VANLOAD                               (0x1)           /**< Total Apparent Energy No Load Condition Changed. */
  #define ADE9178_BITM_STATUS0_VANLOAD                               (0x1000)        /**< Total Apparent Energy No Load Condition Changed. */
  #define ADE9178_BITP_STATUS0_CRC_CHG                               (0xd)           /**< CRC Changed. */
  #define ADE9178_BITL_STATUS0_CRC_CHG                               (0x1)           /**< CRC Changed. */
  #define ADE9178_BITM_STATUS0_CRC_CHG                               (0x2000)        /**< CRC Changed. */
  #define ADE9178_BITP_STATUS0_RSTDONE                               (0xe)           /**< Reset Completed and Ready for SPI Communication. */
  #define ADE9178_BITL_STATUS0_RSTDONE                               (0x1)           /**< Reset Completed and Ready for SPI Communication. */
  #define ADE9178_BITM_STATUS0_RSTDONE                               (0x4000)        /**< Reset Completed and Ready for SPI Communication. */
  #define ADE9178_BITP_STATUS0_SEQERR                                (0xf)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITL_STATUS0_SEQERR                                (0x1)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITM_STATUS0_SEQERR                                (0x8000)        /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITP_STATUS0_ZXTOAV                                (0x10)          /**< Phase A Voltage Zero Crossing Timeout. */
  #define ADE9178_BITL_STATUS0_ZXTOAV                                (0x1)           /**< Phase A Voltage Zero Crossing Timeout. */
  #define ADE9178_BITM_STATUS0_ZXTOAV                                (0x10000)       /**< Phase A Voltage Zero Crossing Timeout. */
  #define ADE9178_BITP_STATUS0_ZXTOBV                                (0x11)          /**< Phase B Voltage Zero Crossing Timeout. */
  #define ADE9178_BITL_STATUS0_ZXTOBV                                (0x1)           /**< Phase B Voltage Zero Crossing Timeout. */
  #define ADE9178_BITM_STATUS0_ZXTOBV                                (0x20000)       /**< Phase B Voltage Zero Crossing Timeout. */
  #define ADE9178_BITP_STATUS0_ZXTOCV                                (0x12)          /**< Phase C Voltage Zero Crossing Timeout. */
  #define ADE9178_BITL_STATUS0_ZXTOCV                                (0x1)           /**< Phase C Voltage Zero Crossing Timeout. */
  #define ADE9178_BITM_STATUS0_ZXTOCV                                (0x40000)       /**< Phase C Voltage Zero Crossing Timeout. */
  #define ADE9178_BITP_STATUS0_ZXAV                                  (0x13)          /**< Phase A Voltage Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAV                                  (0x1)           /**< Phase A Voltage Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAV                                  (0x80000)       /**< Phase A Voltage Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXBV                                  (0x14)          /**< Phase B Voltage Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXBV                                  (0x1)           /**< Phase B Voltage Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXBV                                  (0x100000)      /**< Phase B Voltage Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXCV                                  (0x15)          /**< Phase C Voltage Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXCV                                  (0x1)           /**< Phase C Voltage Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXCV                                  (0x200000)      /**< Phase C Voltage Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXCOMB                                (0x16)          /**< Combined Voltage Channels Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXCOMB                                (0x1)           /**< Combined Voltage Channels Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXCOMB                                (0x400000)      /**< Combined Voltage Channels Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXAI                                  (0x17)          /**< Phase A Current Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAI                                  (0x1)           /**< Phase A Current Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAI                                  (0x800000)      /**< Phase A Current Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXBI                                  (0x18)          /**< Phase B Current Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXBI                                  (0x1)           /**< Phase B Current Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXBI                                  (0x1000000)     /**< Phase B Current Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXCI                                  (0x19)          /**< Phase C Current Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXCI                                  (0x1)           /**< Phase C Current Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXCI                                  (0x2000000)     /**< Phase C Current Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXAUX0                                (0x1a)          /**< Auxiliary 0 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAUX0                                (0x1)           /**< Auxiliary 0 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAUX0                                (0x4000000)     /**< Auxiliary 0 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXAUX1                                (0x1b)          /**< Auxiliary 1 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAUX1                                (0x1)           /**< Auxiliary 1 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAUX1                                (0x8000000)     /**< Auxiliary 1 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXAUX2                                (0x1c)          /**< Auxiliary 2 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAUX2                                (0x1)           /**< Auxiliary 2 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAUX2                                (0x10000000)    /**< Auxiliary 2 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXAUX3                                (0x1d)          /**< Auxiliary 3 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAUX3                                (0x1)           /**< Auxiliary 3 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAUX3                                (0x20000000)    /**< Auxiliary 3 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXAUX4                                (0x1e)          /**< Auxiliary 4 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAUX4                                (0x1)           /**< Auxiliary 4 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAUX4                                (0x40000000)    /**< Auxiliary 4 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS0_ZXAUX5                                (0x1f)          /**< Auxiliary 5 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS0_ZXAUX5                                (0x1)           /**< Auxiliary 5 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS0_ZXAUX5                                (0x80000000)    /**< Auxiliary 5 Channel Zero Crossing Detected. */
#define ADE9178_REG_STATUS1                                          (0x401)         /**< Status Register 1. */
  #define ADE9178_BITP_STATUS1_EGYRDY                                (0x0)           /**< Energy Data Ready. */
  #define ADE9178_BITL_STATUS1_EGYRDY                                (0x1)           /**< Energy Data Ready. */
  #define ADE9178_BITM_STATUS1_EGYRDY                                (0x1)           /**< Energy Data Ready. */
  #define ADE9178_BITP_STATUS1_REVAPA                                (0x1)           /**< Phase A Active Power Sign Change. */
  #define ADE9178_BITL_STATUS1_REVAPA                                (0x1)           /**< Phase A Active Power Sign Change. */
  #define ADE9178_BITM_STATUS1_REVAPA                                (0x2)           /**< Phase A Active Power Sign Change. */
  #define ADE9178_BITP_STATUS1_REVAPB                                (0x2)           /**< Phase B Active Power Sign Change. */
  #define ADE9178_BITL_STATUS1_REVAPB                                (0x1)           /**< Phase B Active Power Sign Change. */
  #define ADE9178_BITM_STATUS1_REVAPB                                (0x4)           /**< Phase B Active Power Sign Change. */
  #define ADE9178_BITP_STATUS1_REVAPC                                (0x3)           /**< Phase C Active Power Sign Change. */
  #define ADE9178_BITL_STATUS1_REVAPC                                (0x1)           /**< Phase C Active Power Sign Change. */
  #define ADE9178_BITM_STATUS1_REVAPC                                (0x8)           /**< Phase C Active Power Sign Change. */
  #define ADE9178_BITP_STATUS1_REVPSUM1                              (0x4)           /**< CF1 Polarity Sign Change. */
  #define ADE9178_BITL_STATUS1_REVPSUM1                              (0x1)           /**< CF1 Polarity Sign Change. */
  #define ADE9178_BITM_STATUS1_REVPSUM1                              (0x10)          /**< CF1 Polarity Sign Change. */
  #define ADE9178_BITP_STATUS1_REVPSUM2                              (0x5)           /**< CF2 Polarity Sign Change. */
  #define ADE9178_BITL_STATUS1_REVPSUM2                              (0x1)           /**< CF2 Polarity Sign Change. */
  #define ADE9178_BITM_STATUS1_REVPSUM2                              (0x20)          /**< CF2 Polarity Sign Change. */
  #define ADE9178_BITP_STATUS1_CF1                                   (0x6)           /**< CF1 Pulse Issued. */
  #define ADE9178_BITL_STATUS1_CF1                                   (0x1)           /**< CF1 Pulse Issued. */
  #define ADE9178_BITM_STATUS1_CF1                                   (0x40)          /**< CF1 Pulse Issued. */
  #define ADE9178_BITP_STATUS1_CF2                                   (0x7)           /**< CF2 Pulse Issued. */
  #define ADE9178_BITL_STATUS1_CF2                                   (0x1)           /**< CF2 Pulse Issued. */
  #define ADE9178_BITM_STATUS1_CF2                                   (0x80)          /**< CF2 Pulse Issued. */
  #define ADE9178_BITP_STATUS1_RMSONERDY                             (0x8)           /**< One Cycle RMS Data Ready. */
  #define ADE9178_BITL_STATUS1_RMSONERDY                             (0x1)           /**< One Cycle RMS Data Ready. */
  #define ADE9178_BITM_STATUS1_RMSONERDY                             (0x100)         /**< One Cycle RMS Data Ready. */
  #define ADE9178_BITP_STATUS1_PF_RDY                                (0x9)           /**< Power Factor Data Ready. */
  #define ADE9178_BITL_STATUS1_PF_RDY                                (0x1)           /**< Power Factor Data Ready. */
  #define ADE9178_BITM_STATUS1_PF_RDY                                (0x200)         /**< Power Factor Data Ready. */
  #define ADE9178_BITP_STATUS1_ISUMMISMTCH                           (0xa)           /**< ISUM RMS Mismatch. */
  #define ADE9178_BITL_STATUS1_ISUMMISMTCH                           (0x1)           /**< ISUM RMS Mismatch. */
  #define ADE9178_BITM_STATUS1_ISUMMISMTCH                           (0x400)         /**< ISUM RMS Mismatch. */
  #define ADE9178_BITP_STATUS1_WATTNLOAD                             (0xb)           /**< Total Active Energy No Load Condition Changed. */
  #define ADE9178_BITL_STATUS1_WATTNLOAD                             (0x1)           /**< Total Active Energy No Load Condition Changed. */
  #define ADE9178_BITM_STATUS1_WATTNLOAD                             (0x800)         /**< Total Active Energy No Load Condition Changed. */
  #define ADE9178_BITP_STATUS1_VANLOAD                               (0xc)           /**< Total Apparent Energy No Load Condition Changed. */
  #define ADE9178_BITL_STATUS1_VANLOAD                               (0x1)           /**< Total Apparent Energy No Load Condition Changed. */
  #define ADE9178_BITM_STATUS1_VANLOAD                               (0x1000)        /**< Total Apparent Energy No Load Condition Changed. */
  #define ADE9178_BITP_STATUS1_CRC_CHG                               (0xd)           /**< CRC Changed. */
  #define ADE9178_BITL_STATUS1_CRC_CHG                               (0x1)           /**< CRC Changed. */
  #define ADE9178_BITM_STATUS1_CRC_CHG                               (0x2000)        /**< CRC Changed. */
  #define ADE9178_BITP_STATUS1_ERROR                                 (0xe)           /**< Error Occurred. */
  #define ADE9178_BITL_STATUS1_ERROR                                 (0x1)           /**< Error Occurred. */
  #define ADE9178_BITM_STATUS1_ERROR                                 (0x4000)        /**< Error Occurred. */
  #define ADE9178_BITP_STATUS1_SEQERR                                (0xf)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITL_STATUS1_SEQERR                                (0x1)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITM_STATUS1_SEQERR                                (0x8000)        /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITP_STATUS1_ZXTOAV                                (0x10)          /**< Phase A Voltage Zero Crossing Timeout. */
  #define ADE9178_BITL_STATUS1_ZXTOAV                                (0x1)           /**< Phase A Voltage Zero Crossing Timeout. */
  #define ADE9178_BITM_STATUS1_ZXTOAV                                (0x10000)       /**< Phase A Voltage Zero Crossing Timeout. */
  #define ADE9178_BITP_STATUS1_ZXTOBV                                (0x11)          /**< Phase B Voltage Zero Crossing Timeout. */
  #define ADE9178_BITL_STATUS1_ZXTOBV                                (0x1)           /**< Phase B Voltage Zero Crossing Timeout. */
  #define ADE9178_BITM_STATUS1_ZXTOBV                                (0x20000)       /**< Phase B Voltage Zero Crossing Timeout. */
  #define ADE9178_BITP_STATUS1_ZXTOCV                                (0x12)          /**< Phase C Voltage Zero Crossing Timeout. */
  #define ADE9178_BITL_STATUS1_ZXTOCV                                (0x1)           /**< Phase C Voltage Zero Crossing Timeout. */
  #define ADE9178_BITM_STATUS1_ZXTOCV                                (0x40000)       /**< Phase C Voltage Zero Crossing Timeout. */
  #define ADE9178_BITP_STATUS1_ZXAV                                  (0x13)          /**< Phase A Voltage Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAV                                  (0x1)           /**< Phase A Voltage Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAV                                  (0x80000)       /**< Phase A Voltage Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXBV                                  (0x14)          /**< Phase B Voltage Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXBV                                  (0x1)           /**< Phase B Voltage Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXBV                                  (0x100000)      /**< Phase B Voltage Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXCV                                  (0x15)          /**< Phase C Voltage Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXCV                                  (0x1)           /**< Phase C Voltage Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXCV                                  (0x200000)      /**< Phase C Voltage Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXCOMB                                (0x16)          /**< Combined Voltage Channels Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXCOMB                                (0x1)           /**< Combined Voltage Channels Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXCOMB                                (0x400000)      /**< Combined Voltage Channels Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXAI                                  (0x17)          /**< Phase A Current Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAI                                  (0x1)           /**< Phase A Current Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAI                                  (0x800000)      /**< Phase A Current Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXBI                                  (0x18)          /**< Phase B Current Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXBI                                  (0x1)           /**< Phase B Current Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXBI                                  (0x1000000)     /**< Phase B Current Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXCI                                  (0x19)          /**< Phase C Current Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXCI                                  (0x1)           /**< Phase C Current Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXCI                                  (0x2000000)     /**< Phase C Current Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXAUX0                                (0x1a)          /**< Auxiliary 0 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAUX0                                (0x1)           /**< Auxiliary 0 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAUX0                                (0x4000000)     /**< Auxiliary 0 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXAUX1                                (0x1b)          /**< Auxiliary 1 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAUX1                                (0x1)           /**< Auxiliary 1 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAUX1                                (0x8000000)     /**< Auxiliary 1 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXAUX2                                (0x1c)          /**< Auxiliary 2 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAUX2                                (0x1)           /**< Auxiliary 2 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAUX2                                (0x10000000)    /**< Auxiliary 2 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXAUX3                                (0x1d)          /**< Auxiliary 3 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAUX3                                (0x1)           /**< Auxiliary 3 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAUX3                                (0x20000000)    /**< Auxiliary 3 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXAUX4                                (0x1e)          /**< Auxiliary 4 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAUX4                                (0x1)           /**< Auxiliary 4 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAUX4                                (0x40000000)    /**< Auxiliary 4 Channel Zero Crossing Detected. */
  #define ADE9178_BITP_STATUS1_ZXAUX5                                (0x1f)          /**< Auxiliary 5 Channel Zero Crossing Detected. */
  #define ADE9178_BITL_STATUS1_ZXAUX5                                (0x1)           /**< Auxiliary 5 Channel Zero Crossing Detected. */
  #define ADE9178_BITM_STATUS1_ZXAUX5                                (0x80000000)    /**< Auxiliary 5 Channel Zero Crossing Detected. */
#define ADE9178_REG_STATUS2                                          (0x402)         /**< Status Register 2. */
  #define ADE9178_BITP_STATUS2_AVDIPONE                              (0x0)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AVDIPONE                              (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AVDIPONE                              (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AIDIPONE                              (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AIDIPONE                              (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AIDIPONE                              (0x2)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_BVDIPONE                              (0x2)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_BVDIPONE                              (0x1)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_BVDIPONE                              (0x4)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_BIDIPONE                              (0x3)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_BIDIPONE                              (0x1)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_BIDIPONE                              (0x8)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_CVDIPONE                              (0x4)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_CVDIPONE                              (0x1)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_CVDIPONE                              (0x10)          /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_CIDIPONE                              (0x5)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_CIDIPONE                              (0x1)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_CIDIPONE                              (0x20)          /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX0DIPONE                            (0x6)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX0DIPONE                            (0x1)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX0DIPONE                            (0x40)          /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX1DIPONE                            (0x7)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX1DIPONE                            (0x1)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX1DIPONE                            (0x80)          /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX2DIPONE                            (0x8)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX2DIPONE                            (0x1)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX2DIPONE                            (0x100)         /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX3DIPONE                            (0x9)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX3DIPONE                            (0x1)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX3DIPONE                            (0x200)         /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX4DIPONE                            (0xa)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX4DIPONE                            (0x1)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX4DIPONE                            (0x400)         /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX5DIPONE                            (0xb)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX5DIPONE                            (0x1)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX5DIPONE                            (0x800)         /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_AVSWELLONE                            (0xc)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AVSWELLONE                            (0x1)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AVSWELLONE                            (0x1000)        /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_AISWELLONE                            (0xd)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AISWELLONE                            (0x1)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AISWELLONE                            (0x2000)        /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_BVSWELLONE                            (0xe)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_BVSWELLONE                            (0x1)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_BVSWELLONE                            (0x4000)        /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_BISWELLONE                            (0xf)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_BISWELLONE                            (0x1)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_BISWELLONE                            (0x8000)        /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_CVSWELLONE                            (0x10)          /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_CVSWELLONE                            (0x1)           /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_CVSWELLONE                            (0x10000)       /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_CISWELLONE                            (0x11)          /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_CISWELLONE                            (0x1)           /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_CISWELLONE                            (0x20000)       /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX0SWELLONE                          (0x12)          /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX0SWELLONE                          (0x1)           /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX0SWELLONE                          (0x40000)       /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX1SWELLONE                          (0x13)          /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX1SWELLONE                          (0x1)           /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX1SWELLONE                          (0x80000)       /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX2SWELLONE                          (0x14)          /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX2SWELLONE                          (0x1)           /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX2SWELLONE                          (0x100000)      /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX3SWELLONE                          (0x15)          /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX3SWELLONE                          (0x1)           /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX3SWELLONE                          (0x200000)      /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX4SWELLONE                          (0x16)          /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX4SWELLONE                          (0x1)           /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX4SWELLONE                          (0x400000)      /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_AUX5SWELLONE                          (0x17)          /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_AUX5SWELLONE                          (0x1)           /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_AUX5SWELLONE                          (0x800000)      /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_VSUMSWELLONE                          (0x18)          /**< VSUM Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_VSUMSWELLONE                          (0x1)           /**< VSUM Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_VSUMSWELLONE                          (0x1000000)     /**< VSUM Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_VABDIPONE                             (0x19)          /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_VABDIPONE                             (0x1)           /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_VABDIPONE                             (0x2000000)     /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_VBCDIPONE                             (0x1a)          /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_VBCDIPONE                             (0x1)           /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_VBCDIPONE                             (0x4000000)     /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_VACDIPONE                             (0x1b)          /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITL_STATUS2_VACDIPONE                             (0x1)           /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITM_STATUS2_VACDIPONE                             (0x8000000)     /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITP_STATUS2_VABSWELLONE                           (0x1c)          /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_VABSWELLONE                           (0x1)           /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_VABSWELLONE                           (0x10000000)    /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_VBCSWELLONE                           (0x1d)          /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_VBCSWELLONE                           (0x1)           /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_VBCSWELLONE                           (0x20000000)    /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITP_STATUS2_VACSWELLONE                           (0x1e)          /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITL_STATUS2_VACSWELLONE                           (0x1)           /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITM_STATUS2_VACSWELLONE                           (0x40000000)    /**< VP2P Swell Condition Detected. */
#define ADE9178_REG_STATUS3                                          (0x403)         /**< Status Register 3. */
  #define ADE9178_BITP_STATUS3_AVDIPHALF                             (0x0)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AVDIPHALF                             (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AVDIPHALF                             (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AIDIPHALF                             (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AIDIPHALF                             (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AIDIPHALF                             (0x2)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_BVDIPHALF                             (0x2)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_BVDIPHALF                             (0x1)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_BVDIPHALF                             (0x4)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_BIDIPHALF                             (0x3)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_BIDIPHALF                             (0x1)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_BIDIPHALF                             (0x8)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_CVDIPHALF                             (0x4)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_CVDIPHALF                             (0x1)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_CVDIPHALF                             (0x10)          /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_CIDIPHALF                             (0x5)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_CIDIPHALF                             (0x1)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_CIDIPHALF                             (0x20)          /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX0DIPHALF                           (0x6)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX0DIPHALF                           (0x1)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX0DIPHALF                           (0x40)          /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX1DIPHALF                           (0x7)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX1DIPHALF                           (0x1)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX1DIPHALF                           (0x80)          /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX2DIPHALF                           (0x8)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX2DIPHALF                           (0x1)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX2DIPHALF                           (0x100)         /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX3DIPHALF                           (0x9)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX3DIPHALF                           (0x1)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX3DIPHALF                           (0x200)         /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX4DIPHALF                           (0xa)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX4DIPHALF                           (0x1)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX4DIPHALF                           (0x400)         /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX5DIPHALF                           (0xb)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX5DIPHALF                           (0x1)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX5DIPHALF                           (0x800)         /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITP_STATUS3_AVSWELLHALF                           (0xc)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AVSWELLHALF                           (0x1)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AVSWELLHALF                           (0x1000)        /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_AISWELLHALF                           (0xd)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AISWELLHALF                           (0x1)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AISWELLHALF                           (0x2000)        /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_BVSWELLHALF                           (0xe)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_BVSWELLHALF                           (0x1)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_BVSWELLHALF                           (0x4000)        /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_BISWELLHALF                           (0xf)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_BISWELLHALF                           (0x1)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_BISWELLHALF                           (0x8000)        /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_CVSWELLHALF                           (0x10)          /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_CVSWELLHALF                           (0x1)           /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_CVSWELLHALF                           (0x10000)       /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_CISWELLHALF                           (0x11)          /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_CISWELLHALF                           (0x1)           /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_CISWELLHALF                           (0x20000)       /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX0SWELLHALF                         (0x12)          /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX0SWELLHALF                         (0x1)           /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX0SWELLHALF                         (0x40000)       /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX1SWELLHALF                         (0x13)          /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX1SWELLHALF                         (0x1)           /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX1SWELLHALF                         (0x80000)       /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX2SWELLHALF                         (0x14)          /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX2SWELLHALF                         (0x1)           /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX2SWELLHALF                         (0x100000)      /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX3SWELLHALF                         (0x15)          /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX3SWELLHALF                         (0x1)           /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX3SWELLHALF                         (0x200000)      /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX4SWELLHALF                         (0x16)          /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX4SWELLHALF                         (0x1)           /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX4SWELLHALF                         (0x400000)      /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITP_STATUS3_AUX5SWELLHALF                         (0x17)          /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITL_STATUS3_AUX5SWELLHALF                         (0x1)           /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITM_STATUS3_AUX5SWELLHALF                         (0x800000)      /**< Auxiliary 5 Channel Swell Condition Detected. */
#define ADE9178_REG_ERROR_STATUS                                     (0x404)         /**< Firmware Status Register. */
  #define ADE9178_BITP_ERROR_STATUS_ADC_INIT_ERROR                   (0x0)           /**< Error Occurs in ADC Initialization. */
  #define ADE9178_BITL_ERROR_STATUS_ADC_INIT_ERROR                   (0x1)           /**< Error Occurs in ADC Initialization. */
  #define ADE9178_BITM_ERROR_STATUS_ADC_INIT_ERROR                   (0x1)           /**< Error Occurs in ADC Initialization. */
  #define ADE9178_BITP_ERROR_STATUS_ERROR0                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR0                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR0                           (0x2)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITP_ERROR_STATUS_ERROR1                           (0x2)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR1                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR1                           (0x4)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITP_ERROR_STATUS_ERROR2                           (0x3)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR2                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR2                           (0x8)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITP_ERROR_STATUS_ERROR3                           (0x4)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR3                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR3                           (0x10)          /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITP_ERROR_STATUS_ERROR4                           (0x5)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR4                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR4                           (0x20)          /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITP_ERROR_STATUS_ADC_CRC_ERROR                    (0x6)           /**< ADC CRC Error Occurs. */
  #define ADE9178_BITL_ERROR_STATUS_ADC_CRC_ERROR                    (0x1)           /**< ADC CRC Error Occurs. */
  #define ADE9178_BITM_ERROR_STATUS_ADC_CRC_ERROR                    (0x40)          /**< ADC CRC Error Occurs. */
  #define ADE9178_BITP_ERROR_STATUS_ERROR5                           (0x7)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR5                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR5                           (0x80)          /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITP_ERROR_STATUS_DREADY_FREQ_ERROR                (0x8)           /**< ADC Data Ready Frequency Error. */
  #define ADE9178_BITL_ERROR_STATUS_DREADY_FREQ_ERROR                (0x1)           /**< ADC Data Ready Frequency Error. */
  #define ADE9178_BITM_ERROR_STATUS_DREADY_FREQ_ERROR                (0x100)         /**< ADC Data Ready Frequency Error. */
  #define ADE9178_BITP_ERROR_STATUS_ADC0_STATUS0                     (0x9)           /**< ADC0 STATUS0 */
  #define ADE9178_BITL_ERROR_STATUS_ADC0_STATUS0                     (0x1)           /**< ADC0 STATUS0 */
  #define ADE9178_BITM_ERROR_STATUS_ADC0_STATUS0                     (0x200)         /**< ADC0 STATUS0 */
  #define ADE9178_BITP_ERROR_STATUS_ADC0_STATUS1                     (0xa)           /**< ADC0 STATUS1 */
  #define ADE9178_BITL_ERROR_STATUS_ADC0_STATUS1                     (0x1)           /**< ADC0 STATUS1 */
  #define ADE9178_BITM_ERROR_STATUS_ADC0_STATUS1                     (0x400)         /**< ADC0 STATUS1 */
  #define ADE9178_BITP_ERROR_STATUS_ADC0_STATUS2                     (0xb)           /**< ADC0 STATUS2 */
  #define ADE9178_BITL_ERROR_STATUS_ADC0_STATUS2                     (0x1)           /**< ADC0 STATUS2 */
  #define ADE9178_BITM_ERROR_STATUS_ADC0_STATUS2                     (0x800)         /**< ADC0 STATUS2 */
  #define ADE9178_BITP_ERROR_STATUS_ADC1_STATUS0                     (0xc)           /**< ADC1 STATUS0 */
  #define ADE9178_BITL_ERROR_STATUS_ADC1_STATUS0                     (0x1)           /**< ADC1 STATUS0 */
  #define ADE9178_BITM_ERROR_STATUS_ADC1_STATUS0                     (0x1000)        /**< ADC1 STATUS0 */
  #define ADE9178_BITP_ERROR_STATUS_ADC1_STATUS1                     (0xd)           /**< ADC1 STATUS1 */
  #define ADE9178_BITL_ERROR_STATUS_ADC1_STATUS1                     (0x1)           /**< ADC1 STATUS1 */
  #define ADE9178_BITM_ERROR_STATUS_ADC1_STATUS1                     (0x2000)        /**< ADC1 STATUS1 */
  #define ADE9178_BITP_ERROR_STATUS_ADC1_STATUS2                     (0xe)           /**< ADC1 STATUS2 */
  #define ADE9178_BITL_ERROR_STATUS_ADC1_STATUS2                     (0x1)           /**< ADC1 STATUS2 */
  #define ADE9178_BITM_ERROR_STATUS_ADC1_STATUS2                     (0x4000)        /**< ADC1 STATUS2 */
  #define ADE9178_BITP_ERROR_STATUS_ADC2_STATUS0                     (0xf)           /**< ADC2 STATUS0 */
  #define ADE9178_BITL_ERROR_STATUS_ADC2_STATUS0                     (0x1)           /**< ADC2 STATUS0 */
  #define ADE9178_BITM_ERROR_STATUS_ADC2_STATUS0                     (0x8000)        /**< ADC2 STATUS0 */
  #define ADE9178_BITP_ERROR_STATUS_ADC2_STATUS1                     (0x10)          /**< ADC2 STATUS1 */
  #define ADE9178_BITL_ERROR_STATUS_ADC2_STATUS1                     (0x1)           /**< ADC2 STATUS1 */
  #define ADE9178_BITM_ERROR_STATUS_ADC2_STATUS1                     (0x10000)       /**< ADC2 STATUS1 */
  #define ADE9178_BITP_ERROR_STATUS_ADC2_STATUS2                     (0x11)          /**< ADC2 STATUS2 */
  #define ADE9178_BITL_ERROR_STATUS_ADC2_STATUS2                     (0x1)           /**< ADC2 STATUS2 */
  #define ADE9178_BITM_ERROR_STATUS_ADC2_STATUS2                     (0x20000)       /**< ADC2 STATUS2 */
  #define ADE9178_BITP_ERROR_STATUS_ADC3_STATUS0                     (0x12)          /**< ADC3 STATUS0 */
  #define ADE9178_BITL_ERROR_STATUS_ADC3_STATUS0                     (0x1)           /**< ADC3 STATUS0 */
  #define ADE9178_BITM_ERROR_STATUS_ADC3_STATUS0                     (0x40000)       /**< ADC3 STATUS0 */
  #define ADE9178_BITP_ERROR_STATUS_ADC3_STATUS1                     (0x13)          /**< ADC3 STATUS1 */
  #define ADE9178_BITL_ERROR_STATUS_ADC3_STATUS1                     (0x1)           /**< ADC3 STATUS1 */
  #define ADE9178_BITM_ERROR_STATUS_ADC3_STATUS1                     (0x80000)       /**< ADC3 STATUS1 */
  #define ADE9178_BITP_ERROR_STATUS_ADC3_STATUS2                     (0x14)          /**< ADC3 STATUS2 */
  #define ADE9178_BITL_ERROR_STATUS_ADC3_STATUS2                     (0x1)           /**< ADC3 STATUS2 */
  #define ADE9178_BITM_ERROR_STATUS_ADC3_STATUS2                     (0x100000)      /**< ADC3 STATUS2 */
  #define ADE9178_BITP_ERROR_STATUS_ERROR6                           (0x15)          /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR6                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR6                           (0x200000)      /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITP_ERROR_STATUS_ERROR7                           (0x16)          /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITL_ERROR_STATUS_ERROR7                           (0x1)           /**< Internal Error. Reset ADE9178 and ADCs. */
  #define ADE9178_BITM_ERROR_STATUS_ERROR7                           (0x400000)      /**< Internal Error. Reset ADE9178 and ADCs. */
#define ADE9178_REG_MASK0                                            (0x405)         /**< Interrupt Enable Register 0. */
  #define ADE9178_BITP_MASK0_EGYRDY                                  (0x0)           /**< Energy Data Ready Mask. */
  #define ADE9178_BITL_MASK0_EGYRDY                                  (0x1)           /**< Energy Data Ready Mask. */
  #define ADE9178_BITM_MASK0_EGYRDY                                  (0x1)           /**< Energy Data Ready Mask. */
  #define ADE9178_BITP_MASK0_REVAPA                                  (0x1)           /**< Phase A Active Power Sign Change Mask. */
  #define ADE9178_BITL_MASK0_REVAPA                                  (0x1)           /**< Phase A Active Power Sign Change Mask. */
  #define ADE9178_BITM_MASK0_REVAPA                                  (0x2)           /**< Phase A Active Power Sign Change Mask. */
  #define ADE9178_BITP_MASK0_REVAPB                                  (0x2)           /**< Phase B Active Power Sign Change Mask. */
  #define ADE9178_BITL_MASK0_REVAPB                                  (0x1)           /**< Phase B Active Power Sign Change Mask. */
  #define ADE9178_BITM_MASK0_REVAPB                                  (0x4)           /**< Phase B Active Power Sign Change Mask. */
  #define ADE9178_BITP_MASK0_REVAPC                                  (0x3)           /**< Phase C Active Power Sign Change Mask. */
  #define ADE9178_BITL_MASK0_REVAPC                                  (0x1)           /**< Phase C Active Power Sign Change Mask. */
  #define ADE9178_BITM_MASK0_REVAPC                                  (0x8)           /**< Phase C Active Power Sign Change Mask. */
  #define ADE9178_BITP_MASK0_REVPSUM1                                (0x4)           /**< CF1 Polarity Sign Change Mask. */
  #define ADE9178_BITL_MASK0_REVPSUM1                                (0x1)           /**< CF1 Polarity Sign Change Mask. */
  #define ADE9178_BITM_MASK0_REVPSUM1                                (0x10)          /**< CF1 Polarity Sign Change Mask. */
  #define ADE9178_BITP_MASK0_REVPSUM2                                (0x5)           /**< CF2 Polarity Sign Change Mask. */
  #define ADE9178_BITL_MASK0_REVPSUM2                                (0x1)           /**< CF2 Polarity Sign Change Mask. */
  #define ADE9178_BITM_MASK0_REVPSUM2                                (0x20)          /**< CF2 Polarity Sign Change Mask. */
  #define ADE9178_BITP_MASK0_CF1                                     (0x6)           /**< CF1 Pulse Issued Mask. */
  #define ADE9178_BITL_MASK0_CF1                                     (0x1)           /**< CF1 Pulse Issued Mask. */
  #define ADE9178_BITM_MASK0_CF1                                     (0x40)          /**< CF1 Pulse Issued Mask. */
  #define ADE9178_BITP_MASK0_CF2                                     (0x7)           /**< CF2 Pulse Issued Mask. */
  #define ADE9178_BITL_MASK0_CF2                                     (0x1)           /**< CF2 Pulse Issued Mask. */
  #define ADE9178_BITM_MASK0_CF2                                     (0x80)          /**< CF2 Pulse Issued Mask. */
  #define ADE9178_BITP_MASK0_RMSONERDY                               (0x8)           /**< One Cycle RMS RMS Data Ready Mask. */
  #define ADE9178_BITL_MASK0_RMSONERDY                               (0x1)           /**< One Cycle RMS RMS Data Ready Mask. */
  #define ADE9178_BITM_MASK0_RMSONERDY                               (0x100)         /**< One Cycle RMS RMS Data Ready Mask. */
  #define ADE9178_BITP_MASK0_PF_RDY                                  (0x9)           /**< Power Factor Data Ready Mask. */
  #define ADE9178_BITL_MASK0_PF_RDY                                  (0x1)           /**< Power Factor Data Ready Mask. */
  #define ADE9178_BITM_MASK0_PF_RDY                                  (0x200)         /**< Power Factor Data Ready Mask. */
  #define ADE9178_BITP_MASK0_ISUMMISMTCH                             (0xa)           /**< ISUM RMS Mismatch Mask. */
  #define ADE9178_BITL_MASK0_ISUMMISMTCH                             (0x1)           /**< ISUM RMS Mismatch Mask. */
  #define ADE9178_BITM_MASK0_ISUMMISMTCH                             (0x400)         /**< ISUM RMS Mismatch Mask. */
  #define ADE9178_BITP_MASK0_WATTNLOAD                               (0xb)           /**< Total Active Energy No Load Condition Changed Mask. */
  #define ADE9178_BITL_MASK0_WATTNLOAD                               (0x1)           /**< Total Active Energy No Load Condition Changed Mask. */
  #define ADE9178_BITM_MASK0_WATTNLOAD                               (0x800)         /**< Total Active Energy No Load Condition Changed Mask. */
  #define ADE9178_BITP_MASK0_VANLOAD                                 (0xc)           /**< Total Apparent Energy No Load Condition Changed Mask. */
  #define ADE9178_BITL_MASK0_VANLOAD                                 (0x1)           /**< Total Apparent Energy No Load Condition Changed Mask. */
  #define ADE9178_BITM_MASK0_VANLOAD                                 (0x1000)        /**< Total Apparent Energy No Load Condition Changed Mask. */
  #define ADE9178_BITP_MASK0_CRC_CHG                                 (0xd)           /**< CRC Changed Mask. */
  #define ADE9178_BITL_MASK0_CRC_CHG                                 (0x1)           /**< CRC Changed Mask. */
  #define ADE9178_BITM_MASK0_CRC_CHG                                 (0x2000)        /**< CRC Changed Mask. */
  #define ADE9178_BITP_MASK0_RSTDONE                                 (0xe)           /**< Reset Completed and Ready for SPI Communication. */
  #define ADE9178_BITL_MASK0_RSTDONE                                 (0x1)           /**< Reset Completed and Ready for SPI Communication. */
  #define ADE9178_BITM_MASK0_RSTDONE                                 (0x4000)        /**< Reset Completed and Ready for SPI Communication. */
  #define ADE9178_BITP_MASK0_SEQERR                                  (0xf)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITL_MASK0_SEQERR                                  (0x1)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITM_MASK0_SEQERR                                  (0x8000)        /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITP_MASK0_ZXTOAV                                  (0x10)          /**< Phase A Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITL_MASK0_ZXTOAV                                  (0x1)           /**< Phase A Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITM_MASK0_ZXTOAV                                  (0x10000)       /**< Phase A Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITP_MASK0_ZXTOBV                                  (0x11)          /**< Phase B Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITL_MASK0_ZXTOBV                                  (0x1)           /**< Phase B Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITM_MASK0_ZXTOBV                                  (0x20000)       /**< Phase B Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITP_MASK0_ZXTOCV                                  (0x12)          /**< Phase C Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITL_MASK0_ZXTOCV                                  (0x1)           /**< Phase C Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITM_MASK0_ZXTOCV                                  (0x40000)       /**< Phase C Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITP_MASK0_ZXAV                                    (0x13)          /**< Phase A Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAV                                    (0x1)           /**< Phase A Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAV                                    (0x80000)       /**< Phase A Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXBV                                    (0x14)          /**< Phase B Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXBV                                    (0x1)           /**< Phase B Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXBV                                    (0x100000)      /**< Phase B Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXCV                                    (0x15)          /**< Phase C Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXCV                                    (0x1)           /**< Phase C Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXCV                                    (0x200000)      /**< Phase C Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXCOMB                                  (0x16)          /**< Combined Voltage Channels Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXCOMB                                  (0x1)           /**< Combined Voltage Channels Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXCOMB                                  (0x400000)      /**< Combined Voltage Channels Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXAI                                    (0x17)          /**< Phase A Current Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAI                                    (0x1)           /**< Phase A Current Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAI                                    (0x800000)      /**< Phase A Current Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXBI                                    (0x18)          /**< Phase B Current Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXBI                                    (0x1)           /**< Phase B Current Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXBI                                    (0x1000000)     /**< Phase B Current Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXCI                                    (0x19)          /**< Phase C Current Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXCI                                    (0x1)           /**< Phase C Current Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXCI                                    (0x2000000)     /**< Phase C Current Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXAUX0                                  (0x1a)          /**< Auxiliary 0 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAUX0                                  (0x1)           /**< Auxiliary 0 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAUX0                                  (0x4000000)     /**< Auxiliary 0 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXAUX1                                  (0x1b)          /**< Auxiliary 1 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAUX1                                  (0x1)           /**< Auxiliary 1 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAUX1                                  (0x8000000)     /**< Auxiliary 1 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXAUX2                                  (0x1c)          /**< Auxiliary 2 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAUX2                                  (0x1)           /**< Auxiliary 2 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAUX2                                  (0x10000000)    /**< Auxiliary 2 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXAUX3                                  (0x1d)          /**< Auxiliary 3 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAUX3                                  (0x1)           /**< Auxiliary 3 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAUX3                                  (0x20000000)    /**< Auxiliary 3 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXAUX4                                  (0x1e)          /**< Auxiliary 4 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAUX4                                  (0x1)           /**< Auxiliary 4 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAUX4                                  (0x40000000)    /**< Auxiliary 4 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK0_ZXAUX5                                  (0x1f)          /**< Auxiliary 5 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK0_ZXAUX5                                  (0x1)           /**< Auxiliary 5 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK0_ZXAUX5                                  (0x80000000)    /**< Auxiliary 5 Channel Zero Crossing Detected Mask. */
#define ADE9178_REG_MASK1                                            (0x406)         /**< Interrupt Enable Register 1. */
  #define ADE9178_BITP_MASK1_EGYRDY                                  (0x0)           /**< Energy Data Ready Mask. */
  #define ADE9178_BITL_MASK1_EGYRDY                                  (0x1)           /**< Energy Data Ready Mask. */
  #define ADE9178_BITM_MASK1_EGYRDY                                  (0x1)           /**< Energy Data Ready Mask. */
  #define ADE9178_BITP_MASK1_REVAPA                                  (0x1)           /**< Phase A Active Power Sign Change Mask. */
  #define ADE9178_BITL_MASK1_REVAPA                                  (0x1)           /**< Phase A Active Power Sign Change Mask. */
  #define ADE9178_BITM_MASK1_REVAPA                                  (0x2)           /**< Phase A Active Power Sign Change Mask. */
  #define ADE9178_BITP_MASK1_REVAPB                                  (0x2)           /**< Phase B Active Power Sign Change Mask. */
  #define ADE9178_BITL_MASK1_REVAPB                                  (0x1)           /**< Phase B Active Power Sign Change Mask. */
  #define ADE9178_BITM_MASK1_REVAPB                                  (0x4)           /**< Phase B Active Power Sign Change Mask. */
  #define ADE9178_BITP_MASK1_REVAPC                                  (0x3)           /**< Phase C Active Power Sign Change Mask. */
  #define ADE9178_BITL_MASK1_REVAPC                                  (0x1)           /**< Phase C Active Power Sign Change Mask. */
  #define ADE9178_BITM_MASK1_REVAPC                                  (0x8)           /**< Phase C Active Power Sign Change Mask. */
  #define ADE9178_BITP_MASK1_REVPSUM1                                (0x4)           /**< CF1 Polarity Sign Change Mask. */
  #define ADE9178_BITL_MASK1_REVPSUM1                                (0x1)           /**< CF1 Polarity Sign Change Mask. */
  #define ADE9178_BITM_MASK1_REVPSUM1                                (0x10)          /**< CF1 Polarity Sign Change Mask. */
  #define ADE9178_BITP_MASK1_REVPSUM2                                (0x5)           /**< CF2 Polarity Sign Change Mask. */
  #define ADE9178_BITL_MASK1_REVPSUM2                                (0x1)           /**< CF2 Polarity Sign Change Mask. */
  #define ADE9178_BITM_MASK1_REVPSUM2                                (0x20)          /**< CF2 Polarity Sign Change Mask. */
  #define ADE9178_BITP_MASK1_CF1                                     (0x6)           /**< CF1 Pulse Issued Mask. */
  #define ADE9178_BITL_MASK1_CF1                                     (0x1)           /**< CF1 Pulse Issued Mask. */
  #define ADE9178_BITM_MASK1_CF1                                     (0x40)          /**< CF1 Pulse Issued Mask. */
  #define ADE9178_BITP_MASK1_CF2                                     (0x7)           /**< CF2 Pulse Issued Mask. */
  #define ADE9178_BITL_MASK1_CF2                                     (0x1)           /**< CF2 Pulse Issued Mask. */
  #define ADE9178_BITM_MASK1_CF2                                     (0x80)          /**< CF2 Pulse Issued Mask. */
  #define ADE9178_BITP_MASK1_RMSONERDY                               (0x8)           /**< One Cycle RMS RMS Data Ready Mask. */
  #define ADE9178_BITL_MASK1_RMSONERDY                               (0x1)           /**< One Cycle RMS RMS Data Ready Mask. */
  #define ADE9178_BITM_MASK1_RMSONERDY                               (0x100)         /**< One Cycle RMS RMS Data Ready Mask. */
  #define ADE9178_BITP_MASK1_PF_RDY                                  (0x9)           /**< Power Factor Data Ready Mask. */
  #define ADE9178_BITL_MASK1_PF_RDY                                  (0x1)           /**< Power Factor Data Ready Mask. */
  #define ADE9178_BITM_MASK1_PF_RDY                                  (0x200)         /**< Power Factor Data Ready Mask. */
  #define ADE9178_BITP_MASK1_ISUMMISMTCH                             (0xa)           /**< ISUM RMS Mismatch Mask. */
  #define ADE9178_BITL_MASK1_ISUMMISMTCH                             (0x1)           /**< ISUM RMS Mismatch Mask. */
  #define ADE9178_BITM_MASK1_ISUMMISMTCH                             (0x400)         /**< ISUM RMS Mismatch Mask. */
  #define ADE9178_BITP_MASK1_WATTNLOAD                               (0xb)           /**< Total Active Energy No Load Condition Changed Mask. */
  #define ADE9178_BITL_MASK1_WATTNLOAD                               (0x1)           /**< Total Active Energy No Load Condition Changed Mask. */
  #define ADE9178_BITM_MASK1_WATTNLOAD                               (0x800)         /**< Total Active Energy No Load Condition Changed Mask. */
  #define ADE9178_BITP_MASK1_VANLOAD                                 (0xc)           /**< Total Apparent Energy No Load Condition Changed Mask. */
  #define ADE9178_BITL_MASK1_VANLOAD                                 (0x1)           /**< Total Apparent Energy No Load Condition Changed Mask. */
  #define ADE9178_BITM_MASK1_VANLOAD                                 (0x1000)        /**< Total Apparent Energy No Load Condition Changed Mask. */
  #define ADE9178_BITP_MASK1_CRC_CHG                                 (0xd)           /**< CRC Changed Mask. */
  #define ADE9178_BITL_MASK1_CRC_CHG                                 (0x1)           /**< CRC Changed Mask. */
  #define ADE9178_BITM_MASK1_CRC_CHG                                 (0x2000)        /**< CRC Changed Mask. */
  #define ADE9178_BITP_MASK1_ERROR                                   (0xe)           /**< Error Occurred. */
  #define ADE9178_BITL_MASK1_ERROR                                   (0x1)           /**< Error Occurred. */
  #define ADE9178_BITM_MASK1_ERROR                                   (0x4000)        /**< Error Occurred. */
  #define ADE9178_BITP_MASK1_SEQERR                                  (0xf)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITL_MASK1_SEQERR                                  (0x1)           /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITM_MASK1_SEQERR                                  (0x8000)        /**< Phase Sequence Error Occurred on Voltage Zero Crossings. */
  #define ADE9178_BITP_MASK1_ZXTOAV                                  (0x10)          /**< Phase A Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITL_MASK1_ZXTOAV                                  (0x1)           /**< Phase A Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITM_MASK1_ZXTOAV                                  (0x10000)       /**< Phase A Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITP_MASK1_ZXTOBV                                  (0x11)          /**< Phase B Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITL_MASK1_ZXTOBV                                  (0x1)           /**< Phase B Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITM_MASK1_ZXTOBV                                  (0x20000)       /**< Phase B Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITP_MASK1_ZXTOCV                                  (0x12)          /**< Phase C Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITL_MASK1_ZXTOCV                                  (0x1)           /**< Phase C Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITM_MASK1_ZXTOCV                                  (0x40000)       /**< Phase C Voltage Zero Crossing Timeout Mask. */
  #define ADE9178_BITP_MASK1_ZXAV                                    (0x13)          /**< Phase A Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAV                                    (0x1)           /**< Phase A Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAV                                    (0x80000)       /**< Phase A Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXBV                                    (0x14)          /**< Phase B Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXBV                                    (0x1)           /**< Phase B Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXBV                                    (0x100000)      /**< Phase B Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXCV                                    (0x15)          /**< Phase C Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXCV                                    (0x1)           /**< Phase C Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXCV                                    (0x200000)      /**< Phase C Voltage Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXCOMB                                  (0x16)          /**< Combined Voltage Channels Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXCOMB                                  (0x1)           /**< Combined Voltage Channels Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXCOMB                                  (0x400000)      /**< Combined Voltage Channels Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXAI                                    (0x17)          /**< Phase A Current Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAI                                    (0x1)           /**< Phase A Current Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAI                                    (0x800000)      /**< Phase A Current Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXBI                                    (0x18)          /**< Phase B Current Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXBI                                    (0x1)           /**< Phase B Current Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXBI                                    (0x1000000)     /**< Phase B Current Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXCI                                    (0x19)          /**< Phase C Current Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXCI                                    (0x1)           /**< Phase C Current Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXCI                                    (0x2000000)     /**< Phase C Current Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXAUX0                                  (0x1a)          /**< Auxiliary 0 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAUX0                                  (0x1)           /**< Auxiliary 0 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAUX0                                  (0x4000000)     /**< Auxiliary 0 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXAUX1                                  (0x1b)          /**< Auxiliary 1 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAUX1                                  (0x1)           /**< Auxiliary 1 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAUX1                                  (0x8000000)     /**< Auxiliary 1 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXAUX2                                  (0x1c)          /**< Auxiliary 2 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAUX2                                  (0x1)           /**< Auxiliary 2 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAUX2                                  (0x10000000)    /**< Auxiliary 2 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXAUX3                                  (0x1d)          /**< Auxiliary 3 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAUX3                                  (0x1)           /**< Auxiliary 3 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAUX3                                  (0x20000000)    /**< Auxiliary 3 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXAUX4                                  (0x1e)          /**< Auxiliary 4 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAUX4                                  (0x1)           /**< Auxiliary 4 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAUX4                                  (0x40000000)    /**< Auxiliary 4 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITP_MASK1_ZXAUX5                                  (0x1f)          /**< Auxiliary 5 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITL_MASK1_ZXAUX5                                  (0x1)           /**< Auxiliary 5 Channel Zero Crossing Detected Mask. */
  #define ADE9178_BITM_MASK1_ZXAUX5                                  (0x80000000)    /**< Auxiliary 5 Channel Zero Crossing Detected Mask. */
#define ADE9178_REG_MASK2                                            (0x407)         /**< Interrupt Enable Register 2. */
  #define ADE9178_BITP_MASK2_AVDIPONE                                (0x0)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AVDIPONE                                (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AVDIPONE                                (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AIDIPONE                                (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AIDIPONE                                (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AIDIPONE                                (0x2)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_BVDIPONE                                (0x2)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_BVDIPONE                                (0x1)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_BVDIPONE                                (0x4)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_BIDIPONE                                (0x3)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_BIDIPONE                                (0x1)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_BIDIPONE                                (0x8)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_CVDIPONE                                (0x4)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_CVDIPONE                                (0x1)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_CVDIPONE                                (0x10)          /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_CIDIPONE                                (0x5)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_CIDIPONE                                (0x1)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_CIDIPONE                                (0x20)          /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX0DIPONE                              (0x6)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX0DIPONE                              (0x1)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX0DIPONE                              (0x40)          /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX1DIPONE                              (0x7)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX1DIPONE                              (0x1)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX1DIPONE                              (0x80)          /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX2DIPONE                              (0x8)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX2DIPONE                              (0x1)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX2DIPONE                              (0x100)         /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX3DIPONE                              (0x9)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX3DIPONE                              (0x1)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX3DIPONE                              (0x200)         /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX4DIPONE                              (0xa)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX4DIPONE                              (0x1)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX4DIPONE                              (0x400)         /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX5DIPONE                              (0xb)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX5DIPONE                              (0x1)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX5DIPONE                              (0x800)         /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_AVSWELLONE                              (0xc)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AVSWELLONE                              (0x1)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AVSWELLONE                              (0x1000)        /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_AISWELLONE                              (0xd)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AISWELLONE                              (0x1)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AISWELLONE                              (0x2000)        /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_BVSWELLONE                              (0xe)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_BVSWELLONE                              (0x1)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_BVSWELLONE                              (0x4000)        /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_BISWELLONE                              (0xf)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_BISWELLONE                              (0x1)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_BISWELLONE                              (0x8000)        /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_CVSWELLONE                              (0x10)          /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_CVSWELLONE                              (0x1)           /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_CVSWELLONE                              (0x10000)       /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_CISWELLONE                              (0x11)          /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_CISWELLONE                              (0x1)           /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_CISWELLONE                              (0x20000)       /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX0SWELLONE                            (0x12)          /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX0SWELLONE                            (0x1)           /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX0SWELLONE                            (0x40000)       /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX1SWELLONE                            (0x13)          /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX1SWELLONE                            (0x1)           /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX1SWELLONE                            (0x80000)       /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX2SWELLONE                            (0x14)          /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX2SWELLONE                            (0x1)           /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX2SWELLONE                            (0x100000)      /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX3SWELLONE                            (0x15)          /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX3SWELLONE                            (0x1)           /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX3SWELLONE                            (0x200000)      /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX4SWELLONE                            (0x16)          /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX4SWELLONE                            (0x1)           /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX4SWELLONE                            (0x400000)      /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_AUX5SWELLONE                            (0x17)          /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_AUX5SWELLONE                            (0x1)           /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_AUX5SWELLONE                            (0x800000)      /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_VSUMSWELLONE                            (0x18)          /**< VSUM Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_VSUMSWELLONE                            (0x1)           /**< VSUM Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_VSUMSWELLONE                            (0x1000000)     /**< VSUM Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_VABDIPONE                               (0x19)          /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_VABDIPONE                               (0x1)           /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_VABDIPONE                               (0x2000000)     /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_VBCDIPONE                               (0x1a)          /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_VBCDIPONE                               (0x1)           /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_VBCDIPONE                               (0x4000000)     /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_VACDIPONE                               (0x1b)          /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITL_MASK2_VACDIPONE                               (0x1)           /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITM_MASK2_VACDIPONE                               (0x8000000)     /**< VP2P Dip Condition Detected. */
  #define ADE9178_BITP_MASK2_VABSWELLONE                             (0x1c)          /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_VABSWELLONE                             (0x1)           /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_VABSWELLONE                             (0x10000000)    /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_VBCSWELLONE                             (0x1d)          /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_VBCSWELLONE                             (0x1)           /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_VBCSWELLONE                             (0x20000000)    /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITP_MASK2_VACSWELLONE                             (0x1e)          /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITL_MASK2_VACSWELLONE                             (0x1)           /**< VP2P Swell Condition Detected. */
  #define ADE9178_BITM_MASK2_VACSWELLONE                             (0x40000000)    /**< VP2P Swell Condition Detected. */
#define ADE9178_REG_MASK3                                            (0x408)         /**< Interrupt Enable Register 3. */
  #define ADE9178_BITP_MASK3_AVDIPHALF                               (0x0)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AVDIPHALF                               (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AVDIPHALF                               (0x1)           /**< Phase A Voltage Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AIDIPHALF                               (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AIDIPHALF                               (0x1)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AIDIPHALF                               (0x2)           /**< Phase A Current Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_BVDIPHALF                               (0x2)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_BVDIPHALF                               (0x1)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_BVDIPHALF                               (0x4)           /**< Phase B Voltage Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_BIDIPHALF                               (0x3)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_BIDIPHALF                               (0x1)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_BIDIPHALF                               (0x8)           /**< Phase B Current Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_CVDIPHALF                               (0x4)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_CVDIPHALF                               (0x1)           /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_CVDIPHALF                               (0x10)          /**< Phase C Voltage Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_CIDIPHALF                               (0x5)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_CIDIPHALF                               (0x1)           /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_CIDIPHALF                               (0x20)          /**< Phase C Current Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX0DIPHALF                             (0x6)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX0DIPHALF                             (0x1)           /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX0DIPHALF                             (0x40)          /**< Auxiliary 0 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX1DIPHALF                             (0x7)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX1DIPHALF                             (0x1)           /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX1DIPHALF                             (0x80)          /**< Auxiliary 1 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX2DIPHALF                             (0x8)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX2DIPHALF                             (0x1)           /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX2DIPHALF                             (0x100)         /**< Auxiliary 2 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX3DIPHALF                             (0x9)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX3DIPHALF                             (0x1)           /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX3DIPHALF                             (0x200)         /**< Auxiliary 3 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX4DIPHALF                             (0xa)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX4DIPHALF                             (0x1)           /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX4DIPHALF                             (0x400)         /**< Auxiliary 4 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX5DIPHALF                             (0xb)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX5DIPHALF                             (0x1)           /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX5DIPHALF                             (0x800)         /**< Auxiliary 5 Channel Dip Condition Detected. */
  #define ADE9178_BITP_MASK3_AVSWELLHALF                             (0xc)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AVSWELLHALF                             (0x1)           /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AVSWELLHALF                             (0x1000)        /**< Phase A Voltage Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_AISWELLHALF                             (0xd)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AISWELLHALF                             (0x1)           /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AISWELLHALF                             (0x2000)        /**< Phase A Current Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_BVSWELLHALF                             (0xe)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_BVSWELLHALF                             (0x1)           /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_BVSWELLHALF                             (0x4000)        /**< Phase B Voltage Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_BISWELLHALF                             (0xf)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_BISWELLHALF                             (0x1)           /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_BISWELLHALF                             (0x8000)        /**< Phase B Current Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_CVSWELLHALF                             (0x10)          /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_CVSWELLHALF                             (0x1)           /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_CVSWELLHALF                             (0x10000)       /**< Phase C Voltage Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_CISWELLHALF                             (0x11)          /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_CISWELLHALF                             (0x1)           /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_CISWELLHALF                             (0x20000)       /**< Phase C Current Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX0SWELLHALF                           (0x12)          /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX0SWELLHALF                           (0x1)           /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX0SWELLHALF                           (0x40000)       /**< Auxiliary 0 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX1SWELLHALF                           (0x13)          /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX1SWELLHALF                           (0x1)           /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX1SWELLHALF                           (0x80000)       /**< Auxiliary 1 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX2SWELLHALF                           (0x14)          /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX2SWELLHALF                           (0x1)           /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX2SWELLHALF                           (0x100000)      /**< Auxiliary 2 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX3SWELLHALF                           (0x15)          /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX3SWELLHALF                           (0x1)           /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX3SWELLHALF                           (0x200000)      /**< Auxiliary 3 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX4SWELLHALF                           (0x16)          /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX4SWELLHALF                           (0x1)           /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX4SWELLHALF                           (0x400000)      /**< Auxiliary 4 Channel Swell Condition Detected. */
  #define ADE9178_BITP_MASK3_AUX5SWELLHALF                           (0x17)          /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITL_MASK3_AUX5SWELLHALF                           (0x1)           /**< Auxiliary 5 Channel Swell Condition Detected. */
  #define ADE9178_BITM_MASK3_AUX5SWELLHALF                           (0x800000)      /**< Auxiliary 5 Channel Swell Condition Detected. */
#define ADE9178_REG_ERROR_MASK                                       (0x409)         /**< Firmware Status Interrupt Enable Register. */
  #define ADE9178_BITP_ERROR_MASK_ADC_INIT_ERROR                     (0x0)           /**< Adc Initialization Error Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ADC_INIT_ERROR                     (0x1)           /**< Adc Initialization Error Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ADC_INIT_ERROR                     (0x1)           /**< Adc Initialization Error Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ERROR0                             (0x1)           /**< Error0 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR0                             (0x1)           /**< Error0 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR0                             (0x2)           /**< Error0 Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ERROR1                             (0x2)           /**< Error1 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR1                             (0x1)           /**< Error1 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR1                             (0x4)           /**< Error1 Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ERROR2                             (0x3)           /**< Error2 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR2                             (0x1)           /**< Error2 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR2                             (0x8)           /**< Error2 Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ERROR3                             (0x4)           /**< Error3 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR3                             (0x1)           /**< Error3 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR3                             (0x10)          /**< Error3 Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ERROR4                             (0x5)           /**< Error4 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR4                             (0x1)           /**< Error4 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR4                             (0x20)          /**< Error4 Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ADC_CRC_ERROR                      (0x6)           /**< ADC CRC Error Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ADC_CRC_ERROR                      (0x1)           /**< ADC CRC Error Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ADC_CRC_ERROR                      (0x40)          /**< ADC CRC Error Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ERROR5                             (0x7)           /**< Error5 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR5                             (0x1)           /**< Error5 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR5                             (0x80)          /**< Error5 Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_DREADY_FREQ_ERROR                  (0x8)           /**< ADC Data Ready Frequency Error Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_DREADY_FREQ_ERROR                  (0x1)           /**< ADC Data Ready Frequency Error Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_DREADY_FREQ_ERROR                  (0x100)         /**< ADC Data Ready Frequency Error Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ADC0_STATUS0                       (0x9)           /**< ADC0 STATUS0 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC0_STATUS0                       (0x1)           /**< ADC0 STATUS0 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC0_STATUS0                       (0x200)         /**< ADC0 STATUS0 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC0_STATUS1                       (0xa)           /**< ADC0 STATUS1 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC0_STATUS1                       (0x1)           /**< ADC0 STATUS1 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC0_STATUS1                       (0x400)         /**< ADC0 STATUS1 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC0_STATUS2                       (0xb)           /**< ADC0 STATUS2 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC0_STATUS2                       (0x1)           /**< ADC0 STATUS2 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC0_STATUS2                       (0x800)         /**< ADC0 STATUS2 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC1_STATUS0                       (0xc)           /**< ADC1 STATUS0 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC1_STATUS0                       (0x1)           /**< ADC1 STATUS0 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC1_STATUS0                       (0x1000)        /**< ADC1 STATUS0 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC1_STATUS1                       (0xd)           /**< ADC1 STATUS1 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC1_STATUS1                       (0x1)           /**< ADC1 STATUS1 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC1_STATUS1                       (0x2000)        /**< ADC1 STATUS1 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC1_STATUS2                       (0xe)           /**< ADC1 STATUS2 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC1_STATUS2                       (0x1)           /**< ADC1 STATUS2 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC1_STATUS2                       (0x4000)        /**< ADC1 STATUS2 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC2_STATUS0                       (0xf)           /**< ADC2 STATUS0 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC2_STATUS0                       (0x1)           /**< ADC2 STATUS0 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC2_STATUS0                       (0x8000)        /**< ADC2 STATUS0 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC2_STATUS1                       (0x10)          /**< ADC2 STATUS1 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC2_STATUS1                       (0x1)           /**< ADC2 STATUS1 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC2_STATUS1                       (0x10000)       /**< ADC2 STATUS1 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC2_STATUS2                       (0x11)          /**< ADC2 STATUS2 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC2_STATUS2                       (0x1)           /**< ADC2 STATUS2 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC2_STATUS2                       (0x20000)       /**< ADC2 STATUS2 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC3_STATUS0                       (0x12)          /**< ADC3 STATUS0 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC3_STATUS0                       (0x1)           /**< ADC3 STATUS0 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC3_STATUS0                       (0x40000)       /**< ADC3 STATUS0 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC3_STATUS1                       (0x13)          /**< ADC3 STATUS1 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC3_STATUS1                       (0x1)           /**< ADC3 STATUS1 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC3_STATUS1                       (0x80000)       /**< ADC3 STATUS1 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ADC3_STATUS2                       (0x14)          /**< ADC3 STATUS2 Bit Mask */
  #define ADE9178_BITL_ERROR_MASK_ADC3_STATUS2                       (0x1)           /**< ADC3 STATUS2 Bit Mask */
  #define ADE9178_BITM_ERROR_MASK_ADC3_STATUS2                       (0x100000)      /**< ADC3 STATUS2 Bit Mask */
  #define ADE9178_BITP_ERROR_MASK_ERROR6                             (0x15)          /**< Error6 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR6                             (0x1)           /**< Error6 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR6                             (0x200000)      /**< Error6 Bit Mask. */
  #define ADE9178_BITP_ERROR_MASK_ERROR7                             (0x16)          /**< Error7 Bit Mask. */
  #define ADE9178_BITL_ERROR_MASK_ERROR7                             (0x1)           /**< Error7 Bit Mask. */
  #define ADE9178_BITM_ERROR_MASK_ERROR7                             (0x400000)      /**< Error7 Bit Mask. */
#define ADE9178_REG_VERSION                                          (0x40a)         /**< Version of ADE9178 IC. */
#define ADE9178_REG_VERSION2                                         (0x40b)         /**< Metrology Algorithm Version. */
#define ADE9178_REG_AVRMS_1                                          (0x600)         /**< SPI Burst Read Access by Function. See AVRMS. */
#define ADE9178_REG_BVRMS_1                                          (0x601)         /**< SPI Burst Read Access by Function. See BVRMS. */
#define ADE9178_REG_CVRMS_1                                          (0x602)         /**< SPI Burst Read Access by Function. See CVRMS. */
#define ADE9178_REG_AIRMS_1                                          (0x603)         /**< SPI Burst Read Access by Function. See AIRMS. */
#define ADE9178_REG_BIRMS_1                                          (0x604)         /**< SPI Burst Read Access by Function. See BIRMS. */
#define ADE9178_REG_CIRMS_1                                          (0x605)         /**< SPI Burst Read Access by Function. See CIRMS. */
#define ADE9178_REG_AUX0RMS_1                                        (0x606)         /**< SPI Burst Read Access by Function. See AUX0RMS. */
#define ADE9178_REG_AUX1RMS_1                                        (0x607)         /**< SPI Burst Read Access by Function. See AUX1RMS. */
#define ADE9178_REG_AUX2RMS_1                                        (0x608)         /**< SPI Burst Read Access by Function. See AUX2RMS. */
#define ADE9178_REG_AUX3RMS_1                                        (0x609)         /**< SPI Burst Read Access by Function. See AUX3RMS. */
#define ADE9178_REG_AUX4RMS_1                                        (0x60a)         /**< SPI Burst Read Access by Function. See AUX4RMS. */
#define ADE9178_REG_AUX5RMS_1                                        (0x60b)         /**< SPI Burst Read Access by Function. See AUX5RMS. */
#define ADE9178_REG_AWATT_1                                          (0x60c)         /**< SPI Burst Read Access by Function. See AWATT. */
#define ADE9178_REG_BWATT_1                                          (0x60d)         /**< SPI Burst Read Access by Function. See BWATT. */
#define ADE9178_REG_CWATT_1                                          (0x60e)         /**< SPI Burst Read Access by Function. See CWATT. */
#define ADE9178_REG_AVA_1                                            (0x60f)         /**< SPI Burst Read Access by Function. See AVA. */
#define ADE9178_REG_BVA_1                                            (0x610)         /**< SPI Burst Read Access by Function. See BVA. */
#define ADE9178_REG_CVA_1                                            (0x611)         /**< SPI Burst Read Access by Function. See CVA. */
#define ADE9178_REG_APF_1                                            (0x612)         /**< SPI Burst Read Access by Function. See APF. */
#define ADE9178_REG_BPF_1                                            (0x613)         /**< SPI Burst Read Access by Function. See BPF. */
#define ADE9178_REG_CPF_1                                            (0x614)         /**< SPI Burst Read Access by Function. See CPF. */
#define ADE9178_REG_AVRMSONE_1                                       (0x615)         /**< SPI Burst Read Access by Function. See AVRMSONE. */
#define ADE9178_REG_BVRMSONE_1                                       (0x616)         /**< SPI Burst Read Access by Function. See BVRMSONE. */
#define ADE9178_REG_CVRMSONE_1                                       (0x617)         /**< SPI Burst Read Access by Function. See CVRMSONE. */
#define ADE9178_REG_AIRMSONE_1                                       (0x618)         /**< SPI Burst Read Access by Function. See AIRMSONE. */
#define ADE9178_REG_BIRMSONE_1                                       (0x619)         /**< SPI Burst Read Access by Function. See BIRMSONE. */
#define ADE9178_REG_CIRMSONE_1                                       (0x61a)         /**< SPI Burst Read Access by Function. See CIRMSONE. */
#define ADE9178_REG_AUX0RMSONE_1                                     (0x61b)         /**< SPI Burst Read Access by Function. See AUX0RMSONE. */
#define ADE9178_REG_AUX1RMSONE_1                                     (0x61c)         /**< SPI Burst Read Access by Function. See AUX1RMSONE. */
#define ADE9178_REG_AUX2RMSONE_1                                     (0x61d)         /**< SPI Burst Read Access by Function. See AUX2RMSONE. */
#define ADE9178_REG_AUX3RMSONE_1                                     (0x61e)         /**< SPI Burst Read Access by Function. See AUX3RMSONE. */
#define ADE9178_REG_AUX4RMSONE_1                                     (0x61f)         /**< SPI Burst Read Access by Function. See AUX4RMSONE. */
#define ADE9178_REG_AUX5RMSONE_1                                     (0x620)         /**< SPI Burst Read Access by Function. See AUX5RMSONE. */
#define ADE9178_REG_VSUMRMSONE_1                                     (0x621)         /**< SPI Burst Read Access by Function. See VSUMRMSONE. */
#define ADE9178_REG_VABRMSONE_1                                      (0x622)         /**< SPI Burst Read Access by Function. See VABRMSONE. */
#define ADE9178_REG_VBCRMSONE_1                                      (0x623)         /**< SPI Burst Read Access by Function. See VBCRMSONE. */
#define ADE9178_REG_VACRMSONE_1                                      (0x624)         /**< SPI Burst Read Access by Function. See VACRMSONE. */
#define ADE9178_REG_AVRMSHALF_1                                      (0x625)         /**< SPI Burst Read Access by Function. See AVRMSHALF. */
#define ADE9178_REG_BVRMSHALF_1                                      (0x626)         /**< SPI Burst Read Access by Function. See BVRMSHALF. */
#define ADE9178_REG_CVRMSHALF_1                                      (0x627)         /**< SPI Burst Read Access by Function. See CVRMSHALF. */
#define ADE9178_REG_AIRMSHALF_1                                      (0x628)         /**< SPI Burst Read Access by Function. See AIRMSHALF. */
#define ADE9178_REG_BIRMSHALF_1                                      (0x629)         /**< SPI Burst Read Access by Function. See BIRMSHALF. */
#define ADE9178_REG_CIRMSHALF_1                                      (0x62a)         /**< SPI Burst Read Access by Function. See CIRMSHALF. */
#define ADE9178_REG_AUX0RMSHALF_1                                    (0x62b)         /**< SPI Burst Read Access by Function. See AUX0RMSHALF. */
#define ADE9178_REG_AUX1RMSHALF_1                                    (0x62c)         /**< SPI Burst Read Access by Function. See AUX1RMSHALF. */
#define ADE9178_REG_AUX2RMSHALF_1                                    (0x62d)         /**< SPI Burst Read Access by Function. See AUX2RMSHALF. */
#define ADE9178_REG_AUX3RMSHALF_1                                    (0x62e)         /**< SPI Burst Read Access by Function. See AUX3RMSHALF. */
#define ADE9178_REG_AUX4RMSHALF_1                                    (0x62f)         /**< SPI Burst Read Access by Function. See AUX4RMSHALF. */
#define ADE9178_REG_AUX5RMSHALF_1                                    (0x630)         /**< SPI Burst Read Access by Function. See AUX5RMSHALF. */
#define ADE9178_REG_AVRMS_2                                          (0x631)         /**< SPI Burst Read Access by Phase. See AVRMS. */
#define ADE9178_REG_AIRMS_2                                          (0x632)         /**< SPI Burst Read Access by Phase. See AIRMS. */
#define ADE9178_REG_AWATT_2                                          (0x633)         /**< SPI Burst Read Access by Phase. See AWATT. */
#define ADE9178_REG_AVA_2                                            (0x634)         /**< SPI Burst Read Access by Phase. See AVA. */
#define ADE9178_REG_APF_2                                            (0x635)         /**< SPI Burst Read Access by Phase. See APF. */
#define ADE9178_REG_AVRMSONE_2                                       (0x636)         /**< SPI Burst Read Access by Phase. See AVRMSONE. */
#define ADE9178_REG_AIRMSONE_2                                       (0x637)         /**< SPI Burst Read Access by Phase. See AIRMSONE. */
#define ADE9178_REG_AVRMSHALF_2                                      (0x638)         /**< SPI Burst Read Access by Phase. See AVRMSHALF. */
#define ADE9178_REG_AIRMSHALF_2                                      (0x639)         /**< SPI Burst Read Access by Phase. See AIRMSHALF. */
#define ADE9178_REG_BVRMS_2                                          (0x63a)         /**< SPI Burst Read Access by Phase. See BVRMS. */
#define ADE9178_REG_BIRMS_2                                          (0x63b)         /**< SPI Burst Read Access by Phase. See BIRMS. */
#define ADE9178_REG_BWATT_2                                          (0x63c)         /**< SPI Burst Read Access by Phase. See BWATT. */
#define ADE9178_REG_BVA_2                                            (0x63d)         /**< SPI Burst Read Access by Phase. See BVA. */
#define ADE9178_REG_BPF_2                                            (0x63e)         /**< SPI Burst Read Access by Phase. See BPF. */
#define ADE9178_REG_BVRMSONE_2                                       (0x63f)         /**< SPI Burst Read Access by Phase. See BVRMSONE. */
#define ADE9178_REG_BIRMSONE_2                                       (0x640)         /**< SPI Burst Read Access by Phase. See BIRMSONE. */
#define ADE9178_REG_BVRMSHALF_2                                      (0x641)         /**< SPI Burst Read Access by Phase. See BVRMSHALF. */
#define ADE9178_REG_BIRMSHALF_2                                      (0x642)         /**< SPI Burst Read Access by Phase. See BIRMSHALF. */
#define ADE9178_REG_CVRMS_2                                          (0x643)         /**< SPI Burst Read Access by Phase. See CVRMS. */
#define ADE9178_REG_CIRMS_2                                          (0x644)         /**< SPI Burst Read Access by Phase. See CIRMS. */
#define ADE9178_REG_CWATT_2                                          (0x645)         /**< SPI Burst Read Access by Phase. See CWATT. */
#define ADE9178_REG_CVA_2                                            (0x646)         /**< SPI Burst Read Access by Phase. See CVA. */
#define ADE9178_REG_CPF_2                                            (0x647)         /**< SPI Burst Read Access by Phase. See CPF. */
#define ADE9178_REG_CVRMSONE_2                                       (0x648)         /**< SPI Burst Read Access by Phase. See CVRMSONE. */
#define ADE9178_REG_CIRMSONE_2                                       (0x649)         /**< SPI Burst Read Access by Phase. See CIRMSONE. */
#define ADE9178_REG_CVRMSHALF_2                                      (0x64a)         /**< SPI Burst Read Access by Phase. See CVRMSHALF. */
#define ADE9178_REG_CIRMSHALF_2                                      (0x64b)         /**< SPI Burst Read Access by Phase. See CIRMSHALF. */
#define ADE9178_REG_AUX0RMS_2                                        (0x64c)         /**< SPI Burst Read Access by Phase. See AUX0RMS. */
#define ADE9178_REG_AUX0RMSONE_2                                     (0x64d)         /**< SPI Burst Read Access by Phase. See AUX0RMSONE. */
#define ADE9178_REG_AUX0RMSHALF_2                                    (0x64e)         /**< SPI Burst Read Access by Phase. See AUX0RMSHALF. */
#define ADE9178_REG_AUX1RMS_2                                        (0x64f)         /**< SPI Burst Read Access by Phase. See AUX1RMS. */
#define ADE9178_REG_AUX1RMSONE_2                                     (0x650)         /**< SPI Burst Read Access by Phase. See AUX1RMSONE. */
#define ADE9178_REG_AUX1RMSHALF_2                                    (0x651)         /**< SPI Burst Read Access by Phase. See AUX1RMSHALF. */
#define ADE9178_REG_AUX2RMS_2                                        (0x652)         /**< SPI Burst Read Access by Phase. See AUX2RMS. */
#define ADE9178_REG_AUX2RMSONE_2                                     (0x653)         /**< SPI Burst Read Access by Phase. See AUX2RMSONE. */
#define ADE9178_REG_AUX2RMSHALF_2                                    (0x654)         /**< SPI Burst Read Access by Phase. See AUX2RMSHALF. */
#define ADE9178_REG_AUX3RMS_2                                        (0x655)         /**< SPI Burst Read Access by Phase. See AUX3RMS. */
#define ADE9178_REG_AUX3RMSONE_2                                     (0x656)         /**< SPI Burst Read Access by Phase. See AUX3RMSONE. */
#define ADE9178_REG_AUX3RMSHALF_2                                    (0x657)         /**< SPI Burst Read Access by Phase. See AUX3RMSHALF. */
#define ADE9178_REG_AUX4RMS_2                                        (0x658)         /**< SPI Burst Read Access by Phase. See AUX4RMS. */
#define ADE9178_REG_AUX4RMSONE_2                                     (0x659)         /**< SPI Burst Read Access by Phase. See AUX4RMSONE. */
#define ADE9178_REG_AUX4RMSHALF_2                                    (0x65a)         /**< SPI Burst Read Access by Phase. See AUX4RMSHALF. */
#define ADE9178_REG_AUX5RMS_2                                        (0x65b)         /**< SPI Burst Read Access by Phase. See AUX5RMS. */
#define ADE9178_REG_AUX5RMSONE_2                                     (0x65c)         /**< SPI Burst Read Access by Phase. See AUX5RMSONE. */
#define ADE9178_REG_AUX5RMSHALF_2                                    (0x65d)         /**< SPI Burst Read Access by Phase. See AUX5RMSHALF. */
#define ADE9178_REG_VSUMRMSONE_2                                     (0x65e)         /**< SPI Burst Read Access by Function. See VSUMRMSONE. */
#define ADE9178_REG_VABRMSONE_2                                      (0x65f)         /**< SPI Burst Read Access by Function. See VABRMSONE. */
#define ADE9178_REG_VBCRMSONE_2                                      (0x660)         /**< SPI Burst Read Access by Function. See VBCRMSONE. */
#define ADE9178_REG_VACRMSONE_2                                      (0x661)         /**< SPI Burst Read Access by Function. See VACRMSONE. */
#endif /* __ADE9178_H__*/

/**
 * @}
 */
