#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  // put your setup code here, to run once:
}

void loop() {
  pinMode(LED_BUILTIN, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  // put your main code here, to run repeatedly:
}