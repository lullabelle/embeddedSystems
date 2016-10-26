 
 byte arduinoPins[] = {2, 3, 4, 5, 6, 7, 8};
 
 byte segmentMap[10][7] {
   {1, 1, 1, 1, 1, 1, 0},
   {0, 1, 1, 0, 0, 0, 0},
   {1, 1, 0, 1, 1, 0, 1},
   {1, 1, 1, 1, 0, 0, 1},
   {0, 1, 1, 0, 0, 1, 1},
   {1, 0, 1, 1, 0, 1, 1},
   {1, 0, 1, 1, 1, 1, 1},
   {1, 1, 1, 0, 0, 0, 0},
   {1, 1, 1, 1, 1, 1, 1},
   {1, 1, 1, 1, 0, 1, 1},
   
 };


void setup() {
  for (int i=0; i<9; i++){
  pinMode(i, OUTPUT);  
  }
  Serial.begin(9600);
}

void loop() {
  for (int i=0; i<10; i++){
    for (int j = 0; j<8; j++){
      digitalWrite(arduinoPins[j],(segmentMap[i][j]));
      }
      delay(500);
      for(int i=0; i<9; i++){
        digitalWrite(i, LOW);
        Serial.println(i+1);
        }
    }

}
