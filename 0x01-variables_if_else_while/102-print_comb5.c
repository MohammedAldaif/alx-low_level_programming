#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	n = 0;
	while (n <= 99)
	{
		m = n;
		while (n <= 99)
		{
			if (m != n)
			{
				putchar(48 + (n / 10));
				putchar(48 + (n % 10));
				putchar(' ');
				putchar(48 + (m / 10));
				putchar(48 + (m % 10));
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
