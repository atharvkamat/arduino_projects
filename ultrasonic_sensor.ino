int trigPin = 10;
int echoPin = 9;
// defines variables
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600); 
}
void loop() {
digitalWrite(trigPin, 0);
delayMicroseconds(2);
digitalWrite(trigPin, 1);
delayMicroseconds(10);
digitalWrite(trigPin, 0);
duration = pulseIn(echoPin, 1);
distance= duration*0.034/2;
Serial.println(distance);
}
