#include <Arduino.h>
#include "relay_driver.h"
static int states[4]={0};
static int pins[4]={26,27,14,12};

void initRelays(){
    for(int i=0;i<4;i++){
        pinMode(pins[i],OUTPUT);
        digitalWrite(pins[i],LOW);
    }
}

void setRelay(int id,int state){
    if(id<0||id>=4)return;
    states[id]=state;
}

void applyRelays(){
    for(int i=0;i<4;i++){
        digitalWrite(pins[i], states[i]?HIGH:LOW);
    }
}
