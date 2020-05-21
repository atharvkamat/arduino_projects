void setup() {
  pinMode(9,INPUT);
  pinMode(13,OUTPUT);
}
void loop() {
  
  if(digitalRead(9)==0)
  {
    digitalWrite(13,1);
    }
  else{
    digitalWrite(13,0);
    }
}
