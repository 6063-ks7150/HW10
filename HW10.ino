const int ledPins[] = {2, 3}; // Use digital pins for LEDs
const int ledsCount = 2;
const int interval = 10000; // Interval in milliseconds (10 seconds)

void setup() {
  for (int i = 0; i < ledsCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledsCount; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(interval); 
    digitalWrite(ledPins[i], LOW); // Turn off the current LED
    delay(interval);
  }
}
