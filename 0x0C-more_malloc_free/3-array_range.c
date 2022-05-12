#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: the first element of the array
 * @max: last element of the array (int)
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *tmp;
	int i, m;

	if (min > max)
		return (NULL);

	tmp = malloc(sizeof(int) * (max - min + 1));

	if (tmp == NULL)
		return (NULL);

	m = min;
	for (i = 0; (i < max - min + 1); i++)
	{
		tmp[i] = m;
		m += 1;
	}

	return (tmp);
}
