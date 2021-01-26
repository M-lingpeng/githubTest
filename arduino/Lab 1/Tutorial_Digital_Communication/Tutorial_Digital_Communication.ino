const int LED_PIN = 13;
void setup() {
  // put your setup code here, to run once:
   
   pinMode(BUTTON_PIN, INPUT);
   pinMode(LED_PIN, OUTPUT);
}

void loop()
{
     
     if (digitalRead(BUTTON_PIN) == LOW) {
          digitalWrite(LED_PIN, HIGH);
          delay(500);     
     }
     
     else {
          digitalWrite(LED_PIN, LOW); 
          delay(1000);
     }
}
