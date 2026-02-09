const int buttonPin = 2;
const int ledPin = 12;
const int yellowPin = 9;
const int greenPin = 7;

int buttonState = 0; 

void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {
 
  buttonState = digitalRead(buttonPin);
 
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(500);

    digitalWrite(ledPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(500);

    digitalWrite(ledPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(500);   

  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(1000);
  }
}
