add_library(MyEngine STATIC

    src/Core/Application.cpp

)

target_include_directories(MyEngine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)