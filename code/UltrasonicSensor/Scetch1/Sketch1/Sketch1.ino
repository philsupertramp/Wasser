#include <SR04.h>


SR04 hc(11, 12); //initialisation class HCSR04 (echo pin , trig pin)

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  long dist = hc.Distance(); 
  Serial.println( dist );  //return current distance (cm) in serial
}
