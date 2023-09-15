#ifndef MY_NAIN_H
#define MY_MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void handle_char(char c, int chars_count);
void handle_string(char* string, int chars_count);
void handle_d_i(int i);
void handle_binary(unsigned int i);
void handle_unsigned(unsigned int);
void handle_octal(unsigned int);
void handle_hexadecimal(unsigned int);
#endif
