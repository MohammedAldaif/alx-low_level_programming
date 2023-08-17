#include "main.h"

/**
 * print_triangle - check the code
 *@size: input
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int m;

	m = 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - m)
			{
				printf(" ");
			}
			else
				printf("#");
		}
		printf("\n");
		m++;
	}
	if (size <= 0)
		printf("\n");


}
