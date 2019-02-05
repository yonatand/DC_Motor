/*
  DC_Motor.cpp created by Yonatan Dolgopyatov for Madaim School.
  Documented by David Vogman for Madaim School.
*/

#include "Arduino.h"
#include "DC_Motor.h"

/*    Motor constructor ->
 *    (PWM Pin, ENABLE Pin, D0 pin, D1 pin)
 *	  Set all of the bits for the motor to read from.
 * */
DC_Motor::DC_Motor(int pwm, int en, int d0, int d1)
{
    //Storing args in object variables
    _pwm = pwm;
    _en = en;
    _d0 = d0;
    _d1 = d1;
    //Setting pin modes
    pinMode(_pwm,OUTPUT);
    pinMode(_en,OUTPUT);
    pinMode(_d0,OUTPUT);
    pinMode(_d1,OUTPUT);
}
//    Writing the values to the motor
//	  This function must be used to submit changes
void DC_Motor::submitMotor()
{
    analogWrite(_pwm, _speedm);
    digitalWrite(_en,OUTPUT);
    digitalWrite(_d0, _modeD0);
    digitalWrite(_d1, _modeD1);
}

/* Setting speed values
 * Valid values:
 * 0-255
 * */
void DC_Motor::speedMotor(byte speedm)
{
    _speedm = speedm;
}

void DC_Motor::modeMotor(bool modeD0, bool modeD1)
{
/* Change direction of motor
 * D0, D1
 * Valid Values:
 * true/false, true/false
 *
 *    D1        1        1            0                    0
 *    D0        1        0            1                    0
 *    RESULT    STOP    direction    other direction        STOP
 * */
 
    _modeD0 = modeD0;
    _modeD1 = modeD1;
}

void DC_Motor::setupMotor(byte speedm, bool modeD0, bool modeD1)
{
    /* Run once after creating motor object
     * Valid values:
     * 0-255, true/false, true/false
     * */
    _speedm = speedm;
    _modeD0 = modeD0;
    _modeD1 = modeD1;
}
