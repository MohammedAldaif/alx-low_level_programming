#include <unistd.h>
#include "main.h"
/**
 * _putchar - function
 * @c: char
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
