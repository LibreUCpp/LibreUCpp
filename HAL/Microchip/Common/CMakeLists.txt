project(LIBREUCPP_HAL_COMMON_MICROCHIP LANGUAGES CXX)
add_library(${PROJECT_NAME} INTERFACE)
target_sources(
    ${PROJECT_NAME} INTERFACE
        include/LibreUCpp/HAL/Pin.h
        include/LibreUCpp/HAL/Port.h
        include/LibreUCpp/HAL/XOSC.h
        include/LibreUCpp/HAL/XOSC32K.h
        include/LibreUCpp/HAL/NVM.h
        include/LibreUCpp/HAL/BusClockManager.h
)
target_include_directories(${PROJECT_NAME} INTERFACE include/)
