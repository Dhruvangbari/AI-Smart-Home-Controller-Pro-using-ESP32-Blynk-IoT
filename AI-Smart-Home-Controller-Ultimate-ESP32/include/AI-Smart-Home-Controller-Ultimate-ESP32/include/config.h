#ifndef CONFIG_H
#define CONFIG_H

char auth[] = "YOUR_AUTH";
char ssid[] = "YOUR_WIFI";
char pass[] = "YOUR_PASS";

#define DHT_PIN 4
#define DHT_TYPE DHT11
#define MQ135_PIN 34

#define RELAY_COUNT 4
#define TEMP_LIMIT 30
#define HUM_LIMIT 70
#define AIR_LIMIT 2200

#endif
