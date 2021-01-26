int red_LED=2;
int blue_LED=3;
int yellow_LED=4;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);
  pinMode(yellow_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(red_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  
   
  digitalWrite(blue_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000);                       // wait for a second
  digitalWrite(blue_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(10000);  
   
  digitalWrite(yellow_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50000);                       // wait for a second
  digitalWrite(yellow_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(50000);   
  
}
