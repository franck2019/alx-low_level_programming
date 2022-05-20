#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a pointer of struct dog
 * @name: a string representing the name of the dog
 * @age: a float representing the age of the dog
 * @owner: a string representing the name of the dog's owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *tmp = d;

	if(tmp == NULL)
		exit(-1);
	tmp->name = name;
	tmp->age = age;
	tmp->owner = owner;
}
