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

if(NOT DEFINED BOARD_SUPPORT_DIR)
# board_support directory
set(BOARD_SUPPORT_DIR ${PROJECT_ROOT_DIR}/board_support)
endif()

set(EVB "app_mcu_h5" CACHE STRING "name of evaluation board")
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type")

#Base directory for HAL Drivers
set(STM32H5_HAL_DRIVERS C:/STM32Cube/Repository/STM32Cube_FW_H5_V1.3.0/Drivers/STM32H5xx_HAL_Driver CACHE
PATH "Path to STM32CubeH5 directory")

# Include wrapper toolchain file
include(${BOARD_SUPPORT_DIR}/cmake/toolchain_wrapper.cmake)

# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Enable CMake support for ASM and C languages
enable_language(C ASM)

# Core project settings
project(${CMAKE_PROJECT_NAME})
message("Build type: " ${CMAKE_BUILD_TYPE})

include(CMakePrintHelpers)
cmake_print_variables(EVB)
cmake_print_variables(STM32H5_HAL_DRIVERS)
add_compile_options(-Wcast-align)

# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME})

set(TARGET_EXECUTABLE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE}/${CMAKE_PROJECT_NAME})
cmake_print_variables(TARGET_EXECUTABLE_PATH)

# Add boardS_support sources
add_subdirectory(
  ${BOARD_SUPPORT_DIR}
  ${CMAKE_BINARY_DIR}/board_support
)

set(APP_SRC
    ${PROJECT_ROOT_DIR}/ade91xx/examples/frame_format_example.c
    ${PROJECT_ROOT_DIR}/crc/source/ade_crc.c
)
set(APP_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/../../include
         ${PROJECT_ROOT_DIR}/ade91xx/examples
		 ${PROJECT_ROOT_DIR}/include
         ${PROJECT_ROOT_DIR}/crc/include)

# Add sources to executable
target_sources(${CMAKE_PROJECT_NAME} PRIVATE
    # ADC example sources
    ${APP_SRC}
)

# Add include paths
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${APP_INCLUDES})

# Add linked libraries
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE board_support)

# Create hex file
add_custom_command(TARGET ${CMAKE_PROJECT_NAME}
		POST_BUILD
		COMMAND arm-none-eabi-objcopy -O ihex ${CMAKE_PROJECT_NAME}.elf ${CMAKE_PROJECT_NAME}.hex
)
