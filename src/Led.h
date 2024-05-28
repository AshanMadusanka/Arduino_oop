#ifndef LED_H
#define LED_H

#include<Arduino.h>

class Led
{
private:
  byte pin;             // Attribute
public:
Led(){}               // Do not use
Led(byte pin);

void init();
void on();
void off();


};


#endif