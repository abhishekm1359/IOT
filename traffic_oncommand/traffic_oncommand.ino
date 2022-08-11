int green = 9;
int yellow = 10;
int red = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    String value = Serial.readString();
    value.trim();

    if(value == "r"){
      digitalWrite(red, HIGH);
//      digitalWrite(yellow, LOW);
//      digitalWrite(green, LOW);
      Serial.println("EVERYBODY STOP");
    }
    else if(value == "y"){
      digitalWrite(yellow, HIGH);
//      digitalWrite(green, LOW);
//      digitalWrite(red, LOW);
      Serial.println("EVERYBODY READY");
    }
    else if(value == "g"){
      digitalWrite(green, HIGH);
//      digitalWrite(yellow, LOW);
//      digitalWrite(red, LOW);
      Serial.println("EVERYBODY GO");
    }
    
  }
}
