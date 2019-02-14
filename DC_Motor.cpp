/*
  DC_Motor.cpp created by Yonatan Dolgopyatov for Madaim School.
  Documented by David Vogman for Madaim School.
*/

#include "Arduino.h"
#include "DC_Motor.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * A DC motor uses 4 pins when used with a motor board.      *
 * 1: PWM       ->      Controls the speed of the motor      *
 * 2: ENABLE    ->      Always on                            *
 * 3: D0        ->      Controls direction together with D1  *
 * 4: D1        ->      Controls direction together with D0  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
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
/* Writing the values to the motor
 * This function must be used to submit changes
 */
void DC_Motor::submitMotor()
{
    analogWrite(_pwm, _speedm);
    digitalWrite(_en, HIGH);
    digitalWrite(_d0, _modeD0);
    digitalWrite(_d1, _modeD1);
}

void DC_Motor::speedMotor(byte speedm)
{
    _speedm = speedm;
}

void DC_Motor::modeMotor(bool modeD0, bool modeD1)
{
 
    _modeD0 = modeD0;
    _modeD1 = modeD1;
}

void DC_Motor::setupMotor(byte speedm, bool modeD0, bool modeD1)
{
    _speedm = speedm;
    _modeD0 = modeD0;
    _modeD1 = modeD1;
}
