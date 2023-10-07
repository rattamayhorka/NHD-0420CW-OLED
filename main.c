
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include <string.h>
#include "oled.h"

uint8_t _rowOffsets[4];

int main(void){

  DDRB |= (1 << PB6) | (1 << PB5) | (1 << PB1);

  OLED_Init();
  _delay_ms(200);

  while(1){
 
    OLED_clrscr(); // Clear the display
    OLED_Home(); // Return Home
    OLED_Puts("Hola mundo!");
    _delay_ms(5000);
    OLED_clrscr(); // Clear display
    _delay_ms(1000);
    OLED_Init();
  }
}
