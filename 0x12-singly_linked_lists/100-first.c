#include "lists.h"

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
