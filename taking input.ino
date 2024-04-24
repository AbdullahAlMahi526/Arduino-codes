//Taking Input
//Char serial.read
//string serial.readstring
void setup()
{
 
  Serial.begin(9600);
  
}

void loop()
{
 int a=Serial.parseInt();
  Serial.println(a);

}