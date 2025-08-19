# ADEMA12x Example

## Table of Contents

- [Introduction](#introduction)
- [Example](#example)
  - [Hardware Setup and Connections](#hardware-setup-and-connections)
  - [Required Software](#required-software)
  - [Building, Running, and Debugging Examples](#building-running-and-debugging-examples)
  - [Board Support Functions](#board-support-functions)
- [References](#references)

## Introduction

This folder contains the register definitions and example code required to communicate with the ADEMA127 and ADEMA124 ICs. Header files are located in the [include](include) directory. ADI also provides an [ADC Service](https://github.com/analogdevicesinc/energy-adc-service) with higher levels of abstraction and ACE evaluation firmware. It is recommended to use that for quick evaluation and development, and use direct register access for finer control.

The ADEMA127 and ADEMA124 ICs use a command and response protocol over SPI for communication with host devices. Use the following configuration for communicating with the ICs:

- **SPI**
  - Mode: 3 (CPOL = 1, CPHA = 1), Clock < 22 MHz
- **GPIOs**
  - 1 GPIO (output), active low, to reset the ADC
  - 1 GPIO (input), active low, for ADC DREADY from ADC

The following structures are defined to populate the command frame properly:

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

The example provided demonstrates basic communication with the [ADEMA127](https://www.analog.com/en/products/ADEMA127.html) using the [EVAL-ADEMA127](https://www.analog.com/en/resources/evaluation-hardware-and-software/evaluation-boards-kits/eval-adema127.html#eb-overview). However, the example sequence is applicable to and [ADEMA124](https://www.analog.com/en/products/adema124.html) as well.

- Initializes the evaluation board by setting up peripherals and performing a board reset.
- Performs reading from and writing to the ADC scratch register.
- Performs reading from and writing to the ADC datapath configuration register.
- Performs reading from and writing to the ADC DSP RAM.
- Reads samples.

### Hardware Setup and Connections

- [EVAL-ADEMA127](https://www.analog.com/en/resources/evaluation-hardware-and-software/evaluation-boards-kits/eval-adema127.html#eb-overview)


### Building, Running, and Debugging Examples

- `CMakeLists.txt` for the example project is present in the [projects](examples/projects/) folder.
- A [VS Code workspace](examples/projects/frame_format_example.code-workspace) is also given as part of the example.
- See the [board support readme](https://github.com/analogdevicesinc/energy-board-support/blob/main/stm/app_mcu_h5/readme.md) for instructions on building, running, and debugging the example.

### Board Support Functions

The following functions from the [board_support repo](https://github.com/analogdevicesinc/energy-board-support/tree/main/generic/include) are used in this example. Users must implement these functions to ensure the example builds and operates correctly:

- `EvbInit`
- `EvbInitMessageBuffer`
- `EvbResetAdcs`
- `EvbDelayMs`
- `EvbEnableDreadyIrq`
- `EvbAdeSpiTransceive`
- `EvbFlushMessages`

## References

- [EVAL-ADEMA127](https://www.analog.com/en/resources/evaluation-hardware-and-software/evaluation-boards-kits/eval-adema127.html#eb-overview)
- [ADEMA127 Datasheet and Product Info ](https://www.analog.com/en/products/ADEMA127.html)
- [ADEMA124 Datasheet and Product Info ](https://www.analog.com/en/products/adema124.html)
