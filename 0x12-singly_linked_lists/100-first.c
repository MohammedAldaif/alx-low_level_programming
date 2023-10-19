#include <stdio.h>

void myConstructor(void) __attribute__ ((constructor));

/**
 * myConstructor - prints a string
 * before main is executed
 * Return: void.
 */

void myConstructor(void)
{
	printf("You're beat! and yet, you must all");
	printf("ow,\nI bore my house upon my back!\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("(A tortoise, having pretty good sense of a har");
	printf("e's nature, challenges one to a race.)\n");
	return (0);
}
