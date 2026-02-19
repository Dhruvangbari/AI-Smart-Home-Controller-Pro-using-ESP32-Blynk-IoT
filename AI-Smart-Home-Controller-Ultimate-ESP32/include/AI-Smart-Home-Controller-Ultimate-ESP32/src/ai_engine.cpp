#include "ai_engine.h"
#include "relay_driver.h"
#include "config.h"

void evaluateAI(const SensorData &data){
    setRelay(0, 1);
    setRelay(1, data.temperature > TEMP_LIMIT);
    setRelay(2, data.air > AIR_LIMIT);
    setRelay(3, data.humidity > HUM_LIMIT);
}
