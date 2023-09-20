cmake_minimum_required(VERSION 3.16.3)

project("GTest")

find_package(GTest REQUIRED)

add_executable(Test main.cpp)
target_link_libraries(Test GTest::GTest GTest::Main pthread)

enable_testing()

add_test(add Test)