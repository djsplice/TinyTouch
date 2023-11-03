#include <Arduino.h>
#define sensePin 0
#define internalLED 1
int digitalPinVal = 1;

void setup() {
  pinMode(internalLED, OUTPUT); //set PB1 (PWM1) as output INTERNAL RED LED 
  pinMode(sensePin, INPUT_PULLUP);
}

void loop() {
  // Read the digital IO pin - state LOW (Touched) HIGH (Open)
  // Soft potentiometer will reduce current to zero if touched at the end away from the wires
  // Normal state is high (Open, no touch), input pin is pulled high

  digitalPinVal = digitalRead(sensePin);
  if (digitalPinVal < 1){
    // Touch detected - Turn on the RED LED
    analogWrite(internalLED, 255);
    // Wait for a quarter second
    delay(250);
  }else{
    // No Touch detected - Turn the RED LED OFF
    analogWrite(internalLED, 0);
  }
}

