
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include <string.h>
#include "oled.h"

uint8_t _rowOffsets[4];

int main(void){

  DDRB |= (1 << PB6) | (1 << PB5) | (1 << PB1);
  _rowOffsets[0] = 0x00;
  _rowOffsets[1] = 0x20;
  _rowOffsets[2] = 0x40;
  _rowOffsets[3] = 0x60;

  OLED_Init();
  //_delay_ms(5000);
  _delay_ms(200);
  OLED_Command(0x01); // Clear display
  OLED_Command(0x02);

  while(1){
    // Intitial System Message
    OLED_clrscr(); // Clear the display
    _delay_ms(1);
    OLED_Home(); // Return Home
    _delay_ms(1);
    OLED_Data('H'); //Space
    OLED_Data('e'); //Space
    OLED_Data('l');
    OLED_Data('l');
    OLED_Data('o');
    OLED_Data(' ');
    OLED_Data('w');
    OLED_Data('o'); //Space
    OLED_Data('r');
    OLED_Data('l');
    OLED_Data('d');
    OLED_Data('!'); //Space
    _delay_ms(1000);
    OLED_clrscr(); // Clear display
    OLED_Home();
    _delay_ms(1000);
    OLED_Init();
  }
}