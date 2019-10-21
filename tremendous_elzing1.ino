

const int trigPin = 10; 
const int echoPin = 9;
int led = 4;

long duration;
int distance;

void setup()
{


pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() 
{ digitalWrite(4,LOW);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;
while(distance!=0)
{
  if(distance > 100)
{
    
    
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  
    
}
  else
  {
     digitalWrite(4,LOW);
  }
  digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;
}
  


}