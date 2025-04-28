void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(10);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(10);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(10);
  
}









/*
how to connect : - to the right of rfid reader and to the left of stepper motor there is 6pin slot
so , connect the 6pin wire to the 6pin slot and for other end - led ke niche 2rows hai aur uske niche 7 rows hai so in that the 5slot which
contains 6pinwire slot so connect it and       for the stepper motor - connect the 5pinwire tothe stepper motor section i.e to the right of rfid reader and obviously the other end will be free

Explanation:
In the setup() function:

We set pins 2, 3, 4, and 5 as output pins using pinMode().
(These are likely connected to LEDs or maybe to a motor driver.)

In the loop() function:

The program keeps repeating the following steps forever:

First step:

Pin 2 is turned HIGH (ON),

Pins 3, 4, and 5 are kept LOW (OFF).

Wait for 10 milliseconds (delay(10)).

Second step:

Pin 3 is turned HIGH (ON),

Pins 2, 4, and 5 are kept LOW (OFF).

Wait for 10 milliseconds.

Third step:

Pin 4 is turned HIGH (ON),

Pins 2, 3, and 5 are kept LOW (OFF).

Wait for 10 milliseconds.

Fourth step:

Pin 5 is turned HIGH (ON),

Pins 2, 3, and 4 are kept LOW (OFF).

Wait for 10 milliseconds.
Meaning:
One by one, each output (each LED or motor coil) is turned ON individually, for a very short time (10ms).
This creates a sequential effect — like LEDs running one after another or motor coils getting energized step-by-step.
  */

