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

	while (i < 10)
	{
		while (j < 10)
		{
			if (j > i)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
	i++;
	j = i + 1;
	}
	putchar('\n');
	return (0);
}
