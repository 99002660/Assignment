cmake_minimum_required(VERSION 2.6)


find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})


add_executable(a.out account_test.cpp) 

target_link_libraries(a.out ${GTEST_LIBRARIES} pthread) 
