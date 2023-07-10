#include <DHT.h>
#define dhttype DHT11
#define dhtpin 15

DHT dht(dhtpin,dhttype);

void setup() {
  dht.begin();
  delay(2000);
  Serial.begin(115200);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if(isnan(t))
  {
    Serial.println("LOI");
    return;
  }
  Serial.print("DOAM: ");
  Serial.print(h);
  Serial.print("%, Nhietdo C: ");
  Serial.print(t);
  Serial.print(", Nhietdo F: ");
  Serial.println(f);
  delay(2000);
}
