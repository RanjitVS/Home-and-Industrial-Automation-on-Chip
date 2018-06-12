#define relay 3
void setup() 
{
 pinMode(relay,OUTPUT); // put your setup code here, to run once:

}

void loop()
{
 //  put your main code here, to run repeatedly:
digitalWrite(relay,HIGH);
delay(5000);
digitalWrite(relay,LOW);
delay(5000);
}
