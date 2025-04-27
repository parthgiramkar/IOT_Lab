#define GREEN_LED 4
#define YELLOW_LED 2
#define RED_LED 3


int counter = 0;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);

  if (counter <= 100) {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, HIGH);
    delay(20);
  } 
  else if (counter > 100 && counter <= 200) {
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, HIGH);
    delay(20);
  } 
  else if (counter > 200) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, HIGH);
    delay(20);
  }

  counter++;

  if (counter > 300) {
    counter = 0;
  }
  delay(100);
}


























/*
how to connect - to the left of rfid reader there is keypad and to  left  of  it there is leds
which has 6pins so , - connect to it and for other end uske niche 2set of pins hai aur uske niche ke row mein 
7set pins to use mein se 5 no. - ke pins ko connect kar aur wire jo hai 6pin vali rhegi 
Code Explanation:
#define GREEN_LED 4, etc.:
You are giving names to pin numbers:

GREEN_LED = Pin 4

YELLOW_LED = Pin 2

RED_LED = Pin 3

This makes it easier to read and understand the code.

int counter = 0;
You are creating a counter variable and setting its starting value to 0.

This counter will keep increasing and help in deciding which LED should be ON.

void setup() {}:
This part runs once when the Arduino starts.

You are telling Arduino that pins 2, 3, and 4 are OUTPUT pins:

pinMode(GREEN_LED, OUTPUT);

pinMode(YELLOW_LED, OUTPUT);

pinMode(RED_LED, OUTPUT);

OUTPUT means Arduino will control the LEDs (turn them ON or OFF).

void loop() {}:
This part runs again and again forever.

Inside the loop, you are controlling the LEDs based on the value of the counter.

Step-by-step what happens in loop():
1. Reset all LEDs OFF first:
digitalWrite(GREEN_LED, LOW);
digitalWrite(YELLOW_LED, LOW);
digitalWrite(RED_LED, LOW);
This turns OFF all LEDs before checking conditions.

It keeps the LED behavior clean and avoids mistakes.

2. Check the value of counter and turn ON LEDs accordingly:
➔ If counter <= 100:
talWrite(GREEN_LED, LOW);
digitalWrite(YELLOW_LED, HIGH);
digitalWrite(RED_LED, HIGH);
delay(20);
GREEN LED is OFF.

YELLOW and RED LEDs are ON.

Small delay(20ms).

➔ Else if counter > 100 && counter <= 200:
digitalWrite(YELLOW_LED, LOW);
digitalWrite(GREEN_LED, HIGH);
digitalWrite(RED_LED, HIGH);
delay(20);
YELLOW LED is OFF.

GREEN and RED LEDs are ON.

Small delay(20ms).

➔ Else if counter > 200:
digitalWrite(RED_LED, LOW);
digitalWrite(GREEN_LED, HIGH);
digitalWrite(YELLOW_LED, HIGH);
delay(20);
RED LED is OFF.

GREEN and YELLOW LEDs are ON.

Small delay(20ms).

3. Increment the counter:
counter++;
After checking and lighting LEDs, you increase counter by 1.

4. Reset counter after it becomes greater than 300:
if (counter > 300) {
  counter = 0;
}
This brings the counter back to 0 so that the LED sequence can repeat.

5. Final small delay:
Edit
delay(100);
Wait 100 milliseconds before starting the next loop. */
