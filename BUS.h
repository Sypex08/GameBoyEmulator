#ifndef GAMEBOYEMULATOR_BUS_H
#define GAMEBOYEMULATOR_BUS_H
#include <cstdint>
#include "CPU.h"


class BUS {
    public:


    private:
    CPU cpu;
    uint8_t RAM[65536];


};


#endif //GAMEBOYEMULATOR_BUS_H
