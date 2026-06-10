#include "GameBoy.h"


GameBoy::GameBoy() : bus(), ppu(), cpu()
{

 cpu.connectBus(&bus);
}