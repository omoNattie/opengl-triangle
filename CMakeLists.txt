cmake_minimum_required(VERSION 3.10)
project(hello_gl)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/glfw)

file(COPY glsl DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")

add_executable(hello_gl
        src/main.cpp
        src/glad/glad.c
        src/read_glsl.cpp include/read_glsl.h src/from_hex.cpp include/from_hex.h)

target_include_directories(hello_gl PRIVATE
        include/
)

target_link_libraries(hello_gl
    glfw
)