cmake_minimum_required(VERSION 4.1)
project(examen_raylib)

set(CMAKE_CXX_STANDARD 20)

set(RAYLIB_VERSION 5.5)


add_executable(examen_raylib main.cpp
        src/Grid.cpp
        src/Grid.h
)

include(FetchContent)

target_link_libraries(${PROJECT_NAME} raylib)


FetchContent_Declare(
        raylib
        DOWNLOAD_EXTRACT_TIMESTAMP OFF
        URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
)

FetchContent_MakeAvailable(raylib)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
