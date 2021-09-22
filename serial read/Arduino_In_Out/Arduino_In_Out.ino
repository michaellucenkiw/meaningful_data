// Use with MaxMSP 'serial reader.maxpat'


void setup() {
Serial.begin(9600);

}

void loop() {
  
//Serial read
int sensorValue01 = analogRead(A0);
int sensorValue02 = analogRead(A1);

//Serial write
  Serial.print(sensorValue01);
  Serial.print(" ");
  Serial.println(sensorValue02);

  //To add more outputs, follow pattern above and print other analogRead functions 
  //with (" ") in between. Use Serial.println only for the last, use Serial.print for all others.
  
//Delay for stability
delay(50);        


}
