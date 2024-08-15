// C++ code
// Code written by AGNEAY B NAIR
int sensor;
const int powerpin = 12;
const int delayTime =1000;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  pinMode(powerpin,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN,LOW);
  
  digitalWrite(powerpin,HIGH);
  delay(10);
  sensor = analogRead(A0);
  digitalWrite(powerpin,LOW);
  Serial.println(sensor);
  if (sensor >800){
    digitalWrite(4,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(2,LOW);
    
  }else{
    digitalWrite(7,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(2,HIGH);
  }
}
