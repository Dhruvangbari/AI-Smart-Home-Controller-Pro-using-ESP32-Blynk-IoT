#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H
#include <DHT.h>
#include "data_types.h"
SensorData readSensors(DHT &dht);
void sendToCloud(const SensorData &data);
#endif
