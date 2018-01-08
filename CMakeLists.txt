cmake_minimum_required(VERSION 3.9)
project(Miner)

set(CMAKE_CXX_STANDARD 11)

# Miner library
add_library(Miner SHARED source/Miner.cpp source/Miner.h)

# Examples/test1
add_executable(test1 examples/test1.cpp)
target_link_libraries(test1 Miner)