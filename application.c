/* 
 * File:   application.c
 * Author: Marwa Abdelrahman
 *
 * Created on August 1, 2024, 12:53 AM
 */


#include"application.h"




Std_RetrunType ret=E_NOK;

uint8 str;
uint8 key;
int main() {
    //uint8 keypad_btn;
    app_init();
          ret=lcd_send_command(&lcd_1,_LCD_DIPLAY_ON_UNDERLINE_ON_CURSOR_ON);
           ret=lcd_send_command(&lcd_1,_LCD_DIPLAY_ON_UNDERLINE_ON_CURSOR_OFF);
       
           ret=lcd_send_string_data_position(&lcd_1,"Hello",1,2);
           ret=lcd_send_string_data_position(&lcd_1,"Embedded",2,3);
           ret=lcd_send_string_data_position(&lcd_1,"World !",3,4);
           ret=lcd_send_string_data_position(&lcd_1,"keypad btn pressed=",4,1);
        
    while(1){
        
                 
        keypad_get_key_pressed(&keypad_1,&key);
     
        ret= convert_uint8_to_string(key,&str);
    
        ret=lcd_send_char_data_position(&lcd_1,key,4,20);
        //__delay_ms(2000);
     
        
         


    }
        return (EXIT_SUCCESS);
}

void app_init(void){
  

     ecu_layer_initialize();
}