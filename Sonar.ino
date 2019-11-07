long high_time,D_cm;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);//Trigger
  pinMode(12,INPUT);//Echo
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11,LOW);
  delayMicroseconds(5);
  digitalWrite(11,HIGH);
  delayMicroseconds(10);
  digitalWrite(11,LOW);
  high_time=pulseIn(12,HIGH);
  D_cm= ((high_time)/2)*0.0340;
  Serial.println("Distance in cm:");
  Serial.println(D_cm);
  delay(60);
}
