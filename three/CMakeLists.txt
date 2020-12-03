cmake_minimum_required (VERSION 3.16)
project (Three)

add_subdirectory (src)

add_executable(Three src/main.cpp)
target_link_libraries (Three three)

add_subdirectory (test)