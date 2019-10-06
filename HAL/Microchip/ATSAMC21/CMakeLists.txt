project(LIBREUCPP_HAL_ATSAMC21 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC)
    target_sources(
        ${PROJECT_NAME} PUBLIC
        include/LibreUCpp/HAL/Clock.h
        include/LibreUCpp/HAL/ClockConfig.h
        include/LibreUCpp/HAL/DPLL.h src/DPLL.cpp
        include/LibreUCpp/HAL/GCLK.h
        include/LibreUCpp/HAL/BusClockManager.h
        include/LibreUCpp/HAL/MCLK.h src/MCLK.cpp
        include/LibreUCpp/HAL/OSC48M.h
        include/LibreUCpp/HAL/UART.h src/UART.cpp
        src/Pin.cpp
        src/Port.cpp
    )
    target_include_directories(${PROJECT_NAME} PUBLIC include/)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_HAL_COMMON_MICROCHIP LIBREUCPP_SETTINGS_ATSAMC21 LIBREUCPP_PERIPH_ATSAMC21 LIBREUCPP_HAL_ARM_COMMON)


foreach(PART ATSAMC21X15 ATSAMC21X16 ATSAMC21X17 ATSAMC21X18)

    project(LIBREUCPP_HAL_${PART} LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_NOSYS LIBREUCPP_STARTUP_ATSAMC21 LIBREUCPP_HAL_ATSAMC21)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

    project(LIBREUCPP_HAL_${PART}_SEMIHOSTING LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SEMIHOSTING LIBREUCPP_STARTUP_ATSAMC21 LIBREUCPP_HAL_ATSAMC21)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

endforeach()
