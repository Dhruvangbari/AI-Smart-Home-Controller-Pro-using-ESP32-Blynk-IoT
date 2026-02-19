#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"

void connectWiFiAndBlynk(){
    Blynk.begin(auth, ssid, pass);
}

void maintainConnection(){
    if(WiFi.status()!=WL_CONNECTED){
        WiFi.reconnect();
    }
}
