#include <ESP8266WiFi.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println();
  WiFi.disconnect();
  delay(1000);
  Serial.println("Nearby network found");
  Serial.println(WiFi.scanNetworks());
  delay(500);
  Serial.println("List of surrounding Network SSId");
  int n = WiFi.scanNetworks();
  for(int i=0; i<n; i++){
    Serial.println(WiFi.SSID(i));
  }
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
