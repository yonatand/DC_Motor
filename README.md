# DC_Motor
An Arduino library to control a DC motor on a 4 pin base.

It uses the 4 pins:
an analog PWM pin (0-255 values).
a digital ENABLE pin (always set to 1).
and 2 digital direction pins D0 and D1.

Directional pins:
D0        0        1            0                    1
D1        0        0            1                    1
RESULT    STOP     direction    other direction      STOP

To see how the functions work check out motorFunctionsExample.

This library was created for my school, but feel free to download and use it.
