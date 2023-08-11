#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	j = 1;

	for (i = 0 ; i < 9 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{

			putchar(48 + i);
			putchar(48 + j);
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
