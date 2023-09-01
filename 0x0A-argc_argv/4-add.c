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
	int i, sum = 0;
	char *not_number;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			not_number = argv[i];
			while (*not_number != 0)
			{
				if (*not_number < 47 || *not_number > 57)
				{
					printf("Error\n");
					return (1);
				}
				not_number++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
