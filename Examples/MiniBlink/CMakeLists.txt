project(MiniBlink_STM32F4DISCOVERY LANGUAGES C CXX)
    add_executable(${PROJECT_NAME} miniblink.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_STM32F407XE)
    target_compile_definitions(${PROJECT_NAME} PUBLIC STM32F4DISCOVERY)

project(MiniBlink_STM32F0308DISCOVERY LANGUAGES C CXX)
    add_executable(${PROJECT_NAME} miniblink.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_STM32F030X8)
    target_compile_definitions(${PROJECT_NAME} PUBLIC STM32F0308DISCOVERY)

project(MiniBlink_ADAFRUIT_ATSAMD09_BREAKOUT LANGUAGES C CXX)
    add_executable(${PROJECT_NAME} miniblink.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_ATSAMD09D14)
    target_compile_definitions(${PROJECT_NAME} PUBLIC ADAFRUIT_ATSAMD09_BREAKOUT)

project(MiniBlink_SAMMY_C21 LANGUAGES C CXX)
    add_executable(${PROJECT_NAME} miniblink.cpp)
    target_link_libraries(${PROJECT_NAME} LIBREUCPP_HAL_ATSAMC21X18)
    target_compile_definitions(${PROJECT_NAME} PUBLIC SAMMY_C21)
