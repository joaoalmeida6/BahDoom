cmake_minimum_required(VERSION 4.2)

project(BahDoom C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(FetchContent)

set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)

FetchContent_Declare(
        SDL3
        GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
        GIT_TAG release-3.4.14
)

FetchContent_MakeAvailable(SDL3)

add_executable(BahDoom
        src/main.c
        src/core/engine.h
        src/core/engine.c
        src/core/time.c
        src/core/time.h
        src/game/game.c
        src/game/game.h
        src/core/engine_state.h
        src/platform/platform.c
        src/platform/platform.h
        src/platform/keyboard.c
        src/platform/keyboard.h
        src/input/input.c
        src/input/input.h
        resources/bahdoom.rc
        resources/bahdoom-icon.ico
        src/game/player_command.c
        src/game/player_command.h
)

target_link_libraries(BahDoom PRIVATE SDL3::SDL3)