cmake_minimum_required(VERSION 4.2)
project(BahDoom C)

set(CMAKE_C_STANDARD 99)

add_executable(BahDoom src/main.c
        src/core/engine.h
        src/core/engine.c
        src/core/time.c
        src/core/time.h
        src/game/game.c
        src/game/game.h)
