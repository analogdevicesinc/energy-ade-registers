# ADEMA12x Example

## Table of Contents

- [Introduction](#introduction)
- [Example](#example)
  - [Hardware Setup and Connections](#hardware-setup-and-connections)
  - [Building, Running, and Debugging Examples](#building-running-and-debugging-examples)
  - [Board Support Functions](#board-support-functions)

## Introduction

This folder contains the register definitions and example code required to communicate with the ADEMA127 and ADEMA124 ICs. Header files are located in the [include](include) directory. ADI also provides an [ADC Service](https://github.com/analogdevicesinc/energy-adc-service) with higher levels of abstraction and an ACE evaluation firmware. It is recommended to use that for quick evaluation and development, and use direct register access for finer control.

The ADEMA127 and ADEMA124 ICs use a command and response protocol over SPI for communication with host devices. Use the following configuration for communicating with the ICs:

- **SPI**
  - SPI mode: 3 (CPOL = 1, CPHA = 1), Clock < 22MHz
- **GPIOs**:
  - 1 GPIO (output) active low to reset the ADC
  - 1 GPIO (input) active low for ADC DREADY from ADC

The following structures are defined to populate command frames properly:

- `ADI_ADC_CMD`
- `ADI_ADC_CMD_LONG_FRAME_ADEMA124`
- `ADI_ADC_CMD_LONG_FRAME_ADEMA127`
- `ADI_ADC_CMD_SHORT_FRAME_ADEMA12x`

The following structures are defined to extract responses easily:

- `ADI_ADC_CMD_RESPONSE`
- `ADI_ADC_RESPONSE_LONG_FRAME_ADEMA124`
- `ADI_ADC_RESPONSE_LONG_FRAME_ADEMA127`
- `ADI_ADC_RESPONSE_SHORT_FRAME_ADEMA12x`

For every SPI frame, a command is received and the response to the previous command is sent to the MCU.

## Example

The example provided demonstrates basic communication with the ADEMA127 and ADEMA124, using the ADEMA127 IEC 3Phase Meter board and STM32H5 APP MCU board. However, the example sequence is applicable to ADEMA124 ICs as well.

- Initializes the evaluation board by setting up peripherals and performing a board reset.
- Performs reading from and writing to the ADC scratch register.
- Performs reading from and writing to the ADC datapath configuration register.
- Performs reading from and writing to the ADC DSP RAM.
- Reads samples.

### Hardware Setup and Connections

Connect the STM32H573 APP MCU board to the ADEMA127 IEC 3Phase Meter board using the on-board connector.

### Building, Running, and Debugging Examples

See the [Board readme](https://github.com/analogdevicesinc/energy-board-support/blob/main/stm/app_mcu_h5/readme.md) for instructions on building, running, and debugging the example.

### Board Support Functions

The following functions from the [board_support repo](https://github.com/analogdevicesinc/energy-board-support/tree/main/generic/include) are used in this example. Users must implement these functions to ensure the example builds and operates correctly:

- `EvbInit`
- `EvbInitMessageBuffer`
- `EvbResetAdcs`
- `EvbDelayMs`
- `EvbEnableDreadyIrq`
- `EvbAdeSpiTransceive`
- `EvbFlushMessages`
