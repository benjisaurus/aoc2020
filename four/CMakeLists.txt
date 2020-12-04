cmake_minimum_required (VERSION 3.16)
project (Four)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory (src)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries (${PROJECT_NAME} four)

add_subdirectory (test)