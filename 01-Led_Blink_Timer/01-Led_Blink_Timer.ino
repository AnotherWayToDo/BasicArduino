/*
 Name:		_01_Led_Blink_Timer.ino
 Created:	22/10/2020 21:51:40
 Author:	JB
*/


unsigned long ulLastMillis = 0, ulCurrentMillis=0;		// Vars to handle elapsed time
unsigned int uiLedStatus = LOW;
const unsigned long ulTimeInterval = 1000;


// the setup function runs once when you press reset or power the board
void setup() 
{
	pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(115200);

}

// the loop function runs over and over again until power down or reset
void loop() 
{
	ulCurrentMillis = millis();
	
	// This part of code will be entered every ulTimeInterval milliseconds ...
	if (ulCurrentMillis - ulLastMillis >= ulTimeInterval)
	{
		ulLastMillis = ulCurrentMillis;

		if (uiLedStatus == HIGH)
			uiLedStatus = LOW;
		else
			uiLedStatus = HIGH;


		digitalWrite(LED_BUILTIN, uiLedStatus);
	}


	// ... but here we don't have some delay ... so the code is not blocking ... we can make comething else
	Serial.print(".");
}
