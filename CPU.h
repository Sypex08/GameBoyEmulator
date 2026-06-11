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

};



#endif //GAMEBOYEMULATOR_CPU_H
