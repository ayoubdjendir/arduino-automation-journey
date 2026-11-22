# Day 03 - Button Controls LED
## Goal
Turn LED on when a push button is pressed, using digitalRead and if/else.
## Components
- Arduino Uno R3
- LED
- Resistor 220Ω (for LED)
- Resistor 10kΩ (Pull-down for button)
- Push Button
## Circuit
5V → Button → Pin 2
Pin 2 → 10kΩ → GND
Pin 13 → 220Ω → LED → GND
## Code
Reads button state with `digitalRead`, then uses `if/else` to control LED.
## What I learned
- `pinMode(pin, INPUT)`: set pin as input.
- `digitalRead(pin)`: read HIGH or LOW.
- `if (condition) { } else { }`: control flow.
- Pull-down resistor keeps pin LOW when button is not pressed.
## Simulation
See `day03_button_led.png`.
