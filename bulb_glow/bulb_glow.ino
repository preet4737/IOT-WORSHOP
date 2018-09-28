
int led = 6,led1=9;
// the setupnfunction runs once when you press reset or power the board
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
    pinMode(led1,OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH); // turn the LED on (High is voltage level)
  digitalWrite(led1,LOW);
  delay(1000);//wait for second
  digitalWrite(led,LOW);
  digitalWrite(led1,HIGH);//turn the LED off by making volatge Low
  delay(1000);//wait for second
}
