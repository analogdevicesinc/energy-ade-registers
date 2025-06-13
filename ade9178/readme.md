# ADE9178 Example

This project provides a basic example of communicating with the [ADE9178 IC](https://www.analog.com/en/products/ade9178.html) using the [MAX32670 MCU](https://www.maximintegrated.com/en/products/microcontrollers/MAX32670.html). It demonstrates simple read and write operations to the ADE9178 and ADE91xx ADCs. The example configures the necessary peripherals—GPIO, SPI, and UART—to establish reliable communication with the ADE9178.

For additional information, refer to the [ADE9178 datasheet (PDF)](https://www.analog.com/media/en/technical-documentation/data-sheets/ade9178.pdf). This project has been validated on [ADE9178 EVAL](https://www.analog.com/en/resources/evaluation-hardware-and-software/evaluation-boards-kits/eval-ade9178.html).

## Table of Contents

- [Hardware Setup and Connections](#hardware-setup-and-connections)
- [Required Software](#required-software)
- [BSP Functions](#bsp-functions)
- [Building and Debugging the Example](#building-and-debugging-the-example)
- [Flashing the Hex File](#flashing-the-hex-file)
- [Debugging](#debugging)
- [References](#references)

## Hardware Setup and Connections

Ensure the following connections and configurations:

- **SPI**: Connect to the ADE9178.
  - SPI mode: 3 (CPOL = 1, CPHA = 1)
  - Speed: > 6 MHz
- **GPIOs**:
  - 2 GPIOs (input) for ADE9178 communication protocol: [`HOST_RDY`, `HOST_ERR`]
  - 4 GPIOs (input) for interrupt handling: [`IRQ0`, `IRQ1`, `IRQ2`, `IRQ3`]
  - 2 GPIOs (input) for monitoring CF pulses: [`CF1`, `CF2`]
  - 1 GPIO (output) to reset the ADCs and ADE9178
- **Host UART**: Used by the host MCU to transmit data to the PC.

## Required Software

- [MAXIM Drivers (v2024_10)](https://github.com/analogdevicesinc/msdk/tree/v2024_10) — Required for building the project using CMake.

## BSP functions

The following Board Support Package (BSP) functions and function pointers are used in this example. Users must implement these functions to ensure the example builds and operates correctly:

- EvbInit
- EvbResetAde
- EvbStartAdeSpiTx
- EvbStartAdeSpiRx
- EvbEnableAllGPIOIrq
- EvbGetPinState
- EvbStartHostUartTx
- pfGpioCallback

## Building and Debugging the Example

Refer to the [repository readme](../README.md) for detailed instructions to build and run the example using CMake and Visual Studio Code.

## Flashing the Hex File

The `.hex` files can be flashed from the command line onto the MAX32670 board using the OpenOCD tool provided with [MaximSDK](https://github.com/analogdevicesinc/msdk/tree/v2024_10):

1. **Obtain the Debug Adapter Unique ID:**
   - Connect your board to the PC.
   - Open File Explorer and navigate to the DAPLINK drive.
   - Open `DETAILS.TXT` and copy the Unique ID.

2. **Flash the Hex File:**
   - Open a terminal or command prompt.
   - Run the following command, replacing `<YOUR_UNIQUE_ID>` and the hex file path as appropriate:

     ```sh
     "C:\MaximSDK\Tools\OpenOCD\openocd.exe" -s "C:\MaximSDK\Tools\OpenOCD\scripts" -f interface\cmsis-dap.cfg -f target\max32670.cfg -c "cmsis_dap_serial <YOUR_UNIQUE_ID>; program \"C:/Example/ade9178_example.hex\" reset exit"
     ```

## Debugging

For debugging using VS Code, create an environment variable `MAXIM_PATH` that points to the SDK path (e.g. `C:\MaximSDK\`). Use the VS Code debug sidebar and launch configurations as described in the main repository readme.

## References

- [ADE9178 Product Page](https://www.analog.com/en/products/ade9178.html)
- [ADE9178 Datasheet (PDF)](https://www.analog.com/media/en/technical-documentation/data-sheets/ade9178.pdf)
- [ADE9178 EVAL](https://www.analog.com/en/resources/evaluation-hardware-and-software/evaluation-boards-kits/eval-ade9178.html)
- [MAX32670 Product Page](https://www.maximintegrated.com/en/products/microcontrollers/MAX32670.html)
- [MaximSDK](https://github.com/analogdevicesinc/msdk/tree/v2024_10)