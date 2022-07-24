#include "DHT.h"
#define DHTTYPE DHT11
#define dht_dpin 11

DHT dht(dht_dpin, DHTTYPE);

void setup() {
  dht.begin();
  Serial.begin(9600);
  Serial.println("Humidity and Temperature \n\n");
  Serial.println("=============================");
  delay(700);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("Current Humidity= ");
  Serial.print(h);
  Serial.println("% ");
  Serial.print("Current Temperature= ");
  Serial.print(t);
  Serial.println("C ");
  delay(800);
}
