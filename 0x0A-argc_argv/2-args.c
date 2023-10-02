#include <stdio.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: int.
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
