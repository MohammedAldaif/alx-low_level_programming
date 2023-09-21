#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define FLAG_PLUS   (1 << 0)
#define FLAG_SPACE  (1 << 1)
#define FLAG_HASH   (1 << 2)
#define FLAG_MINUS  (1 << 3)
#define FLAG_ZERO   (1 << 4)

int _printf(const char *format, ...);

/* Function prototypes for the helper functions */
int _print_char(int c, char *buffer, int *buffer_index);
int _print_string(const char *s, char *buffer, int *buffer_index);
int _print_percent(char *buffer, int *buffer_index);
int _print_integer(int n, char *buffer, int *buffer_index, int flags, char length, int width, int precision);
int _print_binary(unsigned int num, char *buffer, int *buffer_index);
int _print_unsigned(unsigned int n, char *buffer, int *buffer_index, int flags, char length, int width, int precision);
int _print_octal(unsigned int num, char *buffer, int *buffer_index, int flags, char length, int width, int precision);
int _print_hex_lower(unsigned int num, char *buffer, int *buffer_index, int flags, char length, int width, int precision);
int _print_hex_upper(unsigned int num, char *buffer, int *buffer_index, int flags, char length, int width, int precision);
int _print_special_string(char *s, char *buffer, int *buffer_index);
int _print_pointer(void *p, char *buffer, int *buffer_index);
int _print_reverse(char *s, char *buffer, int *buffer_index);
int _print_rot13(char *s, char *buffer, int *buffer_index);

#endif /* MAIN_H */

