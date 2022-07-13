cmake_minimum_required(VERSION 3.17)
project(Array)

set(CMAKE_CXX_STANDARD 14)

#add_executable(Array
#        BinarySearch/main.cpp
#        BinarySearch/Binary.cpp BinarySearch/Binary.h
#        )

#add_executable(Array
#        RemoveElements/RemoveElements.cpp RemoveElements/RemoveElements.h
#        RemoveElements/main.cpp)

add_executable(Array
        ArraySquare/main.cpp
        ArraySquare/ArraySquare.cpp ArraySquare/ArraySquare.h)
