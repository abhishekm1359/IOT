int LED_PIN = 13;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  delay(1000);
  Serial.println("Waiting");
  digitalWrite(LED_PIN, LOW); 
  Serial.println("LED OFF");
  delay(1000);                       // wait for a second
}
