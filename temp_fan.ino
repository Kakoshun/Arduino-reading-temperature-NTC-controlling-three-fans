#define SERIESRESISTOR 10000    
 
#define THERMISTORPIN A0
#define THERMISTORPIN A1 
int anal = A0;
int ana2 = A1;
int pin1=11;
int pin2=10;
int pin3=9;
int data1;
void setup(void) 
{
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}
   
void loop(void) 
{
float data1;
float data2;
digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
  if (data1>0 or data2>0)
  {
    if (data1<500 or data2<500)
  {
    if (data1<500 and data2<500)
    {
      Serial.print("if1");
      Serial.println(data1);
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);delay(2000);
    }
  else if (data1<500 and data2>500)
  {
      Serial.print("if2");
      Serial.println(data1);
      digitalWrite(pin1,LOW);
      digitalWrite(pin3,LOW);delay(2000); 
  }
  else if (data1>500 and data2<500)
  {
      Serial.print("if3");
      Serial.println(data1);
      Serial.println(data1);
      
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);delay(2000); 
  }
  else
  {
  Serial.print("else");
  Serial.println(data1);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, HIGH);
  }
  }
}
}