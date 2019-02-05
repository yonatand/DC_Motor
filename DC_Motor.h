/*
  DC_Motor.h created by Yonatan Dolgopyatov for Madaim School.
  Last edited: 02/04/2019 (MM/DD/YYYY)
*/

#ifndef DC_Motor_h
#define DC_Motor_h

#include "Arduino.h"

class DC_Motor
{
  public:
    DC_Motor(int pwm, int en, int d0, int d1);
	void submitMotor();
    void speedMotor(byte speedm);
    void modeMotor(bool modeD0, bool modeD1);
	void setupMotor(byte speedm, bool modeD0, bool modeD1);
  private:
    int _pwm;
	int _en;
    int _d0;
    int _d1;
	byte _speedm;
	bool _modeD0;
	bool _modeD1;
};

#endif