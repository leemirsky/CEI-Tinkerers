int redLED = 13;
int yellowLED = 12;
int greenLED = 11;

void setup() {
  // put your setup code here, to run once:

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(greenLED, HIGH);
  delay(5000);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  
}
