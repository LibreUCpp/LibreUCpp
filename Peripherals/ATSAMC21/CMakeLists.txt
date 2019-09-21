# settings interface library: compile settings for ATSAMC21N17A
project(LIBREUCPP_SETTINGS_ATSAMC21 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_ATSAM)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_ATSAMC)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_ATSAMC21)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_M0PLUS)
    target_link_directories(${PROJECT_NAME} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/ld")


# peripheral library: peripheral definitions for ATSAMC21N17A
project(LIBREUCPP_PERIPH_ATSAMC21 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_ATSAMC21 LIBREUCPP_PERIPH_ARM_COMMON)
    target_include_directories(${PROJECT_NAME} INTERFACE include/)
    target_sources(${PROJECT_NAME} INTERFACE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/AC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/ADC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CAN.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/CCL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DAC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DIVAS.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DMAC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DSU.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/EIC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/EVSYS.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/FREQM.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/GCLK.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/HMATRIXHS.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/MCLK.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/MPU.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/MTB.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/NVIC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/NVMCTRL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OSC32KCTRL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/OSCCTRL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PAC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PM.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PORT.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PTC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/RSTC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/RTC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SDADC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SERCOM.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SUPC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SysTick.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SystemControl.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TCC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TSENS.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/WDT.h"
    )


# startup library: startup and interrupt code for ATSAMC21N17A
project(LIBREUCPP_STARTUP_ATSAMC21 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC src/InterruptVectors.cpp)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_ATSAMC21 LIBREUCPP_STARTUP_M0PLUS)
    # --whole-archive seems to be the only way to force the interrupt vector table to be linked into the final binary?
    target_link_options(${PROJECT_NAME} INTERFACE "-Wl,--whole-archive" "$<TARGET_LINKER_FILE:LIBREUCPP_STARTUP_ATSAMC21>" "-Wl,--no-whole-archive")