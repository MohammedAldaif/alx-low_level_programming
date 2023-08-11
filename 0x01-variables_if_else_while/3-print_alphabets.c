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
	char cc;

	/* your code goes there */
	cs = 'a';
	cc = 'A';
	while (cs <= 'z')
	{
		putchar(cs);
		cs++;
	}
	while (cc <= 'Z')
	{
		putchar(cc);
		cc++;
	}
	putchar('\n');
	return (0);
}
