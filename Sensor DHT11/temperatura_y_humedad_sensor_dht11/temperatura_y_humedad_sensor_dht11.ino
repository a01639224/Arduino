// https://github.com/adafruit/DHT-sensor-library

#include <DHT.h>

const int DHTPin = 5;
#define DHTTYPE DHT11
DHT dht(DHTPin, DHTTYPE);
void setup(){
  Serial.begin(9600);
  Serial.println("DHTxxtest!");
  dht.begin();
}
void loop(){
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  if (isnan(h) || isnan(t)){
    Serial.println("Error en medición del sensor!");
    return;
  }
  
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C ");
}
