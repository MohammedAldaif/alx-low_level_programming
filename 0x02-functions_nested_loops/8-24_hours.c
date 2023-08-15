#include "main.h"

/**
 * print_last_digit - function
 *@a: input variable
 * Return: last digit
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	for (i = 0; i <=2 ; i++)
	{
		for(j = 0; j <= 3; j++)
		{
			for (k = 0; k < 60; k++)
			{
				for (l = 0; l < 60 ;l++)
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
	_putchar('\n');
}
