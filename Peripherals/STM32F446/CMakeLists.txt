# settings interface library: compile settings for STM32F446x
project(LIBREUCPP_SETTINGS_STM32F446 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_STM32)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_STM32F4)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_STM32F446)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_M4)
    target_link_directories(${PROJECT_NAME} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/ld")


# peripheral library: peripheral definitions for STM32F446x
project(LIBREUCPP_PERIPH_STM32F446 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_STM32F446 LIBREUCPP_PERIPH_ARM_COMMON)
    target_include_directories(${PROJECT_NAME} INTERFACE include/)
    target_sources(${PROJECT_NAME} INTERFACE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/ADC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CAN.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CEC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CRC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/C_ADC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DAC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DBG.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DCMI.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DMA.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/EXTI.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/FLASH.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/FMC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/GPIO.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/I2C.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/IWDG.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/NVIC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_FS_DEVICE.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_FS_GLOBAL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_FS_HOST.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_FS_PWRCLK.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_HS_DEVICE.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_HS_GLOBAL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_HS_HOST.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OTG_HS_PWRCLK.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PWR.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/QUADSPI.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/RCC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/RTC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SAI.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SDIO.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SPDIF_RX.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SPI.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SYSCFG.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM1.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM10.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM11.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM12.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM2.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM3.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM5.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TIM6.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/UART.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/USART.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/WWDG.h"
    )


# startup library: startup and interrupt code for STM32F446x
project(LIBREUCPP_STARTUP_STM32F446 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC src/InterruptVectors.cpp)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_STM32F446 LIBREUCPP_STARTUP_M4)
    # --whole-archive seems to be the only way to force the interrupt vector table to be linked into the final binary?
    target_link_options(${PROJECT_NAME} INTERFACE "-Wl,--whole-archive" "$<TARGET_LINKER_FILE:LIBREUCPP_STARTUP_STM32F446>" "-Wl,--no-whole-archive")