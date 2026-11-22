// ============================================
// Day 03 - Button Controls LED
// Author: [ayoub djendir]
// Date: [2026-11-22]
// Description: LED turns on when button is pressed
// ============================================

void setup() {
  pinMode(13, OUTPUT); // LED pin
  pinMode(2, INPUT);    // Button pin
}

void loop() {
  int state = digitalRead(2); // Read button state
  if (state == HIGH) {
    digitalWrite(13, HIGH);   // Button pressed: LED ON
  } else {
    digitalWrite(13, LOW);    // Button released: LED OFF
  }
}
