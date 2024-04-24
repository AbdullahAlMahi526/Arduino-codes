// C++ code
//LED Blinking
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(12,LOW);
}