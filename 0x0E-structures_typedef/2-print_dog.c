#include "dog.h"

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
		printf("Name: %s", (*d).name);
		printf("Age: %d", (*d).age);
		printf("Owner: %S", (*d).owner);
	}
	else
		printf("nil");
}
~
