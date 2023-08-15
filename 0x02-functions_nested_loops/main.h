#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);

int _putchar(char c)
{
        return (write(1, &c, 1));
}
#endif
