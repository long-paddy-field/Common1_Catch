asm(".global _printf_float");

#include"mbed.h"
#include"controller.h"

CAN can(PA_11,PA_12,500000);
PwmOut Rail(PA_7);
PwmOut Turn(PA_3);
DigitalOut Rail_dir(PA_1);
DigitalOut Turn_dir(PA_6);


Controller controller(can,0x334);

int main()
{

  return 0;
}