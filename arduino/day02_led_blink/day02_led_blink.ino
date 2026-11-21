// ============================================
// Day 02 - LED Blink
// Author: [ayoub djendir]
// Date: [2026-11-21]
// Description: Blink an LED on pin 13 every second
// ============================================

void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // Turn LED ON
  delay(1000);            // Wait 1 second
  digitalWrite(13, LOW);  // Turn LED OFF
  delay(1000);            // Wait 1 second
}
