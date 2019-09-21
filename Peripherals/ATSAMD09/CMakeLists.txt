# settings interface library: compile settings for ATSAMD09C13A
project(LIBREUCPP_SETTINGS_ATSAMD09 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_ATSAM)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_ATSAMD)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_ATSAMD09)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_M0PLUS)
    target_link_directories(${PROJECT_NAME} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/ld")


# peripheral library: peripheral definitions for ATSAMD09C13A
project(LIBREUCPP_PERIPH_ATSAMD09 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_ATSAMD09 LIBREUCPP_PERIPH_ARM_COMMON)
    target_include_directories(${PROJECT_NAME} INTERFACE include/)
    target_sources(${PROJECT_NAME} INTERFACE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/ADC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DMAC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/DSU.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/EIC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/EVSYS.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/GCLK.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/HMATRIX.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/MTB.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/NVMCTRL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PAC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PM.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/PORT.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/RTC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SERCOM.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/SYSCTRL.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/TC.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/LibreUCpp/Peripherals/WDT.h"
    )


# startup library: startup and interrupt code for ATSAMD09C13A
project(LIBREUCPP_STARTUP_ATSAMD09 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC src/InterruptVectors.cpp)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_ATSAMD09 LIBREUCPP_STARTUP_M0PLUS)
    # --whole-archive seems to be the only way to force the interrupt vector table to be linked into the final binary?
    target_link_options(${PROJECT_NAME} INTERFACE "-Wl,--whole-archive" "$<TARGET_LINKER_FILE:LIBREUCPP_STARTUP_ATSAMD09>" "-Wl,--no-whole-archive")