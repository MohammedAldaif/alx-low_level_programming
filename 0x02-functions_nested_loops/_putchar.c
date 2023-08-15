#include<unistd.h>
#include "main.h"

/**
 * _putchar  - Entry point
 * @c: The character which will be printed
 * Return: ON Success 1, On Error -1
 */

int _putchar(char c)
{
	/* c character */
	return (write(1, &c, 1));
}
