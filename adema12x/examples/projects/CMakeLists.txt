cmake_minimum_required(VERSION 3.22)

#
# This file is generated only once,
# and is not re-generated if converter is called multiple times.
#
# User is free to modify the file as much as necessary
#

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

# Set the project name
set(CMAKE_PROJECT_NAME frame_format_example)

if(NOT DEFINED PROJECT_ROOT_DIR)
# Base directory for SMLIB software
set(PROJECT_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../..)
endif()

set(BUILD_TARGET "stm32h573zi" CACHE STRING "Target")
set(CMAKE_BUILD_TYPE "Build mode" CACHE STRING "Debug")
set(TOOLCHAIN_PATH "C:/ST/STM32CubeCLT_1.16.0/GNU-tools-for-STM32/bin")
set(TOOLCHAIN_PREFIX "${TOOLCHAIN_PATH}/arm-none-eabi-")
set(TARGET_FLAGS "${TARGET_FLAGS} -mcpu=cortex-m33 -mfpu=fpv4-sp-d16 -mfloat-abi=hard ")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${TARGET_FLAGS}")
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} ${TARGET_FLAGS}")

#Base directory for HAL Drivers
set(STM32H5_HAL_DRIVERS C:/STM32Cube/Repository/STM32Cube_FW_H5_V1.3.0/Drivers/STM32H5xx_HAL_Driver CACHE
PATH "Path to STM32CubeH5 directory")

# Include toolchain file
include(${PROJECT_ROOT_DIR}/board_support/cmake/gcc-arm-none-eabi.cmake)

# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Enable CMake support for ASM and C languages
enable_language(C ASM)

# Core project settings
project(${CMAKE_PROJECT_NAME})
message("Build type: " ${CMAKE_BUILD_TYPE})

include(CMakePrintHelpers)
cmake_print_variables(BUILD_TARGET)
cmake_print_variables(STM32H5_HAL_DRIVERS)
add_compile_options(-Wcast-align)

# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME})

set(TARGET_EXECUTABLE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE}/${CMAKE_PROJECT_NAME})
cmake_print_variables(TARGET_EXECUTABLE_PATH)

if(NOT DEFINED BOARD_SUPPORT_DIR)
# BSP directory in firmware_services submodule
set(BOARD_SUPPORT_DIR ${PROJECT_ROOT_DIR}/board_support)
endif()

# Add boardS_support sources
add_subdirectory(
  ${PROJECT_ROOT_DIR}/board_support
  ${CMAKE_BINARY_DIR}/board_support
)

set(APP_SRC ${PROJECT_ROOT_DIR}/adema12x/examples/frame_format_example.c
            ${PROJECT_ROOT_DIR}/crc/source/ade_crc.c)
set(APP_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/../../include
            ${PROJECT_ROOT_DIR}/adema12x/examples
			${PROJECT_ROOT_DIR}/include
            ${PROJECT_ROOT_DIR}/crc/include)

# Add sources to executable
target_sources(${CMAKE_PROJECT_NAME} PRIVATE
    # ADC example sources
    ${APP_SRC}
)

# Add include paths
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${APP_INCLUDES})

file(GLOB STM32_HAL_FILES "${STM32H5_HAL_DRIVERS}/Src/*.c")
set_source_files_properties(
  ${STM32_HAL_FILES}
  PROPERTIES
  COMPILE_FLAGS "-w"
)

if(BUILD_TARGET MATCHES "stm32h573zi")
  set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -T \"${BOARD_SUPPORT_DIR}/stm/app_mcu_h5/stm_gen_code/STM32H573xx_FLASH.ld\"")
elseif(BUILD_TARGET MATCHES "stm32h563zi")
  set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -T \"${BOARD_SUPPORT_DIR}/stm/nucleo_h563zi_master/stm_gen_code/STM32H563ZITX_FLASH.ld\"")
endif()

# Add project symbols (macros)
target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE
    USE_HAL_DRIVER
    STM32H573xx
    $<$<CONFIG:Debug>:DEBUG>
    # Add user defined symbols
    STM32H573ZI
    _USE_STD_INT_TYPES
    USE_PHY_COM_PORT
    NUCLEO_H563
	BUILD_TARGET
)

# Add linked libraries
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE board_support)

# Create hex file
add_custom_command(TARGET ${CMAKE_PROJECT_NAME}
		POST_BUILD
		COMMAND arm-none-eabi-objcopy -O ihex ${CMAKE_PROJECT_NAME}.elf ${CMAKE_PROJECT_NAME}.hex
)
