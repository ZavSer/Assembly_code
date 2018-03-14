#include <mechbotShield.h>
#include <USART.h>
#include <avr/io.h>
#include "assembly_loop.h"

int main()  
{  
     push_button_init();
     led_init();
     push_button_1();

     return 0;
 }
