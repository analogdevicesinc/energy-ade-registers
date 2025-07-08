# ADE911x and ADE910x Registers

## Table of Contents

- [Introduction](#introduction)
- [Example](#example)
  - [Hardware Setup and Connections](#hardware-setup-and-connections)
  - [Required Software](#required-software)
  - [Building, Running, and Debugging Examples](#building-running-and-debugging-examples)
  - [Board Support Functions](#board-support-functions)
- [References](#references)


## Introduction

This folder contains the register definitions and example code required to communicate with the ADE911x and ADE910x ICs. Header files are located in the [include](include) directory. ADI also provides a [ADC Service](https://github.com/analogdevicesinc/energy-adc-service) with higher levels of abstraction. It is recommended to use that for quick evaluation and development, and use direct register access for finer control.

The ADE910x and ADE911x ICs uses a command and response protocol over SPI for communication with host devices. Use the following configuraton for communciating to the ICs

- **SPI**
  - SPI mode: 3 (CPOL = 1, CPHA = 1)  Clock < 22MHz
- **GPIOs**:
  - 1 GPIO (output) active low to reset the ADC
  - 1 GPIO (input) active low for ADC DREADY from ADC

The following structures are defined to populate command frame properly

- ADI_ADC_CMD
- ADI_ADC_CMD_LONG_FRAME_ADE91XX
- ADI_ADC_CMD_SHORT_FRAME_ADE91XX

Following structures are defined to extract responses easily.

- ADI_ADC_CMD_RESPONSE
- ADI_ADC_RESPONSE_LONG_FRAME_ADE91XX
- ADI_ADC_RESPONSE_SHORT_FRAME_ADE91XX

For every SPI frame, command is received and response to the previous command is sent to the MCU.

## Example

The example provided demonstrates basic communication with the [ADE9113](https://www.analog.com/en/products/ade9113.html), using [EVAL-ADE9113](https://www.analog.com/en/resources/evaluation-hardware-and-software/evaluation-boards-kits/eval-ade9113.html) and STM32H5 APP MCU board. However the example sequence is applicable to ADE9103 and ADE9112 ICs as well.

- Initializes the evaluation board by setting up peripherals and performing a board reset.
- Perform reading from and writing to ADC register.
- Read samples.

### Hardware Setup and Connections

Connect STM32H573 APP MCU board to EVAL-ADE9113 as follows.
- CS1 to P1A-1
- MISO1 to P1A-2
- MOSI to P1A-3
- SCLK1 to P7-1
- DRADYB to P7-7
- GND to GND
- VCC to VCC


### Building, Running and Debugging Examples

- See the [bsp readme](https://github.com/analogdevicesinc/energy-board-support/blob/main/stm/app_mcu_h5/readme.md) for instructions on building, running and debugging the example.

- After successfully building the example, refer to the "Flashing the Hex File" section in the same README to flash the generated hex file onto the board. Once flashing is complete, you should see output messages on the terminal.

### Board Support Functions

The following functions from [board_support repo](https://github.com/analogdevicesinc/energy-board-support/tree/main/generic/include) are used in this example. Users must implement these functions to ensure the example builds and operates correctly:

- `EvbInit`
- `EvbInitMessageBuffer`
- `EvbResetAdcs`
- `EvbDelayMs`
- `EvbEnableDreadyIrq`
- `EvbAdeSpiTransceive`
- `EvbFlushMessages`


## References

- [ADE911x and ADE9103 Product Page](https://www.analog.com/en/products/ade9113.html)
- [ADE911x and ADE9103 Datasheet (PDF)](https://www.analog.com/media/en/technical-documentation/data-sheets/ade9103-ade9112-ade9113.pdf)