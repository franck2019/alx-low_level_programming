#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner(his name)
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cp_name, *cp_owner, *n, *o;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	cp_name = malloc(sizeof(char) * strlen(name) + 1);
	if (cp_name == NULL)
		return (NULL);

	n = strcpy(cp_name, name);

	if (n == NULL)
	{
		free(dog);
		return (NULL);
	}

	cp_owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (cp_owner == NULL)
		return (NULL);

	o = strcpy(cp_owner, owner);

	if (o == NULL)
	{
		free(cp_name);
		free(dog);
		return (NULL);
	}

	dog->name = cp_name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
