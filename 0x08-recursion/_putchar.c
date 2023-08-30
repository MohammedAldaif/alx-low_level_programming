#include <unistd.h>

/**
 * _putchar - check the code
 *
 * Return: int.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
