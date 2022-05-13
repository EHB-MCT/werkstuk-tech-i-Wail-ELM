int S = A5;
int O = A6;
int S2 = A7;

int buzzer = 12;
int i=0; 
int x = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(S, OUTPUT);
  pinMode(O, OUTPUT);
  pinMode(S2, OUTPUT);

pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:




//Eeerste letter S


for ( x=0; x<3; x++){
  digitalWrite(S, HIGH);
  delay(200);
  digitalWrite(S, LOW);
  delay(150);
}

delay(150);

//tweede letter O
for ( x=0; x<3; x++){
  digitalWrite(O, HIGH);
  delay(450);
  digitalWrite(O,LOW);
  delay(150);
}

delay(150);


//derde letter S

for( x=0; x<3; x++){
  digitalWrite(S2, HIGH);
  delay(200);
  digitalWrite(S2, LOW);
  delay(150);
}




delay(2000);




//Ambulance

for( x=0;x<3;x++){
 
  

for(i=500;i<1000;i++){
  tone(12,i);
  delay(5);
  }
  for(i=1000;i>500;i--){
  tone(12,i);
  delay(5);
  }

 delay(5);


  }


  noTone(12);
  delay(10000);

  




  

}
