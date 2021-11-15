asm(".global _printf_float");

#include"mbed.h"
#include"controller.h"
#include"QEI.h"
#include"KRA_PID.h"

CAN can(PA_11,PA_12,500000);

PwmOut Rail(PA_7);
PwmOut Turn(PA_3);
DigitalOut Rail_dir(PA_1);
DigitalOut Turn_dir(PA_6);
Timer T;
QEI encoder(PA_8,PA_9,NC,360,&T);
DigitalIn LS1_1(PA_0);
DigitalIn LS1_2(PA_4);
KRA_PID mypid(0.1,0,39200,0,0.9);
Controller controller(can,0x334);


int main()
{
  
  return 0;
}