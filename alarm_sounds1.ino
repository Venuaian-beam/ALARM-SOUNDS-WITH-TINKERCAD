void setup()
{
	pinMode(12,OUTPUT);
  	pinMode(10,OUTPUT);
}

void loop()
{
	digitalWrite(12, HIGH);  
   	tone(10, 1000);       // Play a 1000 Hz tone
  	delay(1000);                 // Wait 1 second

  	digitalWrite(12, LOW);   // Turn LED OFF
  	noTone(10);           // Stop the buzzer sound
  	delay(1000); 
  
  	
  	
}

