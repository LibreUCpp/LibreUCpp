project(Semihosting_STM32F4DISCOVERY LANGUAGES C CXX)
    add_executable(${PROJECT_NAME} Semihosting.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_STM32F407XE_SEMIHOSTING)
    target_compile_definitions(${PROJECT_NAME} PUBLIC STM32F4DISCOVERY)

project(Semihosting_STM32F0308DISCOVERY LANGUAGES C CXX)
    add_executable(${PROJECT_NAME} Semihosting.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_STM32F030X8_SEMIHOSTING)
    target_compile_definitions(${PROJECT_NAME} PUBLIC STM32F0308DISCOVERY)

project(Semihosting_SAMMY_C21 LANGUAGES C CXX)
    add_executable(${PROJECT_NAME} Semihosting.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_ATSAMC21X18_SEMIHOSTING)
    target_compile_definitions(${PROJECT_NAME} PUBLIC SAMMY_C21)
