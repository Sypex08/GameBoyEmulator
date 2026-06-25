#ifndef GAMEBOYEMULATOR_CPU_H
#define GAMEBOYEMULATOR_CPU_H
#include <cstdint>



class BUS;

class CPU {

    public:
    BUS* bus;

    void connectBus(BUS* bus);
    private:

    uint16_t PC;
    uint16_t SP;
    uint8_t A;
    uint8_t F;
    uint8_t B;
    uint8_t C;
    uint8_t D;
    uint8_t E;
    uint8_t H;
    uint8_t L;

};



#endif //GAMEBOYEMULATOR_CPU_H
