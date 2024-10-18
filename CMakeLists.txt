cmake_minimum_required(VERSION 3.28)
project(BattleShip)

set(CMAKE_CXX_STANDARD 17)

add_executable(BattleShip main.cpp
        src/board.cpp
        include/board.h
        src/ship.cpp
        include/ship.h
        src/player.cpp
        include/player.h
        src/shooting.cpp
        include/shooting.h)
