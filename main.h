#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define FLAG_PLUS   (1 << 0)
#define FLAG_SPACE  (1 << 1)
#define FLAG_HASH   (1 << 2)
#define FLAG_MINUS  (1 << 3)
#define FLAG_ZERO   (1 << 4)

int _printf(const char *format, ...);
int _print_char(char c, char *buffer, int *buf_index);
int _print_string(char *str, char *buffer, int *buf_index);
int _print_percent(char *buffer, int *buf_index);
int _print_integer(int n, char *buffer, int *buf_index, int flags, char length, int width);
int _print_binary(unsigned int n, char *buffer, int *buf_index);
int _print_unsigned(unsigned int n, char *buffer, int *buf_index, int flags, char length, int width);
int _print_octal(unsigned int n, char *buffer, int *buf_index, int flags, char length, int width);
int _print_hex_lower(unsigned int n, char *buffer, int *buf_index, int flags, char length, int width);
int _print_hex_upper(unsigned int n, char *buffer, int *buf_index, int flags, char length, int field_width);
int _print_special_string(char *str, char *buffer, int *buf_index);
int _print_pointer(void *ptr, char *buffer, int *buf_index);
int _print_reverse(char *str, char *buffer, int *buf_index);
int _print_rot13(char *str, char *buffer, int *buf_index);

#endif /* MAIN_H */

