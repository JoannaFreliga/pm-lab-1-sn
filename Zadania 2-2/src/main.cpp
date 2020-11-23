#include <Arduino.h>

#define LED_RED 10

#define M_KROPKA_T 200
#define M_KROPKA_T 3 * M_KROPKA_T
#define M_PAUZA_T 3 * M_KROPKA_T
#define M_SPACJA_T 7 * M_KROPKA_T

void setup() {
  pinMode(LED_RED, OUTPUT);
  // put your setup code here, to run once:
}

void loop() 
{
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(LED_RED, HIGH);
    delay(M_KROPKA_T);
    digitalWrite(LED_RED, LOW);
    delay(M_PAUZA_T);
  }
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(LED_RED, HIGH);
    delay(M_KROPKA_T);
    digitalWrite(LED_RED, LOW);
    delay(M_PAUZA_T);
  }
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(LED_RED, HIGH);
    delay(M_KROPKA_T);
    digitalWrite(LED_RED, LOW);
    delay(M_PAUZA_T);
  }
  delay(M_SPACJA_T);
  // put your main code here, to run repeatedly:
}