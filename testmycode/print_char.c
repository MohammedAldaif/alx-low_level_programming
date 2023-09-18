#include "main.h"
#include <unistd.h>

/**
 * _print_char - Print a single character
 * @c: The character to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 *
 * This function prints a single character 'c' to the output buffer and flushes
 * the buffer to the standard output (stdout) if it is full. It keeps track of
 * the buffer index and ensures that the character is added to the buffer
 * without overflowing it.
 *
 * Return: The number of characters printed (always 1 for a single character).
 */
int _print_char(char c, char *buffer, int *buf_index)
{
	buffer[(*buf_index)++] = c;
	if (*buf_index == 1024)
	{
		write(1, buffer, *buf_index);
		*buf_index = 0;
	}

	return (1);
}

