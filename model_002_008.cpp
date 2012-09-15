#include "WProgram.h"
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int switchPin = 8;
int switchState = 0;
int flex = 0;
int timer = 500;

void setup(){
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
    pinMode(pin6, OUTPUT);
    pinMode(pin7, OUTPUT);
    pinMode(flex, OUTPUT);
    pinMode(switchPin, INPUT);
}

void loop() {
    switchState = digitalRead(switchPin);
    if (switchState == 1) {
       digitalWrite(flex, HIGH);
       digitalWrite(pin2, HIGH);
       delay(timer);
       digitalWrite(pin2, LOW);
       delay(timer);

       digitalWrite(flex, HIGH);
       digitalWrite(pin3, HIGH);
       delay(timer);
       digitalWrite(pin3, LOW);
       delay(timer);

       digitalWrite(flex, HIGH);
       digitalWrite(pin4, HIGH);
       delay(timer);
       digitalWrite(pin4, LOW);
       delay(timer);

       digitalWrite(flex, HIGH);
       digitalWrite(pin5, HIGH);
       delay(timer);
       digitalWrite(pin5, LOW);
       delay(timer);

       digitalWrite(flex, HIGH);
       digitalWrite(pin6, HIGH);
       delay(timer);
       digitalWrite(pin6, LOW);
       delay(timer);

       digitalWrite(flex, LOW);
       digitalWrite(pin7, HIGH);
       delay(timer);
       digitalWrite(pin7, LOW);
       delay(timer);

       digitalWrite(flex, LOW);
       digitalWrite(pin6, HIGH);
       delay(timer);
       digitalWrite(pin6, LOW);
       delay(timer);

       digitalWrite(flex, LOW);
       digitalWrite(pin5, HIGH);
       delay(timer);
       digitalWrite(pin5, LOW);
       delay(timer);

       digitalWrite(flex, LOW);
       digitalWrite(pin4, HIGH);
       delay(timer);
       digitalWrite(pin4, LOW);
       delay(timer);

       digitalWrite(flex, LOW);
       digitalWrite(pin3, HIGH);
       delay(timer);
       digitalWrite(pin3, LOW);
       delay(timer);
    }
    else {
       digitalWrite(flex, HIGH);
       digitalWrite(pin2, HIGH);
       digitalWrite(pin3, HIGH);
       digitalWrite(pin4, HIGH);
       digitalWrite(pin5, HIGH);
       digitalWrite(pin6, HIGH);
       digitalWrite(pin7, HIGH);
    }
}
