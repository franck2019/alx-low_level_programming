#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer of int
 * @b: a pointer of int
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
