float temp; 
float vout; 
float vout1; 
int LED = 13; 
int gasSensor; 
int piezo = 7; 
void setup() 
{ 
pinMode(A0,INPUT); 
pinMode(A1, INPUT); 
pinMode(LED,OUTPUT); 
pinMode(piezo,OUTPUT); 
Serial.begin(9600); 
} 
void loop() 
{ 
 
gasSensor=analogRead(A0); 

if (gasSensor>=100) 
{ 
digitalWrite(piezo,HIGH); 
digitalWrite(LED,HIGH); 
} 
else 
{ 
digitalWrite(piezo,LOW); 
digitalWrite(LED,LOW); 
} 

Serial.print("GasSensor= "); 
Serial.print(" "); 
Serial.print(gasSensor); 
Serial.println(); 
delay(1000); 
}
