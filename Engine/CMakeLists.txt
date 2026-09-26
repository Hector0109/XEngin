add_library(MyEngine STATIC

    src/Core/Application.cpp
    src/Platform/Window.cpp

)

target_include_directories(MyEngine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLFW3 REQUIRED glfw3)

target_include_directories(MyEngine
    PRIVATE
        ${GLFW3_INCLUDE_DIRS}
)

target_link_libraries(MyEngine
    PRIVATE
        ${GLFW3_LIBRARIES}
)