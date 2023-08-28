#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * @c: char
 * Return: 0
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
