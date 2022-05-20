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

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	if (name == NULL)
		dog->name = "";
	else
		dog->name = name;
	
	dog->age = age;

	if (owner == NULL)
		dog->owner = "";
	else
		dog->owner = owner;

	return (dog);
}
