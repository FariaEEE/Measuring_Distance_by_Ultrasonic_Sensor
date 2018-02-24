int trig = A0;
int echo = A1;
#define trig A0

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

float distance() {
  float duration = 0.0;
  float cm = 0.0;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  cm = duration / 58.82;
  return cm;
}

void loop() {
  float Distance = distance();
  Serial.print("Distance : ");
  Serial.println(Distance);
  delay(300);

}
