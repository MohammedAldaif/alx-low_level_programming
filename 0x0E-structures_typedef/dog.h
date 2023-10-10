#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
