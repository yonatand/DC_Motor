/*
  DC_Motor.h created by Yonatan Dolgopyatov for Madaim School.
  Documented by David Vogman for Madaim School.

  This library was created to control a DC motor with an Arduino microcontroller.

  The PWM pin requires a PWM pin on the Arduino, sometimes marked with a ~

  The functions are documented as followed:

  quick summary
  PIN
  Valid Values:
  #Values
  extra info if required
*/

#ifndef DC_Motor_h
#define DC_Motor_h

#include "Arduino.h"

class DC_Motor {

    public:
        /* Creates the motor object
         * PWM,ENABLE,D0,D1
         * Valid Values:
         * Pin number, Pin number, Pin number, Pin number
         * First pin is the PWM pin
         * Second pin is the ENABLE pin
         * 3rd and 4th are D0 and D1 respectively.
         * D0 and D1 can be swapped.
         * * * * * * * * * * * * * * * * * * * * * * * */
        DC_Motor (int pwm, int en, int d0, int d1);

	void submitMotor();
        
        /* Set speed of motor:
         * PWM
         * Valid Values:
         * 0-255
         * */
        void speedMotor (byte speedm);

        /* Change direction of motor
         * D0, D1
         * Valid Values:
         * true/false, true/false
         *
         *    D1        1        1            0                    0
         *    D0        1        0            1                    0
         *    RESULT    STOP    direction    other direction        STOP
         * */
        void modeMotor (bool modeD0, bool modeD1);

        /* Change both speed and direction at once
         * You need to set both speed and direction at the start.
         * Refer to the table above to see how to control direction
         * Refer to the speed section to learn how to control speed.
         * */
	void setupMotor (byte speedm, bool modeD0, bool modeD1);

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
