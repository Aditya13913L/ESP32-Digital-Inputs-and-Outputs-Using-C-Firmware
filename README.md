# ESP32-Digital-Inputs-and-Outputs-Using-C-Firmware
ESP32 Digital Inputs and Outputs Using C Firmware based on IOT &amp; Robotics @UNLOX

## Project Overview
This is a basic level project designed for the ESP32 using the Arduino IDE. It demonstrates how to control digital inputs (push buttons) and digital outputs (LEDs and a Buzzer). The code is kept simple and easy to understand, using basic `delay()` for button debouncing.

## Hardware Required
- ESP32 Development Board
- 2x Tactile Push Buttons
- 2x LEDs (e.g., Green and Red)
- 2x 220-ohm Resistors (for LEDs)
- 1x Active Buzzer
- Jumper Wires & Breadboard

## Evidence
- Screenshots and simulation video are provided within the folder of project file.

## Circuit Connections (Pin Mapping)

| Component | ESP32 Pin | Connection Details |
| :--- | :--- | :--- |
| **Button 1** | `GPIO 14` | Connect one leg to GPIO 14, the other to GND. |
| **Button 2** | `GPIO 27` | Connect one leg to GPIO 27, the other to GND. |
| **LED 1 (Green)** | `GPIO 25` | Connect Anode (long leg) to GPIO 25 via 220Ω resistor, Cathode to GND. |
| **LED 2 (Red)** | `GPIO 26` | Connect Anode (long leg) to GPIO 26 via 220Ω resistor, Cathode to GND. |
| **Buzzer** | `GPIO 33` | Connect Positive pin to GPIO 33, Negative pin to GND. |

## How to Run the Project
**Wokwi Simulator (No hardware needed):**
- Go to [Wokwi ESP32 Simulator]- https://wokwi.com/projects/478966161305664513
- Paste the code from `problem1.ino` into `sketch.ino`.
- Paste the code from `diagram.json` into the `diagram.json` tab.
- Click the Play button to simulate.
- Github Link :- https://github.com/Aditya13913L/ESP32-Digital-Inputs-and-Outputs-Using-C-Firmware.git
