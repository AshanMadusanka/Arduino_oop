#include <Arduino.h>
#define LED_PIN 13
// 2024/05/27 Daily Habbit code practices
class Led
{
private:
  byte pin;   // Attribute
public:
  Led(){}
  Led(byte pin){        //constuctor
    this->pin = pin;
  }

void init(){

  pinMode(LED_PIN,OUTPUT);  // methods
}

void on(){

  digitalWrite(LED_PIN,HIGH);
}

void off(){

  digitalWrite(LED_PIN,LOW);
}


};


Led led(LED_PIN);

void setup() {

  led.init();

}

void loop() {

  led.on();
  delay(1000);
  led.off();
  delay(1000);

}

