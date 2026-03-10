int MY_LED = 12;
int button = 4;

void setup()
{
  pinMode(MY_LED, OUTPUT);
  pinMode(button, INPUT);
}

void dot()
{
  digitalWrite(MY_LED, HIGH);
  delay(500);
  digitalWrite(MY_LED, LOW);
  delay(500);
}

void dash()
{
  digitalWrite(MY_LED, HIGH);
  delay(1750);
  digitalWrite(MY_LED, LOW);
  delay(1000);
}

void loop() 
{
  int buttonState = digitalRead(button);

  if (buttonState == HIGH)
  {
    //E
    dot();
    delay(2000);

    //M
    dash();
    dot();
    delay(2000);

    //I
    dot();
    dot();
    delay(2000);

    //L
    dot();
    dash();
    dot();
    dot();
    delay(2000);

    //Y
    dash();
    dot();
    dash();
    dash();
    delay(2000);

  }
  if (buttonState == LOW)
  {
    digitalWrite(MY_LED, LOW);
  }

}

