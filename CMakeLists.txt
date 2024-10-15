cmake_minimum_required(VERSION 3.28)
project(BattleShip)

set(CMAKE_CXX_STANDARD 17)

add_executable(BattleShip main.cpp
        src/board.cpp
        src/board.h
        src/ship.cpp
        src/ship.h
        src/player.cpp
        src/player.h
        src/shooting.cpp
        src/shooting.h)
