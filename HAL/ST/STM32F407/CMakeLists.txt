project(LIBREUCPP_HAL_STM32F407xx LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC)
    target_sources(
        ${PROJECT_NAME} PUBLIC
            ../Common/include/LibreUCpp/HAL/RCC_STM32_Common.h
            ../Common/include/LibreUCpp/HAL/ClockConfigTypes.h
            ../Common/include/LibreUCpp/HAL/Clock.h
            include/LibreUCpp/HAL/ClockConfig.h
            ../Common/include/LibreUCpp/HAL/Port.h src/Port_STM32F407.cpp
            ../Common/include/LibreUCpp/HAL/Pin.h ../Common/src/Pin.cpp
            include/LibreUCpp/HAL/RCC.h
            include/LibreUCpp/HAL/BusClockManager.h
    )
    target_include_directories(
        ${PROJECT_NAME} PUBLIC 
            include/ 
            ../Common/include/
    )
    target_link_libraries(
        ${PROJECT_NAME} PUBLIC 
            LIBREUCPP_SETTINGS_STM32F407 
            LIBREUCPP_PERIPH_STM32F407 
            LIBREUCPP_HAL_ARM_COMMON
    )


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
