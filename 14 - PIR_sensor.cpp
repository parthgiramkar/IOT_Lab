int pirPin = 7;    // Pin connected to PIR sensor OUT
int ledPin = 13;   // Pin connected to LED (optional)

void setup() {
  pinMode(pirPin, INPUT);    // Set PIR sensor pin as input
  pinMode(ledPin, OUTPUT);   // Set LED pin as output (optional)
  Serial.begin(9600);        // Start serial communication
}

void loop() {
  int motion = digitalRead(pirPin);   // Read the state of the PIR sensor

  if (motion == HIGH) {
    // Motion detected
    digitalWrite(ledPin, HIGH);       // Turn ON LED (optional)
    Serial.println("PIR Motion Detected !");
  } else {
    // No motion
    digitalWrite(ledPin, LOW);        // Turn OFF LED (optional)
    Serial.println("PIR not detected any motion");
  }

  delay(1000);   // Small delay to prevent excessive serial printing
}







/*
 how to connect : - 
  Code Explanation : - 
int pirPin = 7; → Pin 7 is used to connect the PIR sensor output.

int ledPin = 13; → Pin 13 is connected to an LED (optional, for indication).

setup() function:
pinMode(pirPin, INPUT); → Set the PIR sensor pin as input (it will read HIGH or LOW).

pinMode(ledPin, OUTPUT); → Set the LED pin as output (it will turn ON or OFF).

Serial.begin(9600); → Start serial communication at 9600 baud rate to display messages on the Serial Monitor.

 loop() function:
int motion = digitalRead(pirPin); → Read the PIR sensor value:

If motion is HIGH → Motion is detected.

If motion is LOW → No motion.

If motion is detected:

digitalWrite(ledPin, HIGH); → Turn ON the LED.

Serial.println("PIR Motion Detected !"); → Print this message on Serial Monitor.

If no motion:

digitalWrite(ledPin, LOW); → Turn OFF the LED.

Serial.println("PIR not detected any motion"); → Print this message.

delay(1000); → Wait for 1 second to avoid printing too many messages too fast.

*/




