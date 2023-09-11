#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function
 * @d: input
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else if (d)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else
		printf("nil");
}
