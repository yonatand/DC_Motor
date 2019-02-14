/* written for Arduino Uno
 * An example for DC_Motor requested by Madaim school made by Yonatan Dolgopyatov for Madaim school.
 */

//for help with the functions, check out motorFunctionsExample
 
/* Include the library. */
#include <DC_Motor.h>

/*
*  Create 2 DC_Motor objects
*/
DC_Motor motor = DC_Motor(0,1,2,3);
DC_Motor motor2 = DC_Motor(4,5,6,7);

void setup() {
  
  /*
   * Setup the motor values in memory
   */
  motor.setupMotor(255,1,0);
  motor2.setupMotor(255,1,0);

  /*
   * Sets the direction pins in memory
   */
  motor.modeMotor(0,1);
  motor2.modeMotor(0,1);
  /*
   * Sets the PWM in memory:
   * PWM to 127 (half speed)
   */
  motor.speedMotor(127);
  motor2.speedMotor(127);
  
  /*
   * Sends the motor values through the object pins.
   * (ENABLE pin will always be TRUE)
   */
  motor.submitMotor();
  motor2.submitMotor();

}

void loop() {}
