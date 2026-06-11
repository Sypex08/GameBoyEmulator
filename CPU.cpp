#include "BUS.h"
#include "CPU.h"

void CPU::connectBus(BUS* targetBus) {
    bus = targetBus;
}
