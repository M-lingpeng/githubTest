
const int BUTTON_PIN = 14;

int butpre = HIGH;
int counter = 0;
unsigned long milli = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(BUTTON_PIN) == LOW && butpre == HIGH){
      count();
  }
}
void count(){
  unsigned long start = millis();
  while(1){
    delay(100);
    counter = int ((millis() - start + milli)/1000);
    Serial.println(counter);
    if (digitalRead(BUTTON_PIN) == LOW && butpre == HIGH){
      milli = millis() - start;
      return;
    }
    butpre = digitalRead(BUTTON_PIN);
  }  
  
}
