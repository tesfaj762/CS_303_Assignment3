cmake_minimum_required(VERSION 3.10.0)
project(Assignment3 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS)

add_executable(main main.cpp
  CircularQueue.h)

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

