cmake_minimum_required (VERSION 3.16)
project (Six)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory (src)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries (${PROJECT_NAME} six)

add_subdirectory (test)