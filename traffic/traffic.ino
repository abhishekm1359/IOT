int green = 9;
int yellow = 10;
int red = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
  delay(1000);
  
}
