/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file      app_cfg.h
 * @brief     Application configuration file.
 * @{
 */

#ifndef __APP_CFG_H__
#define __APP_CFG_H__

#ifdef __cplusplus
extern "C" {
#endif

/*=============  D E F I N I T I O N S  =============*/
/** Priority level of ADC SPI interrupt */
#define APP_CFG_ADC_SPI_INTR_PRIORITY 0x1
/** Priority level of FRAM SPI interrupt */
#define APP_CFG_FRAM_SPI_INTR_PRIORITY 0x2
/** Prioirty level of DREADY GPIO interrupt */
#define APP_CFG_DREADY_INTR_PRIORITY 0x0
/** Priority level of timer interrupt */
#define APP_CFG_CF_TIMER_INTR_PRIORITY 0x3
/** Enable UART */
#define APP_CFG_ENABLE_HOST_UART 1
/** Enable GPIO */
#define APP_CFG_ENABLE_GPIO 1
/** UART speed */
#define APP_CFG_HOST_UART_SPEED 115200
/** Enable Spi*/
#define APP_CFG_ENABLE_SPI 1
/**  ADC SPI mode*/
#define APP_CFG_ADC_SPI_MODE 3
/** Priority level of ADC UART interrupt */
#define APP_CFG_UART_INTR_PRIORITY 4

#ifdef __cplusplus
}
#endif

#endif /* __APP_CFG_H__ */

/**
 * @}
 */