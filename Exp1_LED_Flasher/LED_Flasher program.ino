/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 */
 
// Pin 9 has an LED connected on Arduino board.

// the setup routine runs once when you press reset:


void setup() {                
  // initialize the digital pin as an output.
  pinMode(9 , OUTPUT);     
}
 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(9 , HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(9 , LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
