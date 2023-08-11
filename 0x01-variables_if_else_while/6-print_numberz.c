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
	while (counter < 10)
	{
		putchar(48 + counter);
	counter++;
	}
	putchar("\n");
	return (0);
}
