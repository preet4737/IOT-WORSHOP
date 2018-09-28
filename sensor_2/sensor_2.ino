int val;
int led=6;
int tempPin=1;


void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop()
{
  val=analogRead(tempPin);
  float mv = (val/1024.0)*5000;
  float cel = mv/10;
  float farh = (cel*9)/5+32;
  if(cel>26.5)
  digitalWrite(led,HIGH);
  else
  {
  digitalWrite(led,LOW);
  }
  
  Serial.print("TEMPERATURE=");
  Serial.print(cel);
  Serial.print("*c");
  Serial.println();
  delay(1000);

 /* uncomment this to get temperature in fahrenheit
  *  Serial.print("Temperature=");
  *  Serial.print(farh);
  *  Serial.print("*F");
  *  Serial.println();
  */
  
  // put your setup code here, to run once:

}
