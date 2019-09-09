/*Program for LED chaser back and forth.
  Pin 4, 5, 6 and 7 are connected
 */
 
void setup() {                
  for (int i=4; i<7; i=i+1){    // counting the variable i from 0 to 9
    pinMode(i, OUTPUT);            // initialising the pin at index i of the array of pins as OUTPUT
  }
}
 
void loop() {
  for (int i=4; i<7; i=i+1){    // chasing right
    digitalWrite(i, HIGH);         // switching the LED at index i on
    delay(100);                          // stopping the program for 100 milliseconds
    digitalWrite(i, LOW);          // switching the LED at index i off
  }
  for (int i=6; i>4; i=i-1){   // chasing left (except the outer leds)
    digitalWrite(i, HIGH);         // switching the LED at index i on
    delay(100);                          // stopping the program for 100 milliseconds
    digitalWrite(i, LOW);          // switching the LED at index i off
  }
}
