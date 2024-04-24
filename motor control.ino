// C++ code
//Motorr Control
int p=10,n=11;

void setup()
{
  Serial.begin(9600);
  pinMode(p, OUTPUT);
  pinMode(n, OUTPUT);
  
}

void loop()
{
  
  analogWrite(p,120);//255 output maximum 5V
  
  analogWrite(n, 0);
  delay(1000);
  analogWrite(p,0);//(120/255)*5=2.3529V
  
  analogWrite(n,255);
  
}