#include <Servo.h>

Servo svm;
Servo svm1;
#define P_IN A0
#define P_IN1 A1
int val;
int val1;

void setup() {
  // put your setup code here, to run once:
  svm.attach(9);
  svm1.attach(10);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(P_IN);           
  val1 = analogRead(P_IN1);
  Serial.print(val1);
  Serial.print(", ");
  val = map(val, 0, 1023, 0, 180);    
  val1 = map(val1,0,1023,0 ,180);
  Serial.println(val1);
  svm.write(val);                  
  svm1.write(val1);                  
  delay(15);      
}
