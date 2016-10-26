
//int ledPin = 13;
int potPin = 0;



void setup() {
  for (int i=2; i<9; i++){
  pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  
}
void display(int Val){
  byte arduinoPins[] = {2,3,4,5,6,7,8};
  byte segmentMap[10][7]{
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1},
  };
   for (int j = 0; j<8; j++){
      digitalWrite(arduinoPins[j],(segmentMap[Val][j]));
      }

}  
void displayOff(){
    for (int i=2; i<9; i++){
      digitalWrite(i, LOW);
      }
    }
  
void loop() {
//   display(0);
//   delay(500);
//   displayOff;
//   delay(500);
//   display(2);
//   delay(500);
   
//Serial.println(analogRead(potPin));
 
do{
  Serial.println(analogRead(potPin));
  int potVal = analogRead(potPin);
  displayOff;
  if ((potVal >= 0) && (potVal < 100)){
    display(0);
    delay(1);
    }
    else if ((potVal >= 100) && (potVal<200)){
    display(1);
    delay(1);
    }
    else if ((potVal >= 200) && (potVal<300)){
    display(2);
    delay(1);
    }
    else if ((potVal >= 300) && (potVal<400)){
    display(3);
    delay(1);
    }
    else if ((potVal >= 400) && (potVal<500)){
    display(4);
    delay(1);
    }
    else if ((potVal >= 500) && (potVal<600)){
    display(5);
    delay(1);
    }
    else if ((potVal >= 600) && (potVal<700)){
    display(6);
    delay(1);
    }
    else if ((potVal >= 700) && (potVal<800)){
    display(7);
    delay(1);
    }
    else if ((potVal >= 800) && (potVal<900)){
    display(8);
    delay(1);
    }
    else if  ((potVal >= 900) && (potVal<1023)){
    display(9);
    delay(1);
    }
    else;
    
    
    }
    while (true);
}

