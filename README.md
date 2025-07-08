<p align="center">
    <img src="docs/diagrams/adi_logo.png" width="250" alt="ADI Logo" /><br>
</p>

# Energy ADE Registers

A collection of header files and example projects for communicating with Analog Devices energy metering ICs.

---

- [Introduction](#introduction)
- [Directory Structure](#directory-structure)
- [IC Folder Structure](#ic-folder-structure)
- [Building, Running and Debugging Examples](#building-running-and-debugging-examples)
- [License](#license)
- [Contributing](#contributing)
- [Contact](#contact)
- [References](#references)

## Introduction

**Energy ADE Registers** provides header files and example projects to communicate with Analog Devices energy metering ICs. The supported ICs are:
| IC                  | Header Files | Examples | Readme                                      |
|---------------------|:------------:|:--------:|----------------------------------------------|
| ADE9178             |     Yes      |   Yes    | [Readme](ade9178/readme.md)                  |
| ADE911x, ADE910x    |     Yes      |   Yes    | [Readme](ade91xx/readme.md)                  |
| ADEMA12x            |     Yes      |   Yes    | [Readme](adema12x/readme.md)                 |

This repository is intended for developers working with ADI energy metering ICs and evaluation boards.

## Directory Structure

```
├── ade9178         # Header files and example projects for ADE9178 IC
├── ade91xx         # Header files and example projects for ADE911x and ADE910x ICs
├── adema12x        # Header files and example projects for ADEMA12x ICs
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


## License

This project is licensed under the [Apache 2.0 License](LICENSE).

## Contributing

We welcome contributions! Please see [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

## Contact

For questions or support, please open an issue on the [GitHub repository](https://github.com/analogdevicesinc/energy-ade-registers/issues) 
