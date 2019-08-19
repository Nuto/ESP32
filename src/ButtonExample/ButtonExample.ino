#define relay1Pin 32
#define buttonPin 34

void setup() {
  //Configure Pins
  pinMode(relay1Pin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  //Activate Relay if button is pressed
  if (digitalRead(buttonPin)) {
    digitalWrite(relay1Pin, LOW);
  } else {
    digitalWrite(relay1Pin, HIGH);
  }

  delay(100);
}
