cmake_minimum_required(VERSION 3.17)
project(first)

set(CMAKE_CXX_STANDARD 20)

add_executable(first main.cpp snake.cpp snake_map.cpp input.cpp)