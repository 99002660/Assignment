cmake_minimum_required(VERSION 2.6)


find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})


add_executable(s account_test.cpp) 

target_link_libraries(s ${GTEST_LIBRARIES} pthread) 
