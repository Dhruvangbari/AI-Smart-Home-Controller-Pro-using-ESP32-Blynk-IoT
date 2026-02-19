#include "scheduler.h"
unsigned long lastRun=0;
void initScheduler(){ lastRun=millis(); }
void runScheduler(){
    if(millis()-lastRun>10000){
        lastRun=millis();
    }
}
