
const int buttonPin = 2;
const int ledPin = 12;
const int yellowPin = 9;

int buttonState = 0; 

void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {
 
  buttonState = digitalRead(buttonPin);
 
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(yellowPin, LOW);
    delay(500);

    digitalWrite(ledPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(500);

  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(yellowPin, LOW);
    delay(1000);
  }
}
