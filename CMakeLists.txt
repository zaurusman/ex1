cmake_minimum_required(VERSION 3.20)
project(ex1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(tests)

add_executable(ex1
        tests/RLEList_example_test.c
        tests/test_utilities.h
        RLEList.c
        RLEList.h)
