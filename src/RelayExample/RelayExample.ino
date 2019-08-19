#define relay1Pin 32
#define relay2Pin 33

void setup() {
  //Configure Pins
  pinMode(relay1Pin, OUTPUT);
  pinMode(relay2Pin, OUTPUT);
}

void loop() {
  //Relay 1
  delay(1000);
  digitalWrite(relay1Pin, HIGH);

  delay(1000);
  digitalWrite(relay1Pin, LOW);

  //Relay 2
  delay(1000);
  digitalWrite(relay2Pin, HIGH);

  delay(1000);
  digitalWrite(relay2Pin, LOW);
}
