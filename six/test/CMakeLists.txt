set(CATCH_INCLUDE_DIR ../../../Catch)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

add_executable(test_six test_six.cpp)
target_link_libraries(test_six Catch six)