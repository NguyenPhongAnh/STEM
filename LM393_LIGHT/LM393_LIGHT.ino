#define Lightsensor 39

void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(Lightsensor, INPUT);
}

void loop() {
  int LS = digitalRead(Lightsensor);
  Serial.println(LS);
  delay(1000);
}
