/**
 * @file func.h
 * @author Prasant Soy (prasantyos@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

#define enable            1
#define registerselection 0

void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char *string_of_characters);