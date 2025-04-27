char ch;
void setup() {
  // Configures pins 3, 5, and 6 as output pins to control the LEDs.
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  // Initializes serial communication with a baud rate of 9600.
  Serial.begin(9600);
}

void loop() {
  // If data is available in the Serial Monitor
  if (Serial.available()) {
    // Read the data (character) and store it in 'ch'
    ch = Serial.read();
  }

  // Check the value of 'ch' to control the LEDs
  if (ch == 'R' || ch == 'r') {
    // If 'R' or 'r' is received, turn on Red LED (pin 3)
    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
  
  if (ch == 'G' || ch == 'g') {
    // If 'G' or 'g' is received, turn on Green LED (pin 5)
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
  }
  
  if (ch == 'B' || ch == 'b') {
    
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
  }
}









/*

how to connect : - 
Explanation:
Pin Configuration:

pinMode(3, OUTPUT);, pinMode(5, OUTPUT);, pinMode(6, OUTPUT); — These lines configure pins 3, 5, and 6 as output pins, so they can be used to control LEDs connected to those pins.

Serial Communication:

Serial.begin(9600); — Initializes the serial communication with a baud rate of 9600. This allows you to send data to and from your Arduino board via the Serial Monitor.

Reading Data:

if(Serial.available()){ ch = Serial.read(); } — This checks if any data has been sent from the Serial Monitor to the Arduino. If data is available, it reads the character and stores it in the variable ch.

LED Control Logic:

Based on the input character (ch), different LEDs are turned on or off. The conditions:

'R' or 'r': Turns on the Red LED (connected to pin 3), and turns off the others.

'G' or 'g': Turns on the Green LED (connected to pin 5), and turns off the others.

'B' or 'b': Turns on the Blue LED (connected to pin 6), and turns off the others.*/







