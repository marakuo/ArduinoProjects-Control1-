int Gled = 5;
int Yled = 6;
int Rled = 7;
int Button = 12 ;
bool ExtendedRed = false; // flag



void setup() {
  pinMode(Gled, OUTPUT);
  pinMode(Yled, OUTPUT);
  pinMode(Rled, OUTPUT);
  pinMode(Button, INPUT);
  
  
}

void loop() {
  // green phase 
  digitalWrite(Gled, HIGH);
  for(int i =0; i <= 50 ;i++){
    if(digitalRead(Button) == HIGH) ExtendedRed = true;
    delay(100);
  }
  digitalWrite(Gled, LOW);

  // yellow phase 

  digitalWrite(Yled, HIGH);
  for(int i =0; i <= 30 ;i++){
    if(digitalRead(Button) == HIGH) ExtendedRed = true;
    delay(100);
  }
  digitalWrite(Yled, LOW);


  // red phase 

 digitalWrite(Rled, HIGH);
 if (ExtendedRed){
  delay(10000);  // giving more time for pedestrians to cross
  ExtendedRed = false; // rest to repeat the cyle correctly 
 } 
  
  else {
    delay(5000);
  }
   digitalWrite(Rled, LOW);



  // yellow + red 
  digitalWrite(Yled, HIGH);
  digitalWrite(Rled, HIGH);
  delay(3000);
  digitalWrite(Yled, LOW);
  digitalWrite(Rled, LOW);





 

}
