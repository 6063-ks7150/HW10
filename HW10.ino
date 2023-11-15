const int ledPins[] = {2, 3, 4, 5, 6, 7}; // digital pins for LEDs (d2, d3, d4, d5, d6, d7)
const int ledsCount = 6;
const int interval = 10000; // Interval in milliseconds (10 seconds)
const int allInterval = 30000; // Interval in 30 seconds to make all light up 
void setup() {
  for (int i = 0; i < ledsCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledsCount; i+=2) {
    digitalWrite(ledPins[i], HIGH);} // Turn on the current LED
    delay(interval);
    for (int i = 0;  i < ledsCount; i += 2){
    digitalWrite(ledPins[i], LOW);}// Turn off the current LED

    // All LEDs light up every 30 seconds
  delay(allInterval);

  for (int i = 0; i < ledsCount; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on all LEDs
  }
  delay(interval);
  
  for (int i = 0; i < ledsCount; i++) {
    digitalWrite(ledPins[i], LOW); // Turn off all LEDs
  }
    delay(interval);
  
}
