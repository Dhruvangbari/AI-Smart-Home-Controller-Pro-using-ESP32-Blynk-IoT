#include <Arduino.h>
#include "logger.h"

void initLogger(){
    Serial.println("Logger Initialized");
}

void logMessage(const char* msg){
    Serial.println(msg);
}
