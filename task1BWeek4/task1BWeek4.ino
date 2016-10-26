 
 byte pinArray[] = {8, 7, 5, 3, 2, 10, 11};
 int i;

void setup() {  
  Serial.begin(12000);
}

void loop() {
  
  for(i=0; i<11; i++){
        Serial.println(pinArray[i]);
  }
        
    

}
