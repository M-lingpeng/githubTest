void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello world\n");
  Serial.println("Welcome to ECE 16");
  if (Serial.available() > 0) {
     char incoming_data = Serial.read();
     Serial.print(incoming_data);
  }
  delay(1000);
}
