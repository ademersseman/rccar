int pinIn1 = 2;
int pinOut1 = 3;
int pinIn2 = 5;
int pinOut2 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(pinIn1, INPUT);
  pinMode(pinIn2, INPUT);
  pinMode(pinOut1, OUTPUT);
  pinMode(pinOut2, OUTPUT);
}

void loop() {
  Serial.println(digitalRead(pinIn2));
  //adjustRight();
  //adjustLeft();
  //delay(100);
  digitalWrite(pinOut1, digitalRead(pinIn1));
  digitalWrite(pinOut2, digitalRead(pinIn2));
  //adjustRight();
}
/*
void adjustLeft() {
  for (int i = 0; i < 20; i++) {
    digitalWrite(pinOut, HIGH);
    delayMicroseconds(1200);
    digitalWrite(pinOut, LOW);
    delayMicroseconds(8200);
  }
}

void adjustRight() {
  for (int i = 0; i < 20; i++) {
    digitalWrite(pinOut, HIGH);
    delayMicroseconds(1800);
    digitalWrite(pinOut, LOW);
    delayMicroseconds(8600);
  }
}
*/
