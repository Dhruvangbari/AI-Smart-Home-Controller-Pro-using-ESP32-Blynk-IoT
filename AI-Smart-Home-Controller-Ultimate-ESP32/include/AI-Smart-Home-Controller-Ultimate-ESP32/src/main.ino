#define BLYNK_PRINT Serial
#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

#include "config.h"
#include "ai_engine.h"
#include "scene_manager.h"
#include "scheduler.h"
#include "energy_monitor.h"
#include "relay_driver.h"
#include "sensor_manager.h"
#include "wifi_manager.h"
#include "logger.h"

DHT dht(DHT_PIN, DHT_TYPE);
BlynkTimer timer;

void systemTask(){
    SensorData data = readSensors(dht);
    evaluateAI(data);
    runScheduler();
    applySceneLogic();
    updateEnergyUsage();
    applyRelays();
    sendToCloud(data);
}

void setup(){
    Serial.begin(115200);
    initLogger();
    initRelays();
    initScenes();
    initScheduler();
    initEnergyMonitor();
    connectWiFiAndBlynk();
    timer.setInterval(3000L, systemTask);
}

void loop(){
    Blynk.run();
    timer.run();
    maintainConnection();
}
