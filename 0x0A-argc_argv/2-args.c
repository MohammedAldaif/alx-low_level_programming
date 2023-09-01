#include <stdio.h>

/**
 * main - entry point
 *@argc: input
 *@argv: input
 *Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
