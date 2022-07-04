cmake_minimum_required(VERSION 3.17)
project(Array)

set(CMAKE_CXX_STANDARD 14)

add_executable(Array
        BinarySearch/main.cpp
        BinarySearch/Binary2.cpp BinarySearch/Binary2.h
        BinarySearch/Binary.cpp BinarySearch/Binary.h)
