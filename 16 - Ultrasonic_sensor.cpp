#define TRIG_PIN 8 // Define the Trigger pin
#define ECHO_PIN 9 // Define the Echo pin

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  pinMode(TRIG_PIN, OUTPUT); // Set Trigger pin as output
  pinMode(ECHO_PIN, INPUT);  // Set Echo pin as input
}

void loop() {
  long duration;
  float distance;

  // Send a 10-microsecond pulse to trigger pin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure the echo pulse duration
  duration = pulseIn(ECHO_PIN, HIGH);

  // Convert time into distance (in cm)
  distance = duration * 0.034 / 2;

  // Print the distance value on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Wait 500ms before next reading
  
}










/*
how to connect : - the second last row means , the right of rgb connector row in that the the 7slot 
so , just connect the 4pin wire to it of ultrasonic sensor and other end will be free as its ultrasonic sensor
1. Define Pins for Trigger and Echo
#define TRIG_PIN 8 // Define the Trigger pin
#define ECHO_PIN 9 // Define the Echo pin
TRIG_PIN is connected to the Trigger pin of the Ultrasonic Sensor (for sending the signal).

ECHO_PIN is connected to the Echo pin of the Ultrasonic Sensor (for receiving the signal).

2. Setup the Initial Configuration

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  pinMode(TRIG_PIN, OUTPUT); // Set Trigger pin as output
  pinMode(ECHO_PIN, INPUT);  // Set Echo pin as input
}
Serial.begin(9600); initializes the communication with your computer (via the USB connection) and allows you to see data on the Serial Monitor at a baud rate of 9600 (standard).

pinMode(TRIG_PIN, OUTPUT); configures the TRIG_PIN to send signals (output).

pinMode(ECHO_PIN, INPUT); configures the ECHO_PIN to receive signals (input).

3. Loop - Continuously Measure Distance
void loop() {
  long duration;
  float distance;
Inside the loop(), it will continuously check the distance.

duration stores the time it takes for the sound pulse to travel to an object and back.

distance will store the calculated distance based on the pulse duration.

4. Send Pulse to Trigger Pin
  // Send a 10-microsecond pulse to trigger pin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
digitalWrite(TRIG_PIN, LOW); ensures that the trigger is initially off.

delayMicroseconds(2); ensures the pin stays LOW for a tiny moment to prepare.

digitalWrite(TRIG_PIN, HIGH); sends a high pulse to the TRIG_PIN for 10 microseconds.

delayMicroseconds(10); keeps it high for 10 microseconds (triggering the ultrasonic sensor).

digitalWrite(TRIG_PIN, LOW); turns the pulse off.

This triggers the ultrasonic sensor to send out a sound wave.

5. Measure the Echo Pulse Duration

  duration = pulseIn(ECHO_PIN, HIGH);
pulseIn(ECHO_PIN, HIGH); measures the duration of the pulse received at the ECHO_PIN.

This pulse represents how long it took the sound wave to travel to an object and back. The sensor measures this as the duration.

6. Calculate the Distance
  // Convert time into distance (in cm)
  distance = duration * 0.034 / 2;
The time taken for the sound pulse to travel is used to calculate the distance.

The speed of sound is 0.034 cm/µs. By multiplying the duration (in microseconds) by this value and dividing by 2 (since the sound travels to the object and back), we get the distance in centimeters.

7. Print the Distance to the Serial Monitor
  // Print the distance value on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
Serial.print() and Serial.println() send the distance value to the Serial Monitor to be displayed.

8. Delay for Stability
delay(500); introduces a delay of 500 milliseconds (0.5 seconds) before the next reading.

This delay is useful to avoid rapid serial output and give the sensor a little time to stabilize before the next measurement.
*/

