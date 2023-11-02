#include <Arduino.h>
#define sensePin 0
#define internalLED 1
int digitalPinVal = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(internalLED, OUTPUT); //set PB1 (PWM1) as output INTERNAL LED 
  pinMode(sensePin, INPUT_PULLUP);
}

void loop() {
  // Read the digital IO pin state LOW (Touched) HIGH (Open)
  // Soft potentiometer will reduce current to Zero if touched at the end away from the wires
  // Normal state is high, input pin is pulled high

  digitalPinVal = digitalRead(sensePin);
  if (digitalPinVal < 1){
    // Turn on the LED
    analogWrite(internalLED, 255);
    // Wait for a second
    delay(250);
  }else{
    // Turn the LED OFF
    analogWrite(internalLED, 0);
  }
}

