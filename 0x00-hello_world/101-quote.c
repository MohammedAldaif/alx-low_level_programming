#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
        for(int i=0;i<58;i++)
        {
                putchar(str[i]);
        }
        putchar('\n');
        return (1);
}
