set(
    STM32F0_COMMON_SOURCES 
        ../Common/include/LibreUCpp/HAL/RCC_STM32_Common.h
        ../Common/include/LibreUCpp/HAL/ClockConfigTypes.h
        ../Common/include/LibreUCpp/HAL/Clock.h
        ../Common/include/LibreUCpp/HAL/Port.h ../Common/src/Port.cpp
        ../Common/include/LibreUCpp/HAL/Pin.h ../Common/src/Pin.cpp
        include/LibreUCpp/HAL/ClockConfig.h
        include/LibreUCpp/HAL/RCC.h
        include/LibreUCpp/HAL/BusClockManager.h
        include/LibreUCpp/HAL/UART.h src/UART.cpp
)

project(LIBREUCPP_HAL_STM32F030xx LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC)
    target_sources(${PROJECT_NAME} PUBLIC ${STM32F0_COMMON_SOURCES})
    target_compile_definitions(
        ${PROJECT_NAME} PUBLIC
            LIBREUCPP_HAL_HAS_GPIOA
            LIBREUCPP_HAL_HAS_GPIOB
            LIBREUCPP_HAL_HAS_GPIOC
            LIBREUCPP_HAL_HAS_GPIOD
            LIBREUCPP_HAL_HAS_GPIOF
            LIBREUCPP_HAL_HAS_USART1
            LIBREUCPP_HAL_HAS_USART2
            LIBREUCPP_HAL_HAS_TIM6
            LIBREUCPP_HAL_HAS_TIM15
            LIBREUCPP_HAL_HAS_I2C1
            LIBREUCPP_HAL_HAS_I2C2
    )
    target_include_directories(${PROJECT_NAME} PUBLIC include/ ../Common/include/)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_STM32F030 LIBREUCPP_PERIPH_STM32F030 LIBREUCPP_HAL_ARM_COMMON)


foreach(PART STM32F030X4 STM32F030X6 STM32F030X8 STM32F030XC)

    project(LIBREUCPP_HAL_${PART} LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_NOSYS LIBREUCPP_STARTUP_STM32F030 LIBREUCPP_HAL_STM32F030xx)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

    project(LIBREUCPP_HAL_${PART}_SEMIHOSTING LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SEMIHOSTING LIBREUCPP_STARTUP_STM32F030 LIBREUCPP_HAL_STM32F030xx)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

endforeach()

project(LIBREUCPP_HAL_STM32F042xx LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC)
    target_sources(${PROJECT_NAME} PUBLIC ${STM32F0_COMMON_SOURCES})
    target_compile_definitions(
        ${PROJECT_NAME} PUBLIC
            LIBREUCPP_HAL_HAS_GPIOA
            LIBREUCPP_HAL_HAS_GPIOB
            LIBREUCPP_HAL_HAS_GPIOC
            LIBREUCPP_HAL_HAS_GPIOF
            LIBREUCPP_HAL_HAS_USART1
            LIBREUCPP_HAL_HAS_USART2
            LIBREUCPP_HAL_HAS_SPI1
            LIBREUCPP_HAL_HAS_SPI2
            LIBREUCPP_HAL_HAS_I2C1
            LIBREUCPP_HAL_HAS_CEC
            LIBREUCPP_HAL_HAS_CAN
            LIBREUCPP_HAL_HAS_USB
            LIBREUCPP_HAL_HAS_TIM1
            LIBREUCPP_HAL_HAS_TIM2
            LIBREUCPP_HAL_HAS_TIM3
            LIBREUCPP_HAL_HAS_TIM14
            LIBREUCPP_HAL_HAS_TIM16
            LIBREUCPP_HAL_HAS_TIM17
    )
    target_include_directories(${PROJECT_NAME} PUBLIC include/ ../Common/include/)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_STM32F042 LIBREUCPP_PERIPH_STM32F042 LIBREUCPP_HAL_ARM_COMMON)


foreach(PART STM32F042X4 STM32F042X6)

    project(LIBREUCPP_HAL_${PART} LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_NOSYS LIBREUCPP_STARTUP_STM32F030 LIBREUCPP_HAL_STM32F042xx)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

    project(LIBREUCPP_HAL_${PART}_SEMIHOSTING LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SEMIHOSTING LIBREUCPP_STARTUP_STM32F030 LIBREUCPP_HAL_STM32F042xx)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

endforeach()
