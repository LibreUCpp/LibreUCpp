project(LIBREUCPP_HAL_ATSAMC21 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC)

    target_sources(
        ${PROJECT_NAME} PUBLIC
            include/LibreUCpp/HAL/Clock.h
            include/LibreUCpp/HAL/ClockConfig.h
            include/LibreUCpp/HAL/DPLL.h src/DPLL.cpp
            include/LibreUCpp/HAL/GCLK.h
            include/LibreUCpp/HAL/MCLK.h src/MCLK.cpp
            include/LibreUCpp/HAL/OSC48M.h
            include/LibreUCpp/HAL/ADC.h src/ADC.cpp
            ../SAMC_SAMD/include/LibreUCpp/HAL/Pin.h ../SAMC_SAMD/src/Pin.cpp
            ../SAMC_SAMD/include/LibreUCpp/HAL/Port.h ../SAMC_SAMD/src/Port.cpp
            ../SAMC_SAMD/include/LibreUCpp/HAL/XOSC.h
            ../SAMC_SAMD/include/LibreUCpp/HAL/XOSC32K.h
            ../SAMC_SAMD/include/LibreUCpp/HAL/NVM.h
            ../SAMC_SAMD/include/LibreUCpp/HAL/BusClockManager.h
            ../SAMC_SAMD/include/LibreUCpp/HAL/UART.h ../SAMC_SAMD/src/UART.cpp
    )

    target_include_directories(
        ${PROJECT_NAME} PUBLIC 
            include/
            ../SAMC_SAMD/include
    )

    target_compile_definitions(
        ${PROJECT_NAME} PUBLIC
        LIBREUCPP_HAL_HAS_PORTA
        LIBREUCPP_HAL_HAS_PORTB # TODO only variants G/J/N
        LIBREUCPP_HAL_HAS_PORTC # TODO only variant N
        LIBREUCPP_HAL_HAS_SERCOM0
        LIBREUCPP_HAL_HAS_SERCOM1
        LIBREUCPP_HAL_HAS_SERCOM2
        LIBREUCPP_HAL_HAS_SERCOM3
        LIBREUCPP_HAL_HAS_SERCOM4
        LIBREUCPP_HAL_HAS_SERCOM5
    )

    target_link_libraries(
        ${PROJECT_NAME} PUBLIC 
            LIBREUCPP_SETTINGS_ATSAMC21 
            LIBREUCPP_PERIPH_ATSAMC21 
            LIBREUCPP_HAL_ARM_COMMON
    )


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
