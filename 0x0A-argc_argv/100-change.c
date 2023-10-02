#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *@argc: input
 *@argv: input
 *Return: 0
 */

int main(int argc, char **argv)
{
	int div = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	div = atoi(argv[1]);
	while (div >= 25)
	{
		div -= 25;
		coins++;
	}
	while (div >= 10)
	{
		div -= 10;
		coins++;
	}
	while (div >= 5)
	{
		div -= 5;
		coins++;
	}
	while (div >= 2)
	{
		div -= 2;
		coins++;
	}
	if (div == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
