/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 */
 
// Pin 13 has an LED connected on most Arduino boards.

// the setup routine runs once when you press reset:


void setup() {                
  // initialize the digital pin as an output.
  pinMode(13 , OUTPUT);     
}
 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(13 , HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(13 , LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
