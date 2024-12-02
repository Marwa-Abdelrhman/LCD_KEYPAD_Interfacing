/* 
 * File:   ecu_layer_init.c
 * Author: Marwa Abdelrahman
 *
 * Created on September 2, 2024, 2:18 PM
 */

#include "KeyPad/ecu_keypad.h"
#include "Char_LCD/ecu_char_LDC.h"



keypad_t keypad_1={
    .keypad_rows_pins[0].port=PORTC_INDEX,
    .keypad_rows_pins[0].pin=GPIO_PIN0,
    .keypad_rows_pins[0].direction=GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[0].state=GPIO_STATE_LOW,
    .keypad_rows_pins[1].port=PORTC_INDEX,
    .keypad_rows_pins[1].pin=GPIO_PIN1,
    .keypad_rows_pins[1].direction=GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[1].state=GPIO_STATE_LOW,
    .keypad_rows_pins[2].port=PORTC_INDEX,
    .keypad_rows_pins[2].pin=GPIO_PIN2,
    .keypad_rows_pins[2].direction=GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[2].state=GPIO_STATE_LOW,
    .keypad_rows_pins[3].port=PORTC_INDEX,
    .keypad_rows_pins[3].pin=GPIO_PIN3,
    .keypad_rows_pins[3].direction=GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[3].state=GPIO_STATE_LOW,
    
    .keypad_columns_pins[0].port=PORTC_INDEX,
    .keypad_columns_pins[0].pin=GPIO_PIN4,
    .keypad_columns_pins[0].direction=GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[0].state=GPIO_STATE_LOW,
    .keypad_columns_pins[1].port=PORTC_INDEX,
    .keypad_columns_pins[1].pin=GPIO_PIN5,
    .keypad_columns_pins[1].direction=GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[1].state=GPIO_STATE_LOW,
    .keypad_columns_pins[2].port=PORTC_INDEX,
    .keypad_columns_pins[2].pin=GPIO_PIN6,
    .keypad_columns_pins[2].direction=GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[2].state=GPIO_STATE_LOW,
    .keypad_columns_pins[3].port=PORTC_INDEX,
    .keypad_columns_pins[3].pin=GPIO_PIN7,
    .keypad_columns_pins[3].direction=GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[3].state=GPIO_STATE_LOW


};

/*lcd_t lcd_1={
    .en_pin.port=PORTA_INDEX,
    .en_pin.pin=GPIO_PIN4,
    .en_pin.direction=GPIO_DIRECTION_OUTPUT,
    .en_pin.state=GPIO_STATE_LOW,
    
    .rs_pin.port=PORTA_INDEX,
    .rs_pin.pin=GPIO_PIN5,
    .rs_pin.direction=GPIO_DIRECTION_OUTPUT,
    .rs_pin.state=GPIO_STATE_LOW,
    
   
    .lcd_4bit_pins[0].port=PORTA_INDEX,
    .lcd_4bit_pins[0].pin=GPIO_PIN0,
    .lcd_4bit_pins[0].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_4bit_pins[0].state=GPIO_STATE_LOW,
    
    .lcd_4bit_pins[1].port=PORTA_INDEX,
    .lcd_4bit_pins[1].pin=GPIO_PIN1,
    .lcd_4bit_pins[1].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_4bit_pins[1].state=GPIO_STATE_LOW,
    
    .lcd_4bit_pins[2].port=PORTA_INDEX,
    .lcd_4bit_pins[2].pin=GPIO_PIN2,
    .lcd_4bit_pins[2].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_4bit_pins[2].state=GPIO_STATE_LOW,
    
    .lcd_4bit_pins[3].port=PORTA_INDEX,
    .lcd_4bit_pins[3].pin=GPIO_PIN3,
    .lcd_4bit_pins[3].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_4bit_pins[3].state=GPIO_STATE_LOW
};*/


lcd_t lcd_1={
    .en_pin.port=PORTD_INDEX,
    .en_pin.pin=GPIO_PIN2,
    .en_pin.direction=GPIO_DIRECTION_OUTPUT,
    .en_pin.state=GPIO_STATE_LOW,
    
    .rs_pin.port=PORTD_INDEX,
    .rs_pin.pin=GPIO_PIN1,
    .rs_pin.direction=GPIO_DIRECTION_OUTPUT,
    .rs_pin.state=GPIO_STATE_LOW,
    
   
    .lcd_8bit_pins[0].port=PORTB_INDEX,
    .lcd_8bit_pins[0].pin=GPIO_PIN0,
    .lcd_8bit_pins[0].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[0].state=GPIO_STATE_LOW,
    
    .lcd_8bit_pins[1].port=PORTB_INDEX,
    .lcd_8bit_pins[1].pin=GPIO_PIN1,
    .lcd_8bit_pins[1].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[1].state=GPIO_STATE_LOW,
    
    .lcd_8bit_pins[2].port=PORTB_INDEX,
    .lcd_8bit_pins[2].pin=GPIO_PIN2,
    .lcd_8bit_pins[2].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[2].state=GPIO_STATE_LOW,
    
    .lcd_8bit_pins[3].port=PORTB_INDEX,
    .lcd_8bit_pins[3].pin=GPIO_PIN3,
    .lcd_8bit_pins[3].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[3].state=GPIO_STATE_LOW,
            
    .lcd_8bit_pins[4].port=PORTB_INDEX,
    .lcd_8bit_pins[4].pin=GPIO_PIN4,
    .lcd_8bit_pins[4].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[4].state=GPIO_STATE_LOW,
    
    .lcd_8bit_pins[5].port=PORTB_INDEX,
    .lcd_8bit_pins[5].pin=GPIO_PIN5,
    .lcd_8bit_pins[5].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[5].state=GPIO_STATE_LOW,
    
    .lcd_8bit_pins[6].port=PORTB_INDEX,
    .lcd_8bit_pins[6].pin=GPIO_PIN6,
    .lcd_8bit_pins[6].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[6].state=GPIO_STATE_LOW,
    
    .lcd_8bit_pins[7].port=PORTB_INDEX,
    .lcd_8bit_pins[7].pin=GPIO_PIN7,
    .lcd_8bit_pins[7].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_8bit_pins[7].state=GPIO_STATE_LOW
};


/**
 * @brief initialize all needed drivers in ecu layer
 */
void ecu_layer_initialize(void)
{
    keypad_init(&keypad_1);
    lcd_init(&lcd_1);
    //lcd_init(&lcd_2);

}