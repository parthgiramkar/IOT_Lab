#include <DHT.h>

#define DHTPIN 2     // Pin where the DHT11 sensor is connected
#define DHTTYPE DHT11   // Type of sensor (DHT11 or DHT22)

DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  delay(2000);
 
  float temperature = dht.readTemperature(); // Read temperature in Celsius
  float humidity = dht.readHumidity();       // Read humidity
 
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  
}







/*
  how to connect : - at the bottom of board u wil see ADC for ardunio only after that in right at the bottom only
there are 14 ports , from start means from right_of ADC for ardunio connect to the 3rd port which is 3pin wire 
so connect the 3pin wire to_it and other end will be free as we need to read temp&humidity

  libraries - DHTNEW by rob tillaart , DHT sensor library by adafruit , DHT11 by dhruba saha

Code Explanation:
#include <DHT.h>

Includes the DHT library.

This library has ready-made functions to read temperature and humidity easily.

#define DHTPIN 2

Sets DHTPIN as pin number 2.

The DHT11 sensor's data pin is connected to Arduino pin 2.
#define DHTTYPE DHT11
Defines the sensor type as DHT11.
DHT dht(DHTPIN, DHTTYPE);

Creates an object dht which knows:

The pin number (2),

The sensor type (DHT11).

This object will help to read temperature and humidity.

void setup()
setup() runs only once when Arduino starts.
Starts the Serial Communication at 9600 baud rate.

This is needed to show temperature and humidity on the Serial Monitor.
dht.begin();
Prepares the DHT sensor to start taking readings.

void loop()
loop() runs again and again.
  Waits 2 seconds (2000 milliseconds) before taking a new reading.

Reads temperature and humidity from the DHT11 sensor.
Stores the values in temperature and humidity variables.
isnan() checks if the value is Not a Number (NaN).

If reading fails, it prints "Failed to read" and stops the current loop.


