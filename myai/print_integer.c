#include "main.h"
#include <unistd.h>
#include <stdint.h>

/**
 * _print_integer - Print an integer
 * @n: The integer to print
 * @buffer: The buffer to store the output
 * @buf_index: The current index in the buffer
 * @flags: Flags for formatting ('+', ' ', '#', '0', '-')
 * @length: Length modifier ('l', 'h', or none)
 * @width: Field width
 * @precision: Precision (new parameter)
 *
 * Return: The number of characters printed
 */

int _print_integer(int n, char *buffer, int *buf_index, int flags, char length, int width, int precision)
{
	int printed_chars = 0;
	int temp = n;
	int divisor = 1;
	int i;
	int print_sign = 0;

	if (flags & FLAG_PLUS)
	{
		if (n >= 0)
		{
			buffer[(*buf_index)++] = '+';
			printed_chars++;
			print_sign = 1;
		}
	}
	else if (flags & FLAG_SPACE)
	{
		if (n >= 0)
		{
			buffer[(*buf_index)++] = ' ';
			printed_chars++;
			print_sign = 1;
		}
	}

	if (n < 0)
	{
		buffer[(*buf_index)++] = '-';
		temp *= -1;
		printed_chars++;
		print_sign = 1;
	}

	if ((length == 'l' && length[1] == 'l') || (length == 'h' && length[1] == 'h'))
	{
		long long lltemp = (long long)temp;

		while (lltemp / divisor > 9)
			divisor *= 10;
		while (divisor >= 1)
		{
			i = (lltemp / divisor) % 10;
			buffer[(*buf_index)++] = i + '0';
			printed_chars++;
			divisor /= 10;
		}
	}
	else if (length == 'l')
	{
		long ltemp = (long)temp;

		while (ltemp / divisor > 9)
			divisor *= 10;
		while (divisor >= 1)
		{
			i = (ltemp / divisor) % 10;
			buffer[(*buf_index)++] = i + '0';
			printed_chars++;
			divisor /= 10;
		}
	}
	else if (length == 'h')
	{
		short stemp = (short)temp;

		while (stemp / divisor > 9)
			divisor *= 10;
		while (divisor >= 1)
		{
			i = (stemp / divisor) % 10;
			buffer[(*buf_index)++] = i + '0';
			printed_chars++;
			divisor /= 10;
		}
	}
	else
	{
		while (temp / divisor > 9)
			divisor *= 10;
		while (divisor >= 1)
		{
			i = (temp / divisor) % 10;
			buffer[(*buf_index)++] = i + '0';
			printed_chars++;
			divisor /= 10;
		}
	}

	int num_chars = 0;
	int temp_num = temp;
	if (temp_num == 0)
	{
		num_chars = 1;
	}
	else
	{
		while (temp_num != 0)
		{
			temp_num /= 10;
			num_chars++;
		}
	}

	int padding = width - num_chars;
	if (padding > 0)
	{
		if (!(flags & FLAG_MINUS))
		{
			while (padding--)
			{
				buffer[(*buf_index)++] = (flags & FLAG_ZERO) ? '0' : ' ';
				printed_chars++;
			}
		}
	}

	if (precision >= 0)
	{
		int precision_padding = precision - num_chars;
		while (precision_padding-- > 0)
		{
			buffer[(*buf_index)++] = '0';
			printed_chars++;
		}
	}

	return (printed_chars + print_sign);
}
