#include "dht.h"
#define dataPin 2


dht DHT;
int temp;
int hum;


void setup() {
  Serial.begin(9600);
  delay(2000); // Wait for the DHT sensor to stabilize
}


void loop() {
  int readData = DHT.read11(dataPin);
  hum = DHT.humidity;
  temp = DHT.temperature;


  // Output data formatted for Serial Plotter
  Serial.print(hum);  // Humidity
  Serial.print(",");  // Separator
  Serial.println(temp);  // Temperature


  delay(1000); // Wait 1 second before next reading
}



