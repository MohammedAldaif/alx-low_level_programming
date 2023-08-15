#ifndef MYHEADERS_H
#define MYHEADERS_H
#include<stdio.h>
void print_alphabet(void);

void print_alphabet(void)
{
	char a ='a';
	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
#endif
