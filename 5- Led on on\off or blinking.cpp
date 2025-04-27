#define LED1 10
#define LED2 11
#define LED3 12
#define LED4 13




void setup() {
 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
 
}


void loop() {

  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(200);
 
  digitalWrite(LED2, HIGH);
  delay(200);
  digitalWrite(LED2, LOW);
  delay(200);
 
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED3, LOW);
  delay(200);
 
  digitalWrite(LED4, HIGH);
  delay(200);
  digitalWrite(LED4, LOW);
  delay(200);
 
}








/*

how to connect - to left of rfid reader there is keypad and beside that there is written led
stuck that into the 6pin port and for other end - led ke niche port pins hai
aur uske niche 7 port to 7port mein se 7vi vali port  mein attache the 6pin ki  wire and then the led will blink
Code Explanation:
#define LED1 10, #define LED2 11, etc.:
#define is used to give a name to a value.

Here, you are saying:

LED1 = pin 10

LED2 = pin 11

LED3 = pin 12

LED4 = pin 13

This makes your code easier to read and change.
(Instead of writing 10, 11, etc. everywhere, you use LED1, LED2.)

void setup() {}:
This function runs only once when Arduino starts.

You use setup() to set the pin modes.

pinMode(LED1, OUTPUT);
pinMode() is used to tell Arduino how you want to use the pin:

OUTPUT means sending signal (like turning an LED ON or OFF).

INPUT would mean receiving signal (like from a sensor), but here we are using OUTPUT because we want to control LEDs.

So you are saying:

Pin 10 (LED1) is output.

Pin 11 (LED2) is output.

Pin 12 (LED3) is output.

Pin 13 (LED4) is output.

void loop() {}:
This function keeps running forever after setup() finishes.

Inside loop(), you are blinking the LEDs one by one.

What each command means inside loop():
digitalWrite(LED1, HIGH);
digitalWrite() is used to turn a pin ON or OFF.

HIGH means turn ON (give 5V).

So here, LED1 (pin 10) is turned ON.

delay(200);
delay() pauses the Arduino for some time.

200 means 200 milliseconds (0.2 seconds).

So after turning the LED ON, Arduino waits for 200 ms.

digitalWrite(LED1, LOW);
LOW means turn OFF (0V).

So here, LED1 (pin 10) is turned OFF.

delay(200);
Again wait for 200 ms after turning it OFF.

Step-by-step process:
Turn ON LED1 → Wait 200 ms → Turn OFF LED1 → Wait 200 ms.

Turn ON LED2 → Wait 200 ms → Turn OFF LED2 → Wait 200 ms.

Turn ON LED3 → Wait 200 ms → Turn OFF LED3 → Wait 200 ms.

Turn ON LED4 → Wait 200 ms → Turn OFF LED4 → Wait 200 ms.

Repeat the whole cycle forever.

In very simple words:
pinMode() → Sets the role of the pin (OUTPUT = send signal to LED).

digitalWrite() → Turns the LED ON or OFF.

delay() → Pauses the program for some time (makes LEDs visible blinking).

HIGH → ON.

LOW → OFF.

*/
