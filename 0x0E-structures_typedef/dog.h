#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - struct
 * @name: member
 * @owner: member
 * @age: member
 * Description: simple struct
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
