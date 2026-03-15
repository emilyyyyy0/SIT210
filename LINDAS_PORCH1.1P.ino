int PORCH_LIGHT = 12;
int HALLWAY_LIGHT = 10;
int BUTTON = 4;

unsigned long PORCH_TIME = 30000;
unsigned long HALLWAY_TIME = 60000;

void setup ()
{
  pinMode(PORCH_LIGHT, OUTPUT);
  pinMode(HALLWAY_LIGHT, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}


void loop()
{
  int buttonState = digitalRead(BUTTON);

  if (buttonState == LOW)
  {
    digitalWrite(PORCH_LIGHT, HIGH);
    digitalWrite(HALLWAY_LIGHT, HIGH);

    delay(PORCH_TIME);  // porch light duration
    digitalWrite(PORCH_LIGHT, LOW);

    delay(HALLWAY_TIME - PORCH_TIME);  // remaining hallway time
    digitalWrite(HALLWAY_LIGHT, LOW);
  }
}