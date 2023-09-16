#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
unsigned int ui;
ui = (unsigned int)INT_MAX + 1024;
_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
 _printf("Length:[%d, %i]\n", 54,54);
    printf("Length:[%d, %i]\n", 98, 98);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
 return 0;
}
