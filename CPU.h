#ifndef GAMEBOYEMULATOR_CPU_H
#define GAMEBOYEMULATOR_CPU_H
#include <cstdint>

class CPU {

    public:
    BUS* bus;

    void connectBus(Bus* bus);
    private:

    uint16_t stack;
    uint16_t PC;
    uint16_t SP;

};
class BUS;


#endif //GAMEBOYEMULATOR_CPU_H
