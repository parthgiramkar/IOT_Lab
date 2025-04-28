void setup() {
  pinMode(3, OUTPUT);   // Set pin 3 as OUTPUT (for LED or buzzer)
  pinMode(10, INPUT);   // Set pin 10 as INPUT (for obstacle sensor)
  
}

void loop() {
  int hasObstacle = digitalRead(10); // Read sensor value from pin 10

  if (hasObstacle == 1) {
    digitalWrite(3, HIGH);  // Turn ON LED/buzzer if obstacle detected
  }
  else {
    digitalWrite(3, LOW);   // Turn OFF LED/buzzer if no obstacle
  }

  delay(200);  // Wait for 200 milliseconds before next check
  
}


















/*
how to connect :- connect the led_pin of 6pin wire to the slot of led and other end - vo led ke pichle row ke piche 7port hai , 
so connect the another slot to the 5th port and fix the 6pin wire to it and for IR sensor connect the one wire to the adc for ardunio only 
is row mein matlab iske left mein 11th slot mein mein fix karna and other end of ir should be free for detection
Code Explanation:

pin 3 is set as OUTPUT → something will turn ON/OFF (like an LED or buzzer).

pin 10 is set as INPUT → it will read something (like from an obstacle sensor).
void loop() {
Arduino reads pin 10.

If something is detected (example: an obstacle is near), hasObstacle becomes 1 (HIGH).

If nothing is there, hasObstacle becomes 0 (LOW).

If obstacle is detected (hasObstacle == 1):

Turn ON whatever is connected to pin 3 (like LED ON or buzzer ON).


Turn OFF the device (like LED OFF).
  delay(200);
}
After each reading, Arduino waits for 200 milliseconds (0.2 seconds).

Then it checks again.

If Arduino sees an obstacle on pin 10 ➔ turn ON (LED/buzzer at pin 3).

If no obstacle ➔ turn OFF (LED/buzzer at pin 3).

Keep checking again and again every 0.2 seconds.
*/
