int LED_PIN = 13;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available() > 0){
      String value = Serial.readString();
//      value.trim();
      Serial.println(value);
      
      if(value.compareTo("on") == 0){
        Serial.println("LED ON");
        digitalWrite(LED_PIN, HIGH);
        Serial.println("LED ON");
      }
      else if(value == "off" ){
        digitalWrite(LED_PIN, LOW);
        Serial.println("LED OFF");
      }
      else{
        Serial.println("Give proper commands 1 or 0");  
      }
   }
//   delay(5000); 
}
