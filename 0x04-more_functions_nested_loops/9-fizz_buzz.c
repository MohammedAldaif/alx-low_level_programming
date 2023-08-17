#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0
 */

int main(void)
{
	int i;
	int n;

	n = 100;

	for (i = 1; i <= n ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d ", i);
		if (i != n)
			printf(" ");
	}
	printf("\n");
	return (0);
}
