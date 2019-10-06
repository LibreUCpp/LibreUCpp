project(LIBREUCPP_HAL_ATSAMD09 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC)

    target_sources(
        ${PROJECT_NAME} PRIVATE
            include/LibreUCpp/HAL/Clock.h src/Clock.cpp
            include/LibreUCpp/HAL/DFLL.h src/DFLL.cpp
            include/LibreUCpp/HAL/DPLL.h src/DPLL.cpp
            include/LibreUCpp/HAL/GCLK.h
            include/LibreUCpp/HAL/OSC8M.h
            include/LibreUCpp/HAL/PM.h src/PM.cpp
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
            ../SAMC_SAMD/include/
    )

    target_compile_definitions(
        ${PROJECT_NAME} PUBLIC
            LIBREUCPP_HAL_HAS_PORTA
            LIBREUCPP_HAL_HAS_SERCOM0
            LIBREUCPP_HAL_HAS_SERCOM1
    )

    target_link_libraries(
        ${PROJECT_NAME} PUBLIC 
            LIBREUCPP_HAL_ARM_COMMON
            LIBREUCPP_SETTINGS_ATSAMD09 
            LIBREUCPP_PERIPH_ATSAMD09 
    )


foreach(PART ATSAMD09C13 ATSAMD09D14)

    project(LIBREUCPP_HAL_${PART} LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_NOSYS LIBREUCPP_STARTUP_ATSAMD09 LIBREUCPP_HAL_ATSAMD09)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

    project(LIBREUCPP_HAL_${PART}_SEMIHOSTING LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SEMIHOSTING LIBREUCPP_STARTUP_ATSAMD09 LIBREUCPP_HAL_ATSAMD09)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)
        
endforeach()
