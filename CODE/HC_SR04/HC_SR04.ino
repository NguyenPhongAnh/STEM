#define Trig 2
#define Echo 4
#define SOUND_SPEED 0.034

float distanceCm;

void setup() {
  pinMode(Trig,OUTPUT);
  pinMode(Echo,INPUT);
  delay(2000);
  Serial.begin(115200);
}

void loop() {
  distanceCm = 0;
  Sensor_HC_SR04();
}

void Sensor_HC_SR04()
{
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);

  long duration = pulseIn(Echo, HIGH);
  distanceCm = duration * SOUND_SPEED / 2;
  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);
}