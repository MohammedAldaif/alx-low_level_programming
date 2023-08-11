#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	printf("Last digit of %d is %d and is ", n, digit);
	if (digit > 5)
		printf("greater than 5\n");
	else if (digit == 0)
		printf("0\n");
	else if (digit < 6)
		printf("less than 6 and not 0\n");
	return (0);
}
