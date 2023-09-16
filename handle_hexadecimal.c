#include "main.h"

/**
 * handle_hexadecimal - function
 * @n: input
 * @chars_count: input
 * @isupper: input
 * Return: int.
 */

int handle_hexadecimal(unsigned int n, int chars_count, int isupper)
{
	int arr[100], i = 0, j;

	while (n != 0)
	{
		int mod = n % 16;

		if (mod < 10)
		{
			arr[i] = mod + 48;
		}
		else
		{
			if (isupper)
			{
				arr[i] = (mod - 10) + 65;
			}
			else
			{
				arr[i] = (mod - 10) + 97;
			}
		}
		i++;
		n = n / 16;
	}
	if (i == 0)
	{
		_putchar(48);
		chars_count++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(arr[j]);
			chars_count++;
		}
	}
	return (chars_count);
}
