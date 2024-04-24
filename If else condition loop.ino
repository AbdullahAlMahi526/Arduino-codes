// C++ code
//If else condition statement 
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  char data = Serial.read();
    if ( data == 'r') {
    Serial.println("Today is rainy day");
  }
  else {
    Serial.println("Today is sunnyday");
  }
  
    if(Serial.available()>0){
    delay(1000);
    }
}