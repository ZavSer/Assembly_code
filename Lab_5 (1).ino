#include <mechbotShield.h>
#include <avr/io.h>

int main(void){
 
  initSoftSerial();
  setLCDBackLight(147);
  clrLCD();
  moveLCDCursor(0);
  initADC();

    uint16_t inputAnalog = 0;
    uint8_t buttonPress = 0;
  DDRD &= ~((1 << PD3) | (1 << PD4) | (1 << PD5));
  DDRC &= ~(1 << PC1);
  PORTD |= (1 << PD3) | (1 << PD4) | (1 << PD5);
  PORTC |= (1 << PC1);
  DDRB |= 0b00111111;
  DDRD |= (1 << PD6) | (1 << PD7);
  PORTB |= 0b00000000;
  PORTD &= ~((1 << PD6) | (1 << PD7));

  while (1){
 
  delay_ms(200);
   if((PINCrw & (1 << PC1)) == 0){
      buttonPress++;
      if(buttonPress == 7){
        buttonPress = 0;
        
      }
      inputAnalog = analog(buttonPress);
  
      do{
        //Loop 
      }while((PIND & (1 << PD4)) == 0);
    }
    
      inputAnalog = analog(buttonPress);
      clrLCD();
    
    if(buttonPress == 0){
        lcdPrint("line_1=");
    lcdPrintDec(inputAnalog);
    moveLCDCursor(0);
    }
    
    if(buttonPress == 1){
        lcdPrint("line_2 =");
    lcdPrintDec(inputAnalog);
    moveLCDCursor(0);
    }
  if(buttonPress == 2){
        lcdPrint("line_3=");
    lcdPrintDec(inputAnalog);
    moveLCDCursor(0);
    }
      if(buttonPress == 3){
        lcdPrint("line_4=");
    lcdPrintDec(inputAnalog);
    moveLCDCursor(0);
    }
      if(buttonPress == 4){
        lcdPrint("Dis_left=");
    lcdPrintDec(inputAnalog);
    moveLCDCursor(0);
    }
      if(buttonPress == 5){
        lcdPrint("Dis_center=");
    lcdPrintDec(inputAnalog);
    moveLCDCursor(0);
    }
      if(buttonPress == 6){
        lcdPrint("Dis_right=");
    lcdPrintDec(inputAnalog);
    moveLCDCursor(0);
    }
  }
}
