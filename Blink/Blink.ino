
int redLED = 13;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(redLED, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  delay(1000);

}
