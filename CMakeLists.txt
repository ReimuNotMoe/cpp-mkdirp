cmake_minimum_required(VERSION 3.0)
project(cpp_mkdirp)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(pow mkdirp.hpp pow.cpp)
