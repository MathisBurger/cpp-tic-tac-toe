cmake_minimum_required(VERSION 3.22)
project (tic_tac_toe)

set(CMAKE_CXX_STANDARD 17)

add_executable(tic_tac_toe main.cpp Entities/Playground.cpp Entities/Playground.h Game/Game.cpp Game/Game.h)
