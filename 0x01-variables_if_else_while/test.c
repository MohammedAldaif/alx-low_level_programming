#include<stdio.h>

int main(void)
{
	int i,j,k,l;

	for (i = 48 ; i < 50 ; i++)
	{
		for (j = 48 ; j < 50 ; j++)
		{
			for (k = 48 ; k < 58 ; k++)
				{
					for (l = 48 ; l < 58 ; l++)
					{	if (l > k)
						{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						putchar(',');
						putchar(' ');
						}		
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
