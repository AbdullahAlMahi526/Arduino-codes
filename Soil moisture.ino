// C++ code
//Soil Moisture
int red=12,blue=7,green=4;
int sensor=A0;
void setup()
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  int moisture=analogRead(sensor);
  Serial.println(moisture);
  if(moisture>=0 && moisture<=200){
    Red();}
  if(moisture>200 && moisture<=700){
    Yellow();}
  if(moisture>700 && moisture<876){
    Green();}
}
void Red(){
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
}
void Yellow(){
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);
}
void Green(){
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);
}
  