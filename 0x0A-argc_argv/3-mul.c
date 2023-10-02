#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: int.
 */

int main(int argc, char **argv)
{
	(void) argc;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
