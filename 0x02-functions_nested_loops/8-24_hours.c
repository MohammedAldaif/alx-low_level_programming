#include "main.h"

/**
 * print_last_digit - function
 *@a: input variable
 * Return: last digit
 */
void jack_bauer(void)
{
	
	for (int i = 0; i <=2 ; i++)
	{
		for(int j = 0; j <= 3; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				for (int l = 0; l < 60 ;l++)
				{
					_putchar(48 + i);
					_putchar(48 + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
