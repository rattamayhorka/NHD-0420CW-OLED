
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include <string.h>
#include "oled.h"


int main(void){

  DDRB |= (1 << PB6) | (1 << PB5) | (1 << PB1) | (1 << PB0);
  

  OLED_Init();
  _delay_ms(200);

  while(1){
 
    OLED_clrscr(); // Clear the display
    OLED_Home(); // Return Home
    OLED_gotoxy(0,0);
    OLED_Puts("Hola mundo!");
    OLED_gotoxy(0,1);
    OLED_Puts("123456");
    OLED_gotoxy(0,2);
    OLED_Puts("7890");
    OLED_gotoxy(0,3);
    OLED_Puts("RATTAMAYHORKA");
    OLED_gotoxy(10,2);
    OLED_Puts("ROCK");
    
    PORTB &= ~(1 << PB0);
    _delay_ms(1000);
    OLED_clrscr(); // Clear display
    PORTB |= (1 << PB0);
    _delay_ms(1000);
    OLED_Init();
  }
}