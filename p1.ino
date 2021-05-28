
int pin1 = 13;
int pin2 = 12;
int pin3 = 11;
int pin4 = 10;
int ir = 3;
int btn1 = 7;
int btn2 = 6;
int btn3 = 5;
int btn4 = 4;
int buzzer = 8;
int tellerpin = 2;
int er = 9;
void setup(){
  pinMode(pin1 ,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(buzzer ,OUTPUT);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(btn4,INPUT);
  pinMode(ir,INPUT);
  pinMode(er,OUTPUT);
  pinMode(tellerpin,OUTPUT);

}
void loop(){
  int d1 = digitalRead(btn1);
  int d2 = digitalRead(btn2);
  int d3 = digitalRead(btn3);
  int d4 = digitalRead(btn4);
  int d =  digitalRead(ir);

  if(d1 == HIGH){
    digitalWrite(pin1, HIGH);
    digitalWrite(tellerpin,LOW);
  }else{
    digitalWrite(pin1,LOW);
    digitalWrite(tellerpin,HIGH);
  }
  if(d2 == HIGH){
    digitalWrite(pin2, HIGH);
    digitalWrite(tellerpin,LOW);
  }else{
    digitalWrite(pin2,LOW);
    digitalWrite(tellerpin,HIGH);
  }
  if(d3 == HIGH){
    digitalWrite(pin3, HIGH);
    digitalWrite(tellerpin, LOW);
  }else{
    digitalWrite(pin3,LOW);
    digitalWrite(tellerpin,HIGH);
  }
  if(d4 == HIGH){
    digitalWrite(pin4, HIGH);
    digitalWrite(tellerpin,LOW);
  }else{
    digitalWrite(pin4,LOW);
    digitalWrite(tellerpin,HIGH);
  }
  if(d == LOW){
    digitalWrite(buzzer, HIGH);
    digitalWrite(er,LOW);
  }else{
    digitalWrite(buzzer,LOW);
    digitalWrite(er,HIGH);
  }
}
