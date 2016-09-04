void setup() {
  DDRC = 0x00;
  PORTC = 0x01;
  DDRB = 0x10;
  // put your setup code here, to run once:

}

void loop() {
  if(bit_is_clear(PINC, 0))
  {
    PORTB = 0x01;
  }
  else
  {
    PORTB = 0x11;
  }
  // put your main code here, to run repeatedly:

}
