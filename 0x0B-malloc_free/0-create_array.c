#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * create_array - unction that creates an array of chars, and initializes
 * it with a specific char.
 * @size: the size of the array.
 * @c: the char to fill the array with
 *
 * Return: an integer representing the rest of the division
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	*(ar + i) = '\0';
	return (ar);
}
