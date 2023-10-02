#include <stdio.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: int.
 */

int main(int argc, char **argv)
{
	(void)argv;
	argc--;
	while (argc--)
		printf("%s\n", argv[argc]);
	return (0);
}
