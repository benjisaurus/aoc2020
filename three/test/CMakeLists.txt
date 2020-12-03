set(CATCH_INCLUDE_DIR ../../../Catch)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

add_executable(test_three test_three.cpp)
target_link_libraries(test_three Catch three)