#include "3-calc.h"
#include <stdlib.h>

void printError()
{
	printf("Error\n");
	exit(98);
}

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	int (*op_func_ptr)(int, int);

	if (argc != 4)
		printError();
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func_ptr = get_op_func(argv[2]);
	result = op_func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
