#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: a pointer of type (void *)
 * @old_size: the old_size of the memory in bytes
 * @new_size: the new size of the memory in bytes
 *
 * Return: a pointer to the allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp, *old_ptr = ptr;
	unsigned int min, i;

	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		return (tmp);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		min = old_size;
	else
		min = new_size;

	tmp = malloc(new_size);

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < min; i++)
	{
		tmp[i] = old_ptr[i];
	}
	free(ptr);

	return (tmp);
}
