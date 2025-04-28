#include <DHT.h>

#define DHTPIN 2       // Pin where the DHT11 sensor is connected
#define DHTTYPE DHT11  // Type of sensor (DHT11 or DHT22)

DHT dht(DHTPIN, DHTTYPE);
float maxTemp = -1000;  // Initialize max temperature to a very low value
float minTemp = 1000;   // Initialize min temperature to a very high value

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
 
  // Read temperature in Celsius
  float temperatureC = dht.readTemperature();


  // Read temperature in Fahrenheit
  float temperatureF = temperatureC * 9.0 / 5.0 + 32.0;


  // Update max and min temperatures
  if (temperatureC > maxTemp) {
    maxTemp = temperatureC;
  }
  if (temperatureC < minTemp) {
    minTemp = temperatureC;
  }
 
  // Display temperature in Celsius and Fahrenheit
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C, ");
  Serial.print(temperatureF);
  Serial.println(" °F");


  // Display maximum and minimum temperatures seen
  Serial.print("Max Temperature: ");
  Serial.print(maxTemp);
  Serial.print(" °C, Min Temperature: ");
  Serial.print(minTemp);
  Serial.println(" °C");
}






/*
Code Explanation:- 
#include <DHT.h>

Includes the DHT sensor library.

#define DHTPIN 2

The DHT11 sensor's data pin is connected to Arduino pin 2.

#define DHTTYPE DHT11

Defines the sensor type as DHT11.

DHT dht(DHTPIN, DHTTYPE);
Creates a dht object to use DHT functions easily.
float maxTemp = -1000;
Initializes maxTemp to a very small number.
So that any real temperature reading will be bigger.
float minTemp = 1000;
Initializes minTemp to a very large number.
So that any real temperature reading will be smaller.
void setup()
Runs once when Arduino starts.
Serial.begin(9600);
Starts the Serial Communication.
dht.begin();
Prepares the DHT sensor for reading.

void loop()
Runs repeatedly.
Waits 2 seconds between readings.

Reading temperature:
Converts the Celsius temperature to Fahrenheit.

Updating max and min temperatures:
if (temperatureC > maxTemp) {
  maxTemp = temperatureC;
}
if (temperatureC < minTemp) {
  minTemp = temperatureC;
}
If current temperature is higher than previous maxTemp, update maxTemp.

If current temperature is lower than previous minTemp, update minTemp.

Prints current temperature in Celsius and Fahrenheit.

Serial.print("Max Temperature: ");
Serial.print(maxTemp);
Serial.print(" °C, Min Temperature: ");
Serial.print(minTemp);
Serial.println(" °C");
Prints maximum and minimum temperatures recorded so far.*/







