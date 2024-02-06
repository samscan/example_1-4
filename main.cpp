#include "mbed.h"
#include "arm_book_lib.h"

#define DUTY_MIN 0.020
#define DUTY_MAX 0.116
#define PERIOD 0.02

PwmOut servo(PF_9);

int main()
{
    servo.period(PERIOD);
    servo.write(DUTY_MAX);
    while (true) {
        servo.period(PERIOD);
        servo.write(DUTY_MIN);
        delay(2000);
        servo.period(PERIOD);
        servo.write(DUTY_MAX);
        delay(2000);
    }
}
