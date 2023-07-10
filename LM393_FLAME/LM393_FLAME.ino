#define flame_pin 35

void setup() {
  pinMode(flame_pin, INPUT);
  Serial.begin(115200);
  delay(1000);

}

void loop() {
  int flamesensor = digitalRead(flamesensor);
  if (flamesensor == LOW) 
  {
    Serial.println(" FLAME ");
    delay(2000);
  }
   else
  {
    Serial.println(" NO FLAME ");
    delay(2000);
  }
  Serial.print(flamesensor);
}
