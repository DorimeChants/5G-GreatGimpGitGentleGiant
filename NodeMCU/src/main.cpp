#include <Arduino.h>
#include "ESP8266WiFi.h"

int nwifi = 0;

// 
void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(LED_BUILTIN, OUTPUT); 
  digitalWrite(LED_BUILTIN, LOW);
}

// Loop cycle
void loop() {

  nwifi = WiFi.scanNetworks();  

  // == DEBUG == 
  Serial.print("N. di WIFI: ");
  Serial.println(nwifi);
  delay(500);
}