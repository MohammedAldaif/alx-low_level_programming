#include "mymain.h"

/**
 * handle_char - function
 * @c: input
 * @chars_count: input
 * Return: void
 */


void handle_char(char c, int chars_count)
{
	write(1, &c, 1);
	return (chars_count++);
}
