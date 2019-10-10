project(UART_SAMMY_C21 LANGUAGES CXX)
    add_executable(${PROJECT_NAME} UART.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_ATSAMC21X18)
    target_compile_definitions(${PROJECT_NAME} PUBLIC SAMMY_C21)

project(UART_STM32F0308DISCOVERY LANGUAGES CXX)
    add_executable(${PROJECT_NAME} UART.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_STM32F030X8)
    target_compile_definitions(${PROJECT_NAME} PUBLIC STM32F0308DISCOVERY)
