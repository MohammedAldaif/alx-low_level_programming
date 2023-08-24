#include "main.h"


/**
 * isPrintableAscii - check the code for Holberton School students.
 * @n: input
 * Return: pointer.
 */

int isPrintableAscii(int n)
{
	return (n >= 32 && n <= 126);
}


/**
 * printHexes - check the code for Holberton School students.
 * @b: input
 * @start: input
 * @end: input
 * Return: pointer.
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i);
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;

	}
}

/**
 * printAscii - check the code for Holberton School students.
 * @b: input
 * @start: input
 * @end: input
 * Return: pointer.
 */

void printAscii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableAscii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - check the code for Holberton School students.
 * @b: input
 * @size: input
 * Return: pointer.
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printAscii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
