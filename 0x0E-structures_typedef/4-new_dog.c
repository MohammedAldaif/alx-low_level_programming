#include "dog.h"

/**
 * new_dog - function
 * @name: input
 * @age: input
 * @owner: input
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);
	(*my_dog).name = strdup(name);
	(*my_dog).owner = strdup(owner);
	(*my_dog).age = age;

	return (my_dog);
}
