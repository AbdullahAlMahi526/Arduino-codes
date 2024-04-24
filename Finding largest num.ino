// C++ code
//Finding largest number
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
 int n1,n2,n3; //variable declare
  n1=1;n2=8;n3=15; //value assign
  if (n1>n2 && n1>n3){
    Serial.print(n1); Serial.print(" is the largest");
   
    }
  if (n2>n1 && n2>n3){
    Serial.print(n2); Serial.print("is the largest");
   
    }
  if (n3>n2 && n3>n1){
    Serial.print(n3); Serial.print("is the largest");
   
    }
  Serial.println("");
}