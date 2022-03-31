#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: a pointer to an array of array of int
 * @size: the size of the matrix.
 *
 * Return: Always Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_lr, sum_rl, flat_size;

	sum_lr = 0;
	sum_rl = 0;
	flat_size = size * size; /* think to flat mode of an multi dim array */
	for (i = 0; i < flat_size; i = i + size + 1)
	{
		sum_lr = sum_lr + *(a + i);
		/* sum_rl = sum_rl + *(a + (flat_size - 1 - i)); */
	}
	for (j = size - 1; j <= flat_size - size; j = j + size - 1)
	{
		sum_rl = sum_rl + *(a + j);
	}
	printf("%d, %d\n", sum_lr, sum_rl);
}
