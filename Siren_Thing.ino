const int buttonPin = 2;
int buttonState = 0;

const int led1 = 12;
const int led2 = 11;
const int led3 = 10;
const int led4 = 9;
const int led5 = 7;
const int led6 = 5;

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    noise();
    blink();
    buttonState == 0;
  }
}

void noise(){
  for(int hz = 31; hz < 1500; hz++){
    tone(8, hz, 100);
  }
}

void blink(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);

  delay(100);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}


