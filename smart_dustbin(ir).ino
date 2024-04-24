#include <Servo.h>
Servo myservo;
int ir1=5;
void setup()
{
  pinMode(ir1,INPUT);
  myservo.attach(9);
}

void loop()
{
  if(digitalRead(ir1)==HIGH){
myservo.write(180);
  }
    else{
  myservo.write(0);
    }
}