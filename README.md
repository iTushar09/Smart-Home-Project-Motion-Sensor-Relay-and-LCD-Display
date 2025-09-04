# ESP32 Smart Home Project: Motion Sensor, Relay & LCD Display

This project demonstrates how to build a **smart home automation system** using an **ESP32 microcontroller**, **motion sensor**, **relay module**, and **LCD display**.  
The system can detect motion, control electrical appliances, and display status messages in real-time.
## 🚀 Live Simulation

Click below to test the project:
**[Hands-On Demo](https://wokwi.com/projects/438860110663645185)**

## 📌 Features
- Motion detection using a PIR motion sensor
- Automatic device control via a relay
- Status updates on a 16x2 LCD display
- Beginner-friendly wiring & coding steps
- Scalable for IoT and smart home applications

## 🛠 Components Required
- **ESP32 Development Board**
- **PIR Motion Sensor (HC-SR501 or similar)**
- **Relay Module** (5V or 3.3V compatible)
- **16x2 LCD Display** (with I2C adapter recommended)
- Jumper wires
- Breadboard
- USB cable for programming
## 🖼️ Circuit View

![Circuit View](<Circuit View.png>)
=======

## ⚙️ How It Works
1. **Motion Detection:**  
   The PIR motion sensor detects movement within its range.
   
2. **Relay Activation:**  
   When motion is detected, the ESP32 sends a signal to the relay to turn ON a connected device (e.g., light, fan).
   
3. **Status Display:**  
   The LCD shows messages such as *"Motion Detected - Light ON"* or *"No Motion - Light OFF"*.

4. **Automation:**  
   No manual switching required — it’s fully automated.

## 🔌 Wiring Guide
| Component | ESP32 Pin |
|-----------|-----------|
| PIR Sensor Output | GPIO 12 |
| Relay Input | GPIO 15 |
| LCD SDA | GPIO 21 |
| LCD SCL | GPIO 22 |
| VCC & GND | 3.3V / GND |

> **Note:** Adjust pins in the code if you use different wiring.

 ## 👨‍💻 Author

**Tushar Chaudhari**

*Electronics Enthusiast & Maker*





