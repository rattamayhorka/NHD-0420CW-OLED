# NHD-0420CW-XX Example

Example Code for Newhaven Display's [0420CW Slim OLED] for MICROCHIP AVR-C (https://www.newhavendisplay.com/nhd0420cwab3-p-8038.html)!

Target: `Atmega 32`\
Language: `AVR-C`\
Interface: `Serial SPI`\
Display Voltage: `3.3V` or `5V`\
Logic Voltage: `3.3V` or `5V`

## Compatible Displays:
- [NHD-0420CW-AG3](https://www.newhavendisplay.com/nhd0420cwag3-p-7828.html)
- [NHD-0420CW-AY3](https://www.newhavendisplay.com/nhd0420cway3-p-7829.html)
- [NHD-0420CW-AB3](https://www.newhavendisplay.com/nhd0420cwab3-p-8038.html)
- [NHD-0420CW-AW3](https://www.newhavendisplay.com/nhd0420cwaw3-p-9587.html)

## CONNECTIONS:

- OLED_Pin 1 (Vss) -> Ground
- OLED_Pin 2 (Vdd) -> +5V
- OLED_Pin 3 (RegVdd) -> +5V
- OLED_Pin 4 (NC) -> Ground
- OLED_Pin 5 (NC) -> Ground
- OLED_Pin 6 (NC) -> Ground
- OLED_Pin 7 (SCLK)-> (Pin 12 Arduino Example Code) (SCL ATMEGA32 PB6)
- OLED_Pin 8 (SDI) -> (Pin 11 Arduino Example Code) (SDI ATMEGA32 PB5)
- OLED_Pin 9 (SDO) -> Ground
- OLED_Pin 10 (NC) -> Ground
- OLED_Pin 11 (NC) -> Ground
- OLED_Pin 12 (NC) -> Ground
- OLED_Pin 13 (NC) -> Ground
- OLED_Pin 14 (NC) -> Ground
- OLED_Pin 15 (/CS) -> (Pin 9 Arduino Example Code) (CS ATMEGA32 PB1)
- OLED_Pin 16 (/RES) -> +5V
- OLED_Pin 17 (BS0) -> Ground
- OLED_Pin 18 (BS1) -> Ground
- OLED_Pin 19 (BS2) -> Ground
- OLED_Pin 20 (Vss) -> Ground