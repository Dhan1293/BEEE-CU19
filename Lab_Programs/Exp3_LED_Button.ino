/* Program for LED using Button.
Turn on a LED when the button is pressed
Turn off LED when the button is not pressed (or released)
*/

void setup() {
  pinMode(8, INPUT); //set the button pin as INPUT
  pinMode(2, OUTPUT); //set the LED pin as OUTPUT
}

void loop() {
  int stateButton = digitalRead(8); //read the state of the button
  if(stateButton == 1) { //if is pressed
     digitalWrite(2, HIGH); //write 1 or HIGH to led pin
  } else { //if not pressed
     digitalWrite(2, LOW);  //write 0 or low to led pin
  }
}
