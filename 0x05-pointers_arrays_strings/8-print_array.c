#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints half of a string, followed by a new line.
 * @a: a pointer of an array of integers
 * @n: the number of elements to print.
 *
 * Return: always nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
