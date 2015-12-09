cmake_minimum_required(VERSION 3.3)
project(src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp integrate.hpp rectangle_rule.hpp meta_helpers.hpp trapezoidal_rule.hpp)
add_executable(src ${SOURCE_FILES})