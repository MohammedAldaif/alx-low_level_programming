#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char character);
int handle_char(va_list args, int printed);
int handle_string(va_list args, int printed);
int handle_d_i(va_list args, int printed);
int handle_specifier(const char *format, va_list args, int printed);
int handle_binary(unsigned int num, int chars_count);
int _printf(const char *format, ...);
int handle_hexadecimal(unsigned int num, int printed, int uppercase);
int handle_octal(unsigned int num, int printed);
int handle_unsigned_int(unsigned int num, int printed);
int handle_reverse(va_list args, int printed);
int handle_p(va_list args, int printed);

#endif
