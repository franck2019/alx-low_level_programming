#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements of the array
 * @size: size of each element of the array in bytes
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tmp;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb * size > UINT_MAX)
		return (NULL);

	tmp = malloc(nmemb * size);

	if (tmp == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
	{
		tmp[i] = 0;
	}

	return (tmp);
}
