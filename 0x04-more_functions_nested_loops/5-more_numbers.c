#include "main.h"

/**
 * print_most_numbers - function
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j >= 10)
			{
				_putchar(1 + 48);
				k = j % 10;
			}
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
