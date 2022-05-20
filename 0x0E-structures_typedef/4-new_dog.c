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
	char *n, *o;
	
	n = malloc(sizeof(strlen(name) + 1));
	o = malloc(sizeof(strlen(owner) + 1));
	strcpy(n,name);
	strcpy(o, owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
		
	dog->name = n;
	dog->age = age;
	dog->owner = o;

	return (dog);
}
