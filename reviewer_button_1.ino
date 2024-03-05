const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int BTN1 = 5;

void setup()
{
  
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(BTN1,INPUT);
  

}

void loop()  
{
  int ButtonState = digitalRead(BTN1);
  if (ButtonState == LOW){
  	digitalWrite(LED1,HIGH);
  	digitalWrite(LED2,LOW);
	digitalWrite(LED3,LOW);
 	delay(1000);
    
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    delay(1000);


    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    delay(1000);
  }	
  else{
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    delay(1000);
   
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    delay(1000);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    delay(1000);
  
  
  }
}