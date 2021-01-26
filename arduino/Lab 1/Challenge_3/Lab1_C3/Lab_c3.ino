const int BUTTON_PIN = 14;

int butpre = HIGH;
int counter = 0;
unsigned long cdstart;
unsigned long lastpush;
unsigned long lastsub;
unsigned long lastprint = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {

  // put your main code here, to run repeatedly:
  if (digitalRead(BUTTON_PIN) == LOW && butpre == HIGH){
      lastpush = millis();
      lastsub = lastpush+300;
      counter++;
  }
  
  if (millis() - lastprint >= 100){
    lastprint = millis();
    Serial.println(counter);
    }
  if (millis() - lastpush >=300){
    if (millis()- lastsub  >= 1000 && counter >=0){
      lastsub = millis();
      counter --;}
  }
  butpre = digitalRead(BUTTON_PIN);
}
