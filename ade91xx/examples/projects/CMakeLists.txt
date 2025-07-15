cmake_minimum_required(VERSION 3.22)

# Project name and executable
set(CMAKE_PROJECT_NAME frame_format_example)

# Base directories (allow override from command line or parent project)
set(PROJECT_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../.." CACHE PATH "Project root directory")
set(BOARD_SUPPORT_DIR "${PROJECT_ROOT_DIR}/board_support" CACHE PATH "Board support directory")

# Build options
set(EVB "app_mcu_h5" CACHE STRING "Name of evaluation board")
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type")

# Toolchain
include(${BOARD_SUPPORT_DIR}/cmake/toolchain_wrapper.cmake)
project(${CMAKE_PROJECT_NAME})

# Source and include files
set(APP_SRC
    ${PROJECT_ROOT_DIR}/ade91xx/examples/frame_format_example.c
    ${PROJECT_ROOT_DIR}/crc/source/ade_crc.c
)
set(APP_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
    ${PROJECT_ROOT_DIR}/ade91xx/examples
    ${PROJECT_ROOT_DIR}/include
    ${PROJECT_ROOT_DIR}/crc/include
)

# Add board_support sources
add_subdirectory(
    ${BOARD_SUPPORT_DIR}
    ${CMAKE_BINARY_DIR}/board_support
)

# Create executable and add sources/includes
add_executable(${CMAKE_PROJECT_NAME})
target_sources(${CMAKE_PROJECT_NAME} PRIVATE ${APP_SRC})
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${APP_INCLUDES})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE board_support)

add_hex_generation(${CMAKE_PROJECT_NAME})

