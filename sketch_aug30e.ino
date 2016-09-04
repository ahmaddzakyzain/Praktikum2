void setup() {
  pinMode (A0, INPUT);
  digitalWrite (A0, LOW);
  pinMode(11, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(A0)==HIGH)
  {
    digitalWrite(11, LOW);
  }
  else
  {
    digitalWrite(11, HIGH);
  }
  // put your main code here, to run repeatedly:

}
