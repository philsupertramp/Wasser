#include <SR04.h>


SR04 hc(11, 12); //initialisation class HCSR04 (trig pin , echo pin)

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  hc.Ping();
  long dist = hc.getDistance();
 
  Serial.println( dist );  //return current distance (cm) in serial
}
