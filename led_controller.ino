int ledPin = 12;              

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(13,OUTPUT);  
}

void loop() {
  digitalWrite(ledPin, 1);
  digitalWrite(13,1); 
  delay(500);                
  digitalWrite(ledPin, 0);
  digitalWrite(13,0);
  delay(500);
}
