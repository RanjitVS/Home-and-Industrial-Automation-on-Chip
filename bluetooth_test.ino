 #include <SoftwareSerial.h>
 #define relay 13
SoftwareSerial BT(10, 11); //TX, RX  pins of arduino respetively
String command;

void setup()
{
 BT.begin(9600);
 Serial.begin(9600);
  
}

void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  //delay(10); //Delay added to make thing stable
  char c = BT.read(); //Conduct a serial read
  command += c; //build the string.
  } 

  if (command.length() > 0) {
    Serial.println(command);
   if((command.length()>=1)&&(digitalRead(relay)==LOW))   
   {
    digitalWrite(relay,HIGH);
   }  
   else if((command.length()>=1)&&(digitalRead(relay)==HIGH))
   {
    digitalWrite(relay,LOW);
   }
  
 command="";}} //Reset the variable
//you can add other command to control addition devices by adding an elseif 
//and the additions commands you add in sketch can be given through voice regonisation as i have created the app buttons only to control three devices


