/*
 * An example for DC_Motor made by Yonatan Dolgopyatov for Madaim school.
 */
 
/* Include the library. */
#include <DC_Motor.h>

/*
*  Create a DC_Motor object with the following pin settings:
*  PWM pin on 0
*  ENABLE pin on 1
*  D0 pin on 2
*  D1 pin on 3
*/
DC_Motor motor = DC_Motor(0,1,2,3);

void setup() {
  
  /*
   * Setup the motor values in memory as:
   * PWM to 127 (full speed)
   * D0 to 1
   * D1 to 0
   * (sets direction)
   */
  motor.setupMotor(255,1,0);

  /*
   * Sets the direction pins in memory:
   * D0 to 0
   * D1 to 1
   */
  motor.modeMotor(0,1);

  /*
   * Sets the PWM in memory:
   * PWM to 127 (half speed)
   */
  motor.speedMotor(127);
  
  /*
   * Sends the motor values through the object pins.
   * (ENABLE pin will always be TRUE)
   */
  motor.submitMotor();

}

void loop() {}
