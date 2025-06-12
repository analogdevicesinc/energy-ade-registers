<p align="center">
    <img src="docs/diagrams/adi_logo.png" width="250" alt="ADI Logo" /><br>
</p>

# Energy ADE Registers

A collection of header files and example projects for communicating with Analog Devices energy metering ICs.

---

- [Introduction](#introduction)
- [Directory Structure](#directory-structure)
- [IC Folder Structure](#ic-folder-structure)
- [Building Examples](#building-examples)
    - [Command Line with CMake](#command-line-with-cmake)
    - [VS Code Workspace](#vs-code-workspace)
- [License](#license)
- [Contributing](#contributing)
- [Contact](#contact)
- [References](#references)

## Introduction

**Energy ADE Registers** provides header files and example projects to communicate with Analog Devices energy metering ICs. The supported ICs are:

| IC                  | Header Files | Examples |
|---------------------|:------------:|:--------:|
| ADE9178             |     Yes      |   Yes    |
| ADE911x, ADE910x    |     Yes      |   No     |

This repository is intended for developers working with ADI energy metering ICs and evaluation boards.

## Directory Structure

```
├── ade9178         # Header files and example projects for ADE9178 IC
├── ade91xx         # Header files for ADE911x and ADE910x ICs
├── board_support   # Submodule - Functions to support evaluation board
├── docs            # Documentation, diagrams, and release notes
├── crc             # CRC-8 and CRC-16 calculation utilities
```

## IC Folder Structure

Each energy metering IC has a dedicated folder named after the IC. The `include` folder contains header files for register access, which can be included in any C/C++ project. Refer to the IC datasheet for register details. Example code is provided for supported ICs to demonstrate register access.

```
product/
├── examples/                   # Example projects (if supported)
│   ├── projects/
│   │   ├── vscode/             # VS Code workspace and related files
│   │   ├── CMakeLists.txt      # CMake build configuration
│   │   └── CMakePresets.json   # CMake presets for build configuration
│   └── source/                 # Example source files
├── include/                    # IC-specific header files
├── readme.md                   # Instructions for IC header files and examples
```

## Building Examples

A `CMakeLists.txt` is provided to build the examples. Install the following tools and add them to your PATH:

- [CMake](https://cmake.org/download) (version 3.22 or higher)
- `make` (e.g., via [MinGW](https://sourceforge.net/projects/mingw/) for Windows)

You will also need the appropriate SDK for the MCU on your evaluation board, and a compatible compiler accessible to CMake.

### Command Line with CMake

1. Open a terminal in the product directory containing the `CMakeLists.txt` file.
2. Configure and build the project (output will be in the `build/Release` directory):

    ```sh
    cmake -S . -B build/Release -G "MinGW Makefiles" -DSDK_PATH=/path/to/sdk
    cmake --build build/Release
    ```

    You can specify additional SDK paths using the `-D` option. Refer to the relevant `CMakeLists.txt` files for available variables and configuration options.

### VS Code Workspace

The repository includes a pre-configured VS Code workspace for easy building and debugging.

1. The default CMake preset is loaded automatically when you open the workspace.
2. If not, open the command palette, search for `CMake: Select Configure Preset`, and choose the appropriate preset.
3. Use the command palette to run `Tasks: Run Task` and select the desired build, clean, or flash task.

#### Debugging

1. Open the "Run and Debug" sidebar in VS Code.
2. Click "Start Debugging" to launch the debugger and step through your code or reset the device as needed.

## License

This project is licensed under the [Apache 2.0 License](LICENSE).

## Contributing

We welcome contributions! Please see [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

## Contact

For questions or support, please open an issue on the [GitHub repository](https://github.com/adi-innersource/emfrm-ade-registers/issues) or contact the maintainers listed in the repository.

## References

- [CMake Documentation](https://cmake.org/documentation/)