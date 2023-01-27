#include <Arduino.h>

int blinkInterval = 1000; // Default blink interval
int ledPin = 13; // Pin for the LED

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, HIGH);
    delay(blinkInterval);
    digitalWrite(ledPin, LOW);
    delay(blinkInterval);
}

void updateBlinkInterval(int newInterval) {
    blinkInterval = newInterval;
}
