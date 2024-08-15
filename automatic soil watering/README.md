# AUTOMATIC SOIL WATERING

## List of items required for project
- Arduino uno board
- Soil Moisture sensor
- Water Pump
- 4x 1.5 volt batter
- breadboard
- 2x LED
- 2x Resistor
- few jumper wires
- NMOS
  

## Circuit diagram [using TinkerCAD]
![](https://github.com/agneay/Arduino_Projects/blob/main/automatic%20soil%20watering/IRRIGATION.png)

> NOTE: Water Pump has been replaced by DC Motor in the diagram since tinkerCAD does not have a pump

## Code

```
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

```
