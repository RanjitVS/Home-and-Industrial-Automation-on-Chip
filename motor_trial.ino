/*created by Mostafa Zaghloul with a helper library called RedBot.h you can find 
 * it on this link https://github.com/sparkfun/RedBot 
 *--------------------------- thanks a million --------------------------------- 
 *you can find me on 
 *FaceBook::https://www.facebook.com/mostafa.zaghlol3
 *Twitter::https://twitter.com/Mostafazaghlul
 *to Contact for hardware or software questions 
 */
//#include <RedBot.h>

//RedBotSensor left_sen = RedBotSensor(A3);   
//RedBotSensor center_sen = RedBotSensor(A4); 
//RedBotSensor right_sen = RedBotSensor(A5);  
//data_sheet
// constants that are used in the code. lineStandard is the level to detect 
// if the sensor is on the line or not. If the sensor value is greater than this
// the sensor is above a DARK line.
//
// SPEED sets the nominal speed
//motor A
#define en1 9
#define in1 4
#define in2 5
//motor b
#define en2 3
#define in3 6
#define in4 7



void setup()
{ pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
 }

void loop()
{
  
  Serial.print("\t");  
      forward();
}



void forward() {
  analogWrite(en1, 255);
  analogWrite(en2, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
}


