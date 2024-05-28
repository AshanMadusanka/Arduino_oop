#include <Arduino.h>
#include "Led.h"
#define LED_PIN 13
// 2024/05/27 Daily Habbit code practices
// 2024/05/28 Daily Habbit code practices



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

