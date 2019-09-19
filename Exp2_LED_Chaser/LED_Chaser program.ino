/*Program for LED chaser back and forth.
  Pin 2, 3, 4, 5, 6, 7, 8 and 9 are connected.
 */
 
void setup() {                
  for (int i=2; i<=9; i=i+1){    // counting the variable i from 2 to 9
    pinMode(i, OUTPUT);            // initialising the pin at index i of the array of pins as OUTPUT
  }
}
 
void loop() {
  for (int i=2 ; i<=9 ; i=i+1){    // chasing right
    digitalWrite(i, HIGH);         // switching the LED at index i on
    delay(100);                          // stopping the program for 100 milliseconds
    digitalWrite(i, LOW);          // switching the LED at index i off
  }
  for (int i=9 ; i>=2; i=i-1){   // chasing left (except the outer leds)
    digitalWrite(i, HIGH);         // switching the LED at index i on
    delay(100);                          // stopping the program for 100 milliseconds
    digitalWrite(i, LOW);          // switching the LED at index i off
  }
}
