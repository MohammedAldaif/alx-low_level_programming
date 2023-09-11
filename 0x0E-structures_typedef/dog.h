#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: input
 * @age: input
 * @owner: input
 *
 * Description: struct.
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
