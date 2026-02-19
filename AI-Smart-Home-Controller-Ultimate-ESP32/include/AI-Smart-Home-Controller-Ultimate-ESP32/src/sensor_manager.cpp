#include <BlynkSimpleEsp32.h>
#include "sensor_manager.h"
#include "config.h"

SensorData readSensors(DHT &dht){
    SensorData data;
    data.temperature = dht.readTemperature();
    data.humidity = dht.readHumidity();
    data.air = analogRead(MQ135_PIN);
    return data;
}

void sendToCloud(const SensorData &data){
    Blynk.virtualWrite(V0, data.temperature);
    Blynk.virtualWrite(V1, data.humidity);
    Blynk.virtualWrite(V2, data.air);
}
