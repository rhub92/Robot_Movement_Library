#include "motorMovement.h"

int main(void)
{
    WDTCTL = WDTPW|WDTHOLD;                 // stop the watchdog timer

    initMotorTimer();


    while (1) {
        //leftMotorForward();
        //_delay_cycles(50000);
        //rightMotorForward();
    	//leftMotorBackwards();
    	//rightMotorBackwards();


    	//moveRobotForward();
    	stopRobot();

    }
    return 0;
}
