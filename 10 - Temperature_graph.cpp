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










/*  
libraries to include - DHTlib by Rob Tillaart , DHTNEW by rob tillaart , DHT sensor library by adafruit , DHT11 by dhruba saha
, DHT sensor library for ESPx by beegee_tokyo
step-by-step explanation:
1. #include "dht.h"
This tells Arduino to use the DHT library (which has pre-written functions to work with the DHT sensor).

2. #define dataPin 2
You are saying that your DHT sensor is connected to pin 2 of Arduino.

So, whenever you say dataPin, it means pin 2.

3. dht DHT;
You are creating an object named DHT using the dht class.

This DHT object will help you read temperature and humidity.

4. int temp; int hum;
You are making two variables:

temp will store temperature.

hum will store humidity.

5. void setup()
This part runs only once when Arduino starts.

Serial.begin(9600); → Start the Serial Monitor to see the readings.

delay(2000); → Wait for 2 seconds to give the sensor some time to stabilize.

6. void loop()
This part runs again and again forever.

Inside loop():

DHT.read11(dataPin); → Ask the DHT sensor to give data from pin 2.

hum = DHT.humidity; → Save the humidity value.

temp = DHT.temperature; → Save the temperature value.

Now print the values:

Serial.print(hum); → Print humidity first.

Serial.print(","); → Print a comma (,) between humidity and temperature.

Serial.println(temp); → Then print temperature and move to next line.

This format (humidity, temperature) is good for plotting on Serial Plotter.

7. delay(1000);
After printing, Arduino waits for 1 second before taking the next reading.*/












  

