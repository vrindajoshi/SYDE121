cmake_minimum_required(VERSION 3.10)
project(Lab0901)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_executable(Lab0901 main.cpp usedate.cpp)