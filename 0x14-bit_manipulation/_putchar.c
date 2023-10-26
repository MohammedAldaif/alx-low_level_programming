#include "main.h"

/** _putchar - prints a char
 * @c: input
 * Return: int.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
