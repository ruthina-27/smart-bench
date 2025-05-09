int led1=13;
 int led2=12;
 int led3=11;
 int led4=10;
 int led5=9;
 int led6=8;
 void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(8,OUTPUT);
 }


void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led1,HIGH);
 delay(500);
 digitalWrite(led2,HIGH);
 delay(500);
 digitalWrite(led3,HIGH);
 delay(500);
 digitalWrite(led4,HIGH);
 delay(500);
 digitalWrite(led5,HIGH);
 delay(500);
 digitalWrite(led6,HIGH);
 delay(500);
  digitalWrite(led6,HIGH);
 digitalWrite(led5,HIGH);
 digitalWrite(led4,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led1,HIGH);
 delay(1000);
 digitalWrite(led6,LOW);
 digitalWrite(led5,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led1,LOW);
 delay(1000);
}
