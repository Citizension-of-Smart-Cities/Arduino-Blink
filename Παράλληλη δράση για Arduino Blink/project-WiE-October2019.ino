void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);			//Δήλωσε το LED στο pin 13
}

void loop() 
{
  int photoresistor = analogRead(A0);	// Δήλωσε το photoresistor στο Α0
  Serial.print("Photoresistor Level: ");
  Serial.println(photoresistor);
  
					
  if (photoresistor<600)		//η τιμή είναι ενδεικτική. Ανάλογα με το STEP 1 βγάζουμε την τιμή αυτή
					
  {
    digitalWrite(13, HIGH);		// άναψε το LED
    delay(5000);   
  }
  else 
  {
  digitalWrite(13, LOW);		// σβήνει το LED 
  delay(1000); 
  }
  
}
