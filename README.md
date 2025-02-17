# Soil Moisture Monitoring System

This project monitors the moisture level in the soil using a soil moisture sensor. When the soil is dry, an LED and a buzzer are triggered. It also prints the moisture level in the Serial Monitor for real-time data tracking.

## Components Used:
- **Arduino Uno** (or compatible board)
- **Soil Moisture Sensor**
- **LED** (to indicate dry soil)
- **Buzzer** (for audio alert)
- **Resistor** (optional, for better sensor accuracy)

## Wiring:
- Soil Moisture Sensor → A0 pin on Arduino
- LED → Pin 8 (with a 220Ω resistor)
- Buzzer → Pin 9
- Arduino powered by 5V and GND

## Code:
The code uses the **analogRead()** function to read moisture values and compares it with a threshold to trigger the LED and Buzzer.

## Setup Instructions:
1. Connect the components as per the wiring diagram.
2. Upload the provided Arduino code to your Arduino Uno.
3. Open the Serial Monitor to view the moisture level.
4. If the moisture is too low, the LED and Buzzer will alert you.

## License:
This project is open-source and free to use.
