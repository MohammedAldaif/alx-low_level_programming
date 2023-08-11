#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;

	/* your code goes here */

	counter = 0;
	while (counter < 9)
	{
		putchar(48 + counter);
		putchar(',');
		putchar(' ');
		counter++;
	}
	putchar(48 + counter);
	putchar('\n');
	return (0);
}
