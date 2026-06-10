#ifndef GAMEBOYEMULATOR_PPU_H
#define GAMEBOYEMULATOR_PPU_H

#include <cstdint>


class PPU {
    public:

    private:

    uint32_t Screen[160 * 144];
    uint32_t Line[153];
    uint8_t LineCounter;
};


#endif //GAMEBOYEMULATOR_PPU_H
