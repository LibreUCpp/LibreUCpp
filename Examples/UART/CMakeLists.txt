project(UART_SAMMY_C21 LANGUAGES CXX)
    add_executable(${PROJECT_NAME} UART.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_ATSAMC21X18)
    target_compile_definitions(${PROJECT_NAME} PUBLIC SAMMY_C21)
