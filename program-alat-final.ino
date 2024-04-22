int d_fan = 6;

void setup(){
  Serial.begin(9600);
  pinMode(d_fan, OUTPUT);
}

void loop(){
  digitalWrite(d_fan, LOW);
  delay(3000);
  digitalWrite(d_fan, LOW);
  delay(3000);
}