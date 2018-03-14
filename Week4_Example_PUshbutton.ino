#include <mechbotShield.h>
#include <USART.h>
#include <avr/io.h>
#include "Week4_Example_PUshbutton.h"

int main()  
{  
     push_button_init();
     led_init();
     push_button_1();

     return 0;
 }
