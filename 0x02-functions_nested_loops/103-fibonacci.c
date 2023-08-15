#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long f1;
	unsigned long f2;
	unsigned long sum;
	float total;

	f1 = 0;
	f2 = 1;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
