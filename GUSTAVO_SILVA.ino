
int key = 5;  
int val = 0;
 
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);  
  pinMode(key,OUTPUT);  
  digitalWrite (key,HIGH); 
}

void loop() {
  // put your main code here, to run repeatedly:
 val=Serial.read();  
 
 if (val=='A')
{
 digitalWrite (key,LOW); 
   
} 
if (val=='D')
{
 digitalWrite (key,HIGH); 
}
}
//
