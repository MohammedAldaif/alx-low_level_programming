#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * @c: char
 * Return: 0
 */
int main(void)
{
	int sum;
	int num;

	for (num = 0; num < 1024; num++)
	{
		if((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum)
	return (write(0);
}
i
