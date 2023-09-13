#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: input
 * @argv: input
 * Return: int.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func_ptr)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	op_func_ptr = get_op_func(operator);
	result = op_func_ptr(num1, num2);

	printf("%d\n", result);
	return (0);
}

