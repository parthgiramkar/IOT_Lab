// Define the pin for the piezo buzzer
#define BUZZER_PIN 8


void setup() {
  tone(BUZZER_PIN, 440, 500); // Play A4 (440 Hz) for 500 ms
  delay(1000); // Wait for 1 second
  
  tone(BUZZER_PIN, 523, 500); // Play C5 (523 Hz) for 500 ms
  delay(1000); // Wait for 1 second
}


void loop() {
  // No code needed in loop
}










/*
how to connect - connect the 3pin wire to the buzzer section it is near the rfid reader and then 
the other pin is connected to the adc for ardunio only in that section , so to the left of it connect to the 10port 
the 3pin wire 
Code Explanation : - 
// Define the pin for the piezo buzzer
#define BUZZER_PIN 8
You are connecting the buzzer to pin 8 of Arduino.
tone(pin, frequency, duration) is used to make the buzzer beep at a specific sound.

tone(BUZZER_PIN, 440, 500);

Plays sound at 440 Hz (which is musical note A4).

For 500 milliseconds (half a second).

Then delay(1000); waits 1 second (1000 milliseconds).

After that, tone(BUZZER_PIN, 523, 500);

Plays sound at 523 Hz (which is musical note C5).

Again for 500 milliseconds.
Another 1 second delay after that.
  void loop() {
  // No code needed in loop
}
Nothing happens inside the loop.

Only setup() runs when Arduino starts.

In simple words:
Arduino plays one beep (A4 sound), waits.

Then plays another beep (C5 sound), waits.

Then it stops because loop() has nothing.

Output on buzzer:
First beep sound (A4 = 440 Hz) for half a second.

1 second pause.

Second beep sound (C5 = 523 Hz) for half a second.

1 second pause.

Then silence (no beeps). */










