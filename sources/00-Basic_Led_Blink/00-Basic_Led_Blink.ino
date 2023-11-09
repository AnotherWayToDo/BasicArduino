/*
 Name:		_00_Basic_Led_Blink.ino
 Created:	21/10/2020 22:25:01
 Author:	JB
*/

// The setup function runs once when you press reset or power the board
void setup() 
{
	pinMode(LED_BUILTIN, OUTPUT);
}


// The loop function runs over and over again until power down or reset
void loop() 
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(500);
	digitalWrite(LED_BUILTIN, LOW);
	delay(500);
  
}
