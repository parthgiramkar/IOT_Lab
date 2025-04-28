#include <LiquidCrystal.h>

int num;
String s;

// Create LCD object with pins: (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd1(6, 7, 2, 3, 4, 5);

void setup() {
  lcd1.begin(16, 2);           // Initialize the LCD with 16 columns and 2 rows
  lcd1.print("Enter the Number");
  Serial.begin(9600);          // Initialize Serial Communication
}

void loop() {
  if (Serial.available()) {
    num = Serial.parseInt();   // Read integer input from Serial Monitor

    lcd1.clear();              // Clear LCD
    delay(500);

    lcd1.setCursor(0, 0);       // Set cursor to beginning
    s = "Square of " + String(num) + " : " + String(num * num);
    lcd1.print(s);              // Display the square

    delay(10000);               // Wait 10 seconds to display result

    lcd1.clear();               // Clear LCD again
    lcd1.setCursor(0, 0);
    lcd1.print("Enter the Number"); // Prompt for next number
  }
}












/* 
how to connect : - connect the lcd display near the rfid reader , which is of 8pins to the - other end of wire jo hai
jo led aur keypads hai uske niche two rows are there usmein 1st one , so attach that 8pinwire to the 1st one 
Code Explanation
#include <LiquidCrystal.h>
This includes the LCD library.

It helps us control the LCD screen easily.
int num;
String s;
num will store the number entered from Serial Monitor.

 will store the message to print on LCD (example: "Square of 5 : 25").
LiquidCrystal lcd1(6, 7, 2, 3, 4, 5);
Creates an LCD object named lcd1.

Tells Arduino which pins are connected to LCD:

RS -> 6

E -> 7

D4 -> 2
D5 -> 3

D6 -> 4

D7 -> 5
void setup() {
  lcd1.begin(16, 2);
  lcd1.print("Enter the Number");
  Serial.begin(9600);
}
lcd1.begin(16, 2) → Starts the LCD with 16 columns and 2 rows.

lcd1.print("Enter the Number") → Shows message on LCD asking for input.

Serial.begin(9600) → Starts Serial communication with the computer at 9600 bits/sec.


void loop() {
  if (Serial.available()) {
    num = Serial.parseInt();
Checks if any number is typed on Serial Monitor.

If yes, reads the number and stores it in num.
    lcd1.clear();
    delay(500);
Clears the LCD screen.

Waits for 500 milliseconds (0.5 seconds) before writing new data.
    lcd1.setCursor(0, 0);
Sets cursor to Row 0, Column 0 (top-left corner) of LCD.
    s = "Square of " + String(num) + " : " + String(num * num);
    lcd1.print(s);
Creates a message like "Square of 5 : 25".

Displays it on the LCD.
    delay(10000);
Waits for 10 seconds so you can read the output on the LCD.

After 10 seconds:

Clears the LCD again.

Asks for a new number ("Enter the Number").  */
