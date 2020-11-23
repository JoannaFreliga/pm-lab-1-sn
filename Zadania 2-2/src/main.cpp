#include <Arduino.h>

#define LED_RED 10

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  pinMode(LED_RED, HIGH);
  delay(500);
  digitalWrite(LED_RED, LOW);
  delay(500);
  // put your main code here, to run repeatedly:
}