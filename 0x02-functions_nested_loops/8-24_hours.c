#include "main.h"

/**
 * jack_bauer - function
 * Return: last digit
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 4 && i == 2)
				break;
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(48 + i);
					_putchar(48 + j);
					_putchar(':');
					_putchar(48 + k);
					_putchar(48 + l);
					_putchar('\n');
				}
			}
		}
	}
}
