cmake_minimum_required (VERSION 3.16)
project (Four)

add_subdirectory (src)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries (${PROJECT_NAME} four)

add_subdirectory (test)