#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _print_integer - Print an integer
 * @n: The integer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_integer(int n, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    int temp = n;
    int divisor = 1;
    int i;

    if (n == 0)
    {
        buffer[(*buf_index)++] = '0';
        return (1);
    }
    if (n < 0)
    {
        buffer[(*buf_index)++] = '-';
        temp *= -1;
        printed_chars++;
    }

    while (temp / divisor > 9)
        divisor *= 10;

    while (divisor >= 1)
    {
        i = (temp / divisor) % 10;
        buffer[(*buf_index)++] = i + '0';
        printed_chars++;
        divisor /= 10;
    }

    return (printed_chars);
}

/**
 * _print_binary - Print an integer in binary format
 * @n: The integer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_binary(unsigned int n, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
    int leading_zero = 1;

    for (; mask > 0; mask >>= 1)
    {
        if ((n & mask) || !leading_zero)
        {
            buffer[(*buf_index)++] = ((n & mask) ? '1' : '0');
            printed_chars++;
            leading_zero = 0;
        }
    }

    if (printed_chars == 0)
    {
        buffer[(*buf_index)++] = '0';
        printed_chars++;
    }

    return (printed_chars);
}

/**
 * _print_unsigned - Print an unsigned integer
 * @n: The unsigned integer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_unsigned(unsigned int n, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned int temp = n;
    unsigned int divisor = 1;
    int i;

    if (n == 0)
    {
        buffer[(*buf_index)++] = '0';
        return (1);
    }

    while (temp / divisor > 9)
        divisor *= 10;

    while (divisor >= 1)
    {
        i = (temp / divisor) % 10;
        buffer[(*buf_index)++] = i + '0';
        printed_chars++;
        divisor /= 10;
    }

    return (printed_chars);
}

/**
 * _print_octal - Print an integer in octal format
 * @n: The integer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_octal(unsigned int n, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned int temp = n;
    unsigned int octal_num = 0;
    int octal_digits[32]; // Maximum 32 bits

    if (n == 0)
    {
        buffer[(*buf_index)++] = '0';
        return (1);
    }

    while (temp != 0)
    {
        octal_digits[octal_num++] = temp % 8;
        temp /= 8;
    }

    for (int i = octal_num - 1; i >= 0; i--)
    {
        buffer[(*buf_index)++] = octal_digits[i] + '0';
        printed_chars++;
    }

    return (printed_chars);
}

/**
 * _print_hex_lower - Print an integer in lowercase hexadecimal format
 * @n: The integer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_hex_lower(unsigned int n, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned int temp = n;
    unsigned int hex_digits[32]; // Maximum 32 bits

    if (n == 0)
    {
        buffer[(*buf_index)++] = '0';
        return (1);
    }

    while (temp != 0)
    {
        int remainder = temp % 16;
        if (remainder < 10)
            hex_digits[printed_chars++] = remainder + '0';
        else
            hex_digits[printed_chars++] = remainder - 10 + 'a';

        temp /= 16;
    }

    for (int i = printed_chars - 1; i >= 0; i--)
    {
        buffer[(*buf_index)++] = hex_digits[i];
    }

    return (printed_chars);
}

/**
 * _print_hex_upper - Print an integer in uppercase hexadecimal format
 * @n: The integer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_hex_upper(unsigned int n, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned int temp = n;
    unsigned int hex_digits[32]; // Maximum 32 bits

    if (n == 0)
    {
        buffer[(*buf_index)++] = '0';
        return (1);
    }

    while (temp != 0)
    {
        int remainder = temp % 16;
        if (remainder < 10)
            hex_digits[printed_chars++] = remainder + '0';
        else
            hex_digits[printed_chars++] = remainder - 10 + 'A';

        temp /= 16;
    }

    for (int i = printed_chars - 1; i >= 0; i--)
    {
        buffer[(*buf_index)++] = hex_digits[i];
    }

    return (printed_chars);
}

/**
 * _print_special_string - Print a special string with non-printable characters
 * @str: The string to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_special_string(char *str, char *buffer, int *buf_index)
{
    int printed_chars = 0;

    if (str == NULL)
        return (0);

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            buffer[(*buf_index)++] = '\\';
            buffer[(*buf_index)++] = 'x';
            printed_chars += 2;

            // Print in uppercase hexadecimal
            buffer[(*buf_index)++] = (*str >> 4) + '0';
            buffer[(*buf_index)++] = (*str & 0xF) + '0';
            printed_chars += 2;
        }
        else
        {
            buffer[(*buf_index)++] = *str;
            printed_chars++;
        }

        if (*buf_index == 1024)
        {
            write(1, buffer, *buf_index);
            *buf_index = 0;
        }
        str++;
    }

    return (printed_chars);
}

/**
 * _print_pointer - Print a pointer address
 * @ptr: The pointer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_pointer(void *ptr, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned long int address = (unsigned long int)ptr;
    unsigned long int temp = address;
    unsigned long int divisor = 1;
    int i;

    buffer[(*buf_index)++] = '0';
    buffer[(*buf_index)++] = 'x';
    printed_chars += 2;

    while (temp / divisor > 15)
        divisor *= 16;

    while (divisor >= 1)
    {
        i = (temp / divisor) % 16;
        if (i < 10)
            buffer[(*buf_index)++] = i + '0';
        else
            buffer[(*buf_index)++] = i - 10 + 'a';

        printed_chars++;
        divisor /= 16;
    }

    return (printed_chars);
}

/**
 * _print_reverse - Print a reversed string
 * @str: The string to print in reverse
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_reverse(char *str, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    int len = 0;

    while (str[len])
        len++;

    for (int i = len - 1; i >= 0; i--)
    {
        buffer[(*buf_index)++] = str[i];
        printed_chars++;
        if (*buf_index == 1024)
        {
            write(1, buffer, *buf_index);
            *buf_index = 0;
        }
    }

    return (printed_chars);
}

/**
 * _print_rot13 - Print a ROT13 encoded string
 * @str: The string to print with ROT13 encoding
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_rot13(char *str, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    int i;
    char rot13_map[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            if (*str >= 'A' && *str <= 'Z')
                i = *str - 'A';
            else
                i = *str - 'a' + 26;

            buffer[(*buf_index)++] = rot13_map[i];
            printed_chars++;
        }
        else
        {
            buffer[(*buf_index)++] = *str;
            printed_chars++;
        }

        if (*buf_index == 1024)
        {
            write(1, buffer, *buf_index);
            *buf_index = 0;
        }

        str++;
    }

    return (printed_chars);
}
