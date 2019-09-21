project(LIBREUCPP_HAL_ATSAMD09 LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC)
    target_sources(${PROJECT_NAME} PRIVATE src/Pin.cpp src/Port.cpp)
    target_include_directories(${PROJECT_NAME} PUBLIC include/)
    target_link_libraries(
        ${PROJECT_NAME} PUBLIC 
            LIBREUCPP_HAL_ARM_COMMON
            LIBREUCPP_HAL_COMMON_MICROCHIP 
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
