# 🚦 Automated COVID Temperature-Based Gate Opening & Visitor Counter System

An IoT-based smart system designed to ensure safety during COVID-19 by automating gate access based on body temperature and keeping track of the number of visitors in a premises.

---

## 🧠 Project Overview

This system is designed to:
- Measure a person’s body temperature using an IR temperature sensor.
- Automatically open the gate if temperature is within a safe range.
- Count visitors entering and exiting using IR sensors.
- Display the visitor count and temperature on an LCD.
- Alert authorities if temperature exceeds a set threshold.

---

## 🔧 Technologies & Components Used

- **Microcontroller**: Arduino UNO / ESP32
- **Sensors**:
  - MLX90614 IR Temperature Sensor
  - IR Proximity Sensors (Entrance & Exit)
- **Actuator**: Servo Motor (for gate movement)
- **Display**: 16x2 LCD
- **Buzzer**: For alerts
- **Power Supply**: 5V/12V regulated
- **Programming Language**: C/C++ (Arduino IDE)

---

## 🛠️ How It Works
**Temperature Detection**: When a person approaches, the IR temperature sensor reads their temperature.

**Gate Control**: If temperature ≤ threshold (e.g., 37.5°C), the gate opens using a servo motor.

**Visitor Counting**: Entry and exit IR sensors increment or decrement the visitor count accordingly.

**Alert System**: If someone has a high temperature, a buzzer sounds and gate remains closed.
