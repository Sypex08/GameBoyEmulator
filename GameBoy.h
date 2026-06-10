#ifndef GAMEBOYEMULATOR_GAMEBOY_H
#define GAMEBOYEMULATOR_GAMEBOY_H

#include <cstdint>
#include "BUS.h"
#include "PPU.h"
#include "CPU.h"

class GameBoy {
public:

    GameBoy();

private:

    CPU cpu;
    PPU ppu;
    BUS bus;

    uint16_t Screen[160 * 144];
};

#endif //GAMEBOYEMULATOR_GAMEBOY_H