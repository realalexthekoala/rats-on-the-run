#include <Servo.h>

Servo servo_1;

void setup()
{
  servo_1.attach(11);
  
 

  

}

void loop()
{


  delay(1000); 
  
  servo_1.write(180);
 
   delay(1000);
  
  servo_1.write(0);
  
  delay(1000);
  
  
}
