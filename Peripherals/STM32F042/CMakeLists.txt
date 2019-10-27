# settings interface library: compile settings for STM32F042x
project(LIBREUCPP_SETTINGS_STM32F042 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_STM32)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_STM32F0)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_STM32F042)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_M0)
    target_link_directories(${PROJECT_NAME} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/ld")


# peripheral library: peripheral definitions for STM32F042x
project(LIBREUCPP_PERIPH_STM32F042 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_STM32F042 LIBREUCPP_PERIPH_ARM_COMMON)
    target_include_directories(${PROJECT_NAME} INTERFACE include/)
    target_sources(${PROJECT_NAME} INTERFACE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/ADC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CAN.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CEC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/COMP.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CRC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CRS.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DBGMCU.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DMA.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/EXTI.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/FLASH.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/GPIO.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/I2C.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/IWDG.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/NVIC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PWR.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/RCC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/RTC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SPI.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SYSCFG.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM1.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM14.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM16.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM2.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TSC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/USART.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/USB.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/WWDG.h"
    )


# startup library: startup and interrupt code for STM32F042x
project(LIBREUCPP_STARTUP_STM32F042 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC src/InterruptVectors.cpp)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_STM32F042 LIBREUCPP_STARTUP_M0)
    # --whole-archive seems to be the only way to force the interrupt vector table to be linked into the final binary?
    target_link_options(${PROJECT_NAME} INTERFACE "-Wl,--whole-archive" "$<TARGET_LINKER_FILE:LIBREUCPP_STARTUP_STM32F042>" "-Wl,--no-whole-archive")