#include "DHT.h"

#define DHT_PIN 6

DHT dht(DHT_PIN,DHT22);

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("----------------------------------------");
  Serial.println("DHT22 Test");
  Serial.println("----------------------------------------");

  dht.begin();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  float hum = dht.readHumidity();
  float tempC = dht.readTemperature();

  Serial.print(tempC);
  Serial.print(" ; ");
  Serial.println(hum);

  delay(2000);
}
