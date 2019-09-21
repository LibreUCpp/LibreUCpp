# settings interface library: compile settings for {{ dev.name }}
project({{ lib_settings }} LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
{%- for def in definitions %}
    target_compile_definitions(${PROJECT_NAME} INTERFACE LIBREUCPP_{{ def }})
{%- endfor %}
    target_link_libraries(${PROJECT_NAME} INTERFACE LIBREUCPP_SETTINGS_{{ cpu }})
    target_link_directories(${PROJECT_NAME} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/ld")


# peripheral library: peripheral definitions for {{ dev.name }}
project({{ lib_periph }} LANGUAGES CXX)
    add_library(${PROJECT_NAME} INTERFACE)
    target_link_libraries(${PROJECT_NAME} INTERFACE {{ lib_settings }} LIBREUCPP_PERIPH_ARM_COMMON)
    target_include_directories(${PROJECT_NAME} INTERFACE include/)
    target_sources(${PROJECT_NAME} INTERFACE
{%- for peripheral in dev.peripherals %}
        "${CMAKE_CURRENT_SOURCE_DIR}/{{include_dir}}/{{peripheral.unified_name}}.h"
{%- endfor %}
    )


# startup library: startup and interrupt code for {{ dev.name }}
project({{ lib_startup }} LANGUAGES CXX)
    add_library(${PROJECT_NAME} STATIC src/InterruptVectors.cpp)
    target_link_libraries(${PROJECT_NAME} PUBLIC {{ lib_settings }} LIBREUCPP_STARTUP_{{ cpu }})
    # --whole-archive seems to be the only way to force the interrupt vector table to be linked into the final binary?
    target_link_options(${PROJECT_NAME} INTERFACE "-Wl,--whole-archive" "$<TARGET_LINKER_FILE:{{ lib_startup }}>" "-Wl,--no-whole-archive")
