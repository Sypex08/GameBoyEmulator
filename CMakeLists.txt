cmake_minimum_required(VERSION 4.2)
project(GameBoyEmulator)

set(CMAKE_CXX_STANDARD 20)

add_executable(GameBoyEmulator main.cpp
        Gameboy.cpp
        GameBoy.h
        CPU.cpp
        CPU.h
        BUS.cpp
        BUS.h
        PPU.cpp
        PPU.h
)
