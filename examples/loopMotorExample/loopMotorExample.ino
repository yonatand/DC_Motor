#include <DC_Motor.h>

//create the DC_Motor object
DC_Motor motor = DC_Motor(0,1,2,3);

void setup() {
  //set the speed of the object (quarter speed)
  motor.speedMotor(64);
}

void loop() {
  //set direction
  motor.modeMotor(0,1);
  //submit settings
  motor.submitMotor();
  //wait 2 seconds
  delay(2000);

  //stop the motor
  motor.modeMotor(0,0);
  //submit settings
  motor.submitMotor();
  //wait 2 seconds
  delay(2000);

  //set direction
  motor.modeMotor(1,0);
  //submit settings
  motor.submitMotor();
  //wait 2 seconds
  delay(2000);

  //stop the motor
  motor.modeMotor(0,0);
  //submit settings
  motor.submitMotor();
  //wait 2 seconds
  delay(2000);
}
