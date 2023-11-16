#include "DHT.h"

// ----------------------------------------------------------------------------
#define DHT_PIN 6

// ----------------------------------------------------------------------------
DHT dht(DHT_PIN,DHT22);


// ----------------------------------------------------------------------------
void setup() 
{
  // Initialize Serial port and write something in it
  Serial.begin(9600);
  Serial.println("----------------------------------------");
  Serial.println("DHT22 Test");
  Serial.println("----------------------------------------");

  // Initialize the instance that maange the DHT22 sensor
  dht.begin();
}



// ----------------------------------------------------------------------------
void loop() 
{
  // Use the dht object to read humidity and temperature
  float hum = dht.readHumidity();
  float tempC = dht.readTemperature();

  // Write data to the serial port to be used by SerialPlotter
  Serial.print(tempC);
  Serial.print(" ; ");
  Serial.println(hum);

  delay(2000);
}
