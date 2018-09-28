int sensorPin=A0; //select the input pin for the ldr
int ledPin=6;
unsigned int sensorValue=0; //variable to store the value from ldr
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600); //start serial for output-for testing
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=analogRead(sensorPin); //read the value from the ldr
  if(sensorValue<1000) digitalWrite(ledPin,HIGH); //set the led on
  else digitalWrite(ledPin,LOW); //set the led on
  Serial.print(sensorValue,DEC); //print the value(0 to 1024)
  Serial.print("\n"); //print carriage return
  delay(500);
  
}
