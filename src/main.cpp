#include <Arduino.h>
#include "heltec.h"

void setup() {
  Serial.begin(9600);
 Heltec.begin(true, false, true);
 
 Heltec.display->setContrast(255);
 Heltec.display->clear();
  
 Heltec.display->setFont(ArialMT_Plain_24);
 Heltec.display->drawString(0, 0, "LabMaker");
  
 Heltec.display->setFont(ArialMT_Plain_16);
 Heltec.display->drawString(0, 25, "Umidade de Solo");
  
 Heltec.display->setFont(ArialMT_Plain_10);
 Heltec.display->drawString(0, 45, "90%");
 
 Heltec.display->display();

}

void loop() {
  Serial.println("Hello Lab Maker");
  delay(100);
}