 int ledPin = 13;
 int potPin = 0;

void setup() {  
  pinMode(ledPin, OUTPUT);
  Serial.begin(12000);
}

void loop() {
  
  digitalWrite(ledPin, HIGH);
  delay(analogRead(potPin));
  digitalWrite(ledPin, LOW);
  delay(analogRead(potPin));
        
   Serial.println(analogRead(potPin));

}
