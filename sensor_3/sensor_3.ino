const int trigPin=2;
const int echoPin=4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  double duration ,inches,cm;
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(echoPin,INPUT);
  duration=pulseIn(echoPin,HIGH);
  inches=microsecondsToInches(duration);
  
  cm=microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    delay(100);
}
double microsecondsToInches(double microseconds)
{
  return microseconds/74.0/2.0;
}
double microsecondsToCentimeters(double microseconds)
{
  return microseconds/29.0/2.0;
}
