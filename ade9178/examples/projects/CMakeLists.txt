cmake_minimum_required(VERSION 3.22)

add_definitions(-DTARGET_REV=0x4131)
add_definitions(-DTARGET=MAX32670)

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(USE_DUMMY_EVB "Use dummy EVB" OFF)
# Base directory for METEX Directory
set(ADE9178_ROOT_DIR ${CMAKE_CURRENT_LIST_DIR}/../../)
# Define MaximSDK path if not already set
set(MaximSDK C:/MaximSDK CACHE PATH "Path to MaximSDK directory")

# Set Target
set(BUILD_TARGET "max32670" CACHE STRING "Target")
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build mode")


if(NOT USE_DUMMY_EVB)
set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -u _printf_float -u _scanf_float")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -specs=nosys.specs")
# Explicitly set the toolchain path to avoid conflicts
set(TOOLCHAIN_PATH "${MaximSDK}/Tools/GNUTools/10.3/bin")
set(TOOLCHAIN_PREFIX "${TOOLCHAIN_PATH}/arm-none-eabi-")
# Select the ld file
# Set MCU specific flags
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -T \"${ADE9178_ROOT_DIR}/../board_support/max/eval_ade9178/max32670.ld\"")
# MCU specific flagss
set(TARGET_FLAGS "-mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${TARGET_FLAGS}")
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} ${TARGET_FLAGS}")
# Include toolchain file
include(${ADE9178_ROOT_DIR}/../board_support/cmake/gcc-arm-none-eabi.cmake)
endif()

# Set the project name
set(CMAKE_PROJECT_NAME cmd_format_example)

# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Core project settings
project(${CMAKE_PROJECT_NAME})
# Enable CMake support for ASM and C languages
enable_language(C ASM)


# Print Target Info
message("Build type: " ${CMAKE_BUILD_TYPE})
message(STATUS "TARGET_VALUE: ${BUILD_TARGET}")

# Create an executable object type
add_executable(${PROJECT_NAME})

set(TARGET_EXECUTABLE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE}/${CMAKE_PROJECT_NAME})

set (APP_SRC  ${ADE9178_ROOT_DIR}/examples/cmd_format_example.c
              ${ADE9178_ROOT_DIR}/../crc/source/ade_crc.c)

if(USE_DUMMY_EVB)
set(APP_SRC  ${APP_SRC} ${ADE9178_ROOT_DIR}/../board_support/dummy_board/adi_evb.c)
set(APP_INCLUDE ${ADE9178_ROOT_DIR}/../board_support/dummy_board/
                ${ADE9178_ROOT_DIR}/../board_support/generic/include/
                ${ADE9178_ROOT_DIR}/../board_support/dummy_board/config/)
else()
# Add boardS_support sources
add_subdirectory(
  ${ADE9178_ROOT_DIR}/../board_support
  ${CMAKE_BINARY_DIR}/board_support
)
set(APP_INCLUDE "")
set(BOARD_SUPPORT_LIBS board_support)
endif()

# Add sources to executable
target_sources(${CMAKE_PROJECT_NAME} PRIVATE
    ${APP_SRC}
)

if(NOT USE_DUMMY_EVB)
file(GLOB MAXIM_FILES "${MaximSDK}/Libraries/PeriphDrivers/Source/**/*.c")
set_source_files_properties(
  ${MAXIM_FILES}
  PROPERTIES
  COMPILE_FLAGS "-w"
)
endif()

set(APP_CFG_INCLUDE ${ADE9178_ROOT_DIR}/examples/include/config)

# Add include paths
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
        ${ADE9178_ROOT_DIR}/include/
        ${ADE9178_ROOT_DIR}/../ade91xx/include
        ${ADE9178_ROOT_DIR}/examples/
        ${ADE9178_ROOT_DIR}/../crc/include
        ${APP_CFG_INCLUDE}
        ${APP_INCLUDE}
)

# Add linked libraries
target_link_libraries(${CMAKE_PROJECT_NAME} ${BOARD_SUPPORT_LIBS})

if(NOT USE_DUMMY_EVB)
# Create hex file
add_custom_command(TARGET ${CMAKE_PROJECT_NAME}
    POST_BUILD
    COMMAND ${TOOLCHAIN_PREFIX}objcopy -O ihex ${CMAKE_PROJECT_NAME}.elf ${CMAKE_PROJECT_NAME}.hex
)
else()
add_custom_command(TARGET ${CMAKE_PROJECT_NAME}
    POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -O ihex ${CMAKE_PROJECT_NAME}.exe ${CMAKE_PROJECT_NAME}.hex
)
endif()
