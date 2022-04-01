#include "main.h"
#include <stdio.h>

/**
 * square_root_wrapper - helper function to calculate the sqrt of n.
 * @n: the number to calculate for which we calculate de sqrt.
 * @min: the min guessed number to use
 * @max: the max guessed number to use
 *
 * Return: an integer
 */
int square_root_wrapper(int n, int min, int max)
{
	if (min <= max)
	{
		if ((n / min) == min && (n % min) == 0)
			return (min);
		else
			return (square_root_wrapper(n, min + 1, max));
	}
	return (-1);
}

/**
 * _sqrt_recursion - function that returns the squared of a value
 * @n: a number
 *
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_root_wrapper(n, 1, n));
}
