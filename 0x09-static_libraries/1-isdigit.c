#include "main.h"

/**
 * _isdigit - function
 * @c: input
 * Return: 1 if success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
