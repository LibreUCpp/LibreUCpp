project(LIBREUCPP_SETTINGS_COMMON LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP)
    target_link_options(${PROJECT_NAME} INTERFACE -Wl,--gc-sections --specs=nano.specs -fno-exceptions)
    target_compile_options(${PROJECT_NAME} INTERFACE -g -ffunction-sections -fdata-sections -fno-common -Wall -Wextra -Wpedantic -Wsign-conversion -Werror -fno-exceptions)

    if (CMAKE_BUILD_TYPE MATCHES Debug)
        target_compile_options(${PROJECT_NAME} INTERFACE -O0)
    else()
        target_compile_options(${PROJECT_NAME} INTERFACE -Os)
    endif()


project(LIBREUCPP_NOSYS)
    add_library(${PROJECT_NAME} INTERFACE)
    target_link_options(${PROJECT_NAME} INTERFACE --specs=nosys.specs)


project(LIBREUCPP_SEMIHOSTING)
    add_library(${PROJECT_NAME} INTERFACE)
    if (CMAKE_BUILD_TYPE MATCHES Debug)
        target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_RDIMON)
        target_link_options(${PROJECT_NAME} INTERFACE --specs=rdimon.specs)
    else()
        target_link_options(${PROJECT_NAME} INTERFACE --specs=nosys.specs)
    endif()


project(LIBREUCPP_SETTINGS_M0 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_CPU=CORTEX_M0)
    target_compile_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m0 -mthumb)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_COMMON)
    target_link_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m0 -mthumb)


project(LIBREUCPP_SETTINGS_M0PLUS LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_CPU=CORTEX_M0PLUS)
    target_compile_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m0plus -mthumb)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_COMMON)
    target_link_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m0plus -mthumb)


project(LIBREUCPP_SETTINGS_M3 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_CPU=CORTEX_M3)
    target_compile_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m3 -mthumb)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_COMMON)
    target_link_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m3 -mthumb)


project(LIBREUCPP_SETTINGS_M4 LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_CPU=CORTEX_M4)
    target_compile_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m4 -mthumb)
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_COMMON)
    target_link_options(${PROJECT_NAME} INTERFACE -mcpu=cortex-m4 -mthumb)
