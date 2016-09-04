void setup() {
  pinMode (A0, INPUT);
  digitalWrite (A0, HIGH);
  pinMode(11, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(A0)==LOW)
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    digitalWrite(11, LOW);
  }
  // put your main code here, to run repeatedly:

}
