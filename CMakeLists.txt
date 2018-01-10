cmake_minimum_required(VERSION 3.9)
project(Miner)

set(CMAKE_CXX_STANDARD 11)

# Miner library
add_library(Miner SHARED source/Miner.cpp source/Miner.h source/MUnknown.h source/MTypes.h source/MinerDevice.h source/core/dimension2d.h source/MTimer.h source/core/position2d.h source/gui/MCursorControl.h)

# Examples/test1
add_executable(test1 examples/test1.cpp)
target_link_libraries(test1 Miner)