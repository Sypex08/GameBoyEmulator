#include "BUS.h"


uint8_t BUS::Read(uint16_t address) {
    uint8_t value = 0x00;

    if (address >= 0xC000  && address < 0xE000 ) {
        value = WRAM[address - 0xC000];
    }
    if (address >= 0xFF80  && address < 0xFFFF ) {
        value = HRAM[address - 0xFF80];
    }

    return value;
}

void BUS::Write(uint16_t address, uint8_t value) {

    if (address >= 0xC000  && address < 0xE000 ) {
        WRAM[address - 0xC000] = value;
    }
    if (address >= 0xFF80  && address < 0xFFFF ) {
        HRAM[address - 0xFF80] = value ;
    }
}



