#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cs;

	/* your code goes there */
	cs = 'a';
	while (cs <= 'z')
	{
		if (cs == 'q' || cs == 'e')
			cs++;
		putchar(cs);
		cs++;
	}
	putchar('\n');
	return (0);
}
