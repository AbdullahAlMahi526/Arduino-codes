//If else condition
void setup()
{
 
  Serial.begin(9600);
  
}

void loop()
{
  if(Serial.available()>0){
 char data=Serial.read();
  if(data=='r'){
    Serial.println("Today is rainy day");
  }
  else{
    Serial.println("Today is sunny day");
  }
  
delay(1000);
  }
}