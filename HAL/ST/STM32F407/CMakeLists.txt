project(LIBREUCPP_HAL_STM32F407xx LANGUAGES CXX)
    add_library(
        ${PROJECT_NAME} STATIC
        src/Port_STM32F407.cpp
        ../Common/src/Pin.cpp
    )
    target_include_directories(${PROJECT_NAME} PUBLIC include/ ../Common/include/)
    target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_STM32F407 LIBREUCPP_PERIPH_STM32F407 LIBREUCPP_HAL_ARM_COMMON)


foreach(PART STM32F407XE STM32F407XG)

    project(LIBREUCPP_HAL_${PART} LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_NOSYS LIBREUCPP_STARTUP_STM32F407 LIBREUCPP_HAL_STM32F407xx)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

    project(LIBREUCPP_HAL_${PART}_SEMIHOSTING LANGUAGES CXX)
        add_library(${PROJECT_NAME} INTERFACE)
        target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SEMIHOSTING LIBREUCPP_STARTUP_STM32F407 LIBREUCPP_HAL_STM32F407xx)
        target_link_options(${PROJECT_NAME} INTERFACE -T ${PART}.ld)

endforeach()
