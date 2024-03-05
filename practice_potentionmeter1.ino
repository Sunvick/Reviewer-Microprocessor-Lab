// C++ code
//
const int L1 = 13;
const int L2 = 12;
const int L3 = 11;
const int L4 = 10;
const int L5 = 9;
const int L6 = 8;
const int L7 = 7;
const int L8 = 6;
const int L9 = 5;
const int L10 = 4;
int pV;
int delay1;



void setup()
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  pinMode(L9, OUTPUT);
  pinMode(L10, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
 
}

void loop()
{
 pV = analogRead(A0);
  int Delay = map(pV, 0 , 1023,100,1023);
    
  digitalWrite(L1, HIGH);
  delay(Delay);
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  delay(Delay); 
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  delay(Delay); 
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(Delay); 
  digitalWrite(L4,LOW);
  digitalWrite(L5,HIGH);
  delay(Delay); 
  digitalWrite(L5,LOW);
  digitalWrite(L6,HIGH);
  delay(Delay); 
  digitalWrite(L6,LOW);
  digitalWrite(L7,HIGH);
  delay(Delay); 
  digitalWrite(L7,LOW);
  digitalWrite(L8,HIGH);
  delay(Delay); 
  digitalWrite(L8,LOW);
  digitalWrite(L9,HIGH);
  delay(Delay); 
  digitalWrite(L9,LOW);
  digitalWrite(L10,HIGH);
  delay(Delay); 
  digitalWrite(L10,LOW);
}
