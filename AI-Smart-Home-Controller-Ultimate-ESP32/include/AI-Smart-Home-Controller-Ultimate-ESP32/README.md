# AI Smart Home Controller Ultimate 🏠🤖
Production-Style Modular Smart Home Firmware using ESP32 & Blynk IoT

This project implements a **fully modular, multi-layer smart home controller architecture** designed to simulate real-world embedded firmware systems.

Unlike basic IoT projects, this system is structured using **separate logic layers, drivers, and system modules**, following professional embedded development practices.

---

## 🧠 Project Objective

To design a scalable, modular, AI-driven smart home controller capable of:

- Environmental sensing
- Intelligent automation
- Scene-based logic
- Scheduled task execution
- Energy monitoring
- Cloud synchronization

This project demonstrates structured firmware engineering rather than simple Arduino scripting.

---

## 🏗️ System Architecture

Each module is independent and reusable.

---

## ⚙️ Core Modules

### 1️⃣ Sensor Manager
- Reads temperature
- Reads humidity
- Reads air quality
- Packages structured sensor data

### 2️⃣ AI Engine
- Evaluates environmental thresholds
- Applies intelligent control rules
- Controls relays dynamically

### 3️⃣ Scene Manager
- Allows override logic
- Supports multiple operating modes
- Designed for future expansion

### 4️⃣ Scheduler
- Non-blocking timed execution
- Extendable for automation schedules

### 5️⃣ Energy Monitor
- Tracks simulated power usage
- Designed for integration with current sensors

### 6️⃣ Relay Driver
- Hardware abstraction layer
- Centralized relay control
- Clean separation from logic layer

### 7️⃣ WiFi Manager
- Handles cloud connection
- Maintains network reliability

### 8️⃣ Logger Module
- Serial debug support
- Expandable for SD logging

---

## 📂 Project Structure


This reflects a **professional embedded firmware layout**.

---

## 🔧 Hardware Requirements

- ESP32 Development Board  
- DHT11 Temperature & Humidity Sensor  
- MQ135 Air Quality Sensor  
- 4-Channel Relay Module  
- WiFi Network  
- Smartphone with Blynk IoT  

---

## 📱 Blynk Virtual Pins

| Pin | Function |
|-----|----------|
| V0  | Temperature |
| V1  | Humidity |
| V2  | Air Quality |
| V3  | System Scene |
| V4  | Energy Usage |

---

## 🤖 AI Automation Logic

- Temperature > Threshold → Fan ON
- Air Quality > Limit → Exhaust ON
- Humidity > Limit → Auxiliary Device ON
- Light default behavior configurable
- Scene logic can override AI decisions

---

## 🔋 Energy Monitoring

Energy tracking module simulates usage increments and is structured to allow integration with:

- ACS712 current sensor
- SCT013 current clamp
- Smart energy meters

---

## 🧩 Design Philosophy

This project follows:

- Modular architecture
- Separation of concerns
- Hardware abstraction
- Non-blocking design
- Expandable system structure

It is structured to resemble a real embedded product firmware.

---

## 🚀 Future Enhancements

- OTA firmware update
- MQTT protocol integration
- Real-time energy analytics
- Voice assistant integration
- Multi-room distributed control
- Web dashboard analytics
- Edge AI prediction engine

---

## 🎯 Applications

- Smart home controller systems
- Embedded systems portfolio
- IoT architecture demonstrations
- Engineering academic projects
- Product prototype firmware

---

## 🧠 Author

**Dhruvang Bari**

Designed to demonstrate modular embedded firmware architecture with AI-inspired automation logic.


Production-style modular smart home controller using ESP32 and Blynk.

## Features
- AI automation engine
- Scene logic
- Scheduler module
- Energy monitoring module
- Modular architecture (15+ files)
- Cloud sync via Blynk

Author: Dhruvang Bari
