foreach(CPU M0 M0PLUS M3 M4)

    project(LIBREUCPP_STARTUP_${CPU})
        add_library(${PROJECT_NAME} STATIC src/Startup.cpp)
        target_link_libraries(${PROJECT_NAME} PUBLIC LIBREUCPP_SETTINGS_${CPU})

endforeach()
