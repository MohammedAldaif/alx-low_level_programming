#include "main.h"
#include <unistd.h>

/**
 * _print_string - Print a string
 * @str: The string to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * Return: The number of characters printed
 */
int _print_string(char *str, char *buffer, int *buf_index)
{
	int str_len = 0, i;

	while (str[str_len] != '\0')
		str_len++;

	for (i = 0; i < str_len; i++)
	{
		buffer[(*buf_index)++] = str[i];
	}

	return (str_len);
}

