void setup()
{
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(45000); // Wait for 45000 millisecond(s)
  digitalWrite(1, LOW);
  digitalWrite(4, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(8, HIGH);
  delay(30000); // Wait for 30000 millisecond(s)
  digitalWrite(8, LOW);
}
