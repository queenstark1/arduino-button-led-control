# arduino-button-led-control
Second project
# Arduino Button-Controlled LED

This project demonstrates how to use a physical pushbutton to control an LED using an Arduino Uno. It features a **Pull-Down Resistor** configuration to ensure a stable digital signal.

## How it Works
- **Hardware:** When the button is pressed, 5V flows to Digital Pin 2. When released, the 10k ohm resistor pulls the pin to Ground (0V).
- **Software:** The code reads the state of Pin 2. If it's HIGH, it turns on the LED on Pin 13.

## Circuit Diagram
![Circuit Diagram](circuit_diagram.png)

## Components Used
- Arduino Uno
- LED (Red)
- Pushbutton
- 10k Ohm Resistor (Pull-down)
- 220 Ohm Resistor (Current limiting for LED)
- Breadboard & Jumper Wires
