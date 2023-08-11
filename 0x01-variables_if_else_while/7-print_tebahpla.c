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
	while (counter < 26)
	{
		putchar(122 - counter);
		counter++;
	}
	printf("\n");
	return (0);
}
