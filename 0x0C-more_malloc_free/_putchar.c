#include "main.h"

/**
 * _putchar - function
 * @c: input
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
