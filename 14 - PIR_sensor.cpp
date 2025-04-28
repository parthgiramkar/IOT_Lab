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
 how to connect : - connect the pir sensor which is of 3pin wire to the last row of adc for ardunio only in that row connect to the 8slot 
  and then for - led connect the 6pin slot of led to the - uske niche 2slots hai aur uske niche 7slots hai so connect it to the last 
  means the 7th slot of 6pin wire , so connect it
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




