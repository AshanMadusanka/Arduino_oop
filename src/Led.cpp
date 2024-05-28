#include "Led.h"

 Led::Led(byte pin){        //constuctor
    this->pin = pin;
  }

void Led::init(){

  pinMode(pin,OUTPUT);  // methods
}

void Led::on(){

  digitalWrite(pin,HIGH);
}

void Led::off(){

  digitalWrite(pin,LOW);
}
