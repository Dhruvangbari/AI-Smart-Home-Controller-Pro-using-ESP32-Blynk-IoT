#include "energy_monitor.h"
static float usage=0;
void initEnergyMonitor(){ usage=0; }
void updateEnergyUsage(){ usage+=0.05; }
float getEnergyUsage(){ return usage; }
