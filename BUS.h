#ifndef GAMEBOYEMULATOR_BUS_H
#define GAMEBOYEMULATOR_BUS_H
#include <cstdint>
#include "CPU.h"


class BUS {
    public:

    uint8_t Read(uint16_t address);
    void Write(uint16_t address, uint8_t value);


    private:
    CPU cpu;

    uint8_t WRAM[8192];
    uint8_t HRAM[127];


};


#endif //GAMEBOYEMULATOR_BUS_H
