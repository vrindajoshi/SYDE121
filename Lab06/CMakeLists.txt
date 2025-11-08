cmake_minimum_required(VERSION 4.0)
project(Lab06)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab06 main.cpp
        quadratic.cpp
        triangle.cpp
        triangle.h
        bisection.cpp
        bisection.h)
