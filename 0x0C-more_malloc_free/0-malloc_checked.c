#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);
	if (tmp == NULL)
	{
		exit(98);
	}
	return (tmp);
}
