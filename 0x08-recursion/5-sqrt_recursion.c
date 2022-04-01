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
	int guess = 0, guess_squared = 0;

	if (max < min)
		return (-1);
	guess = (min + max) / 2;
	guess_squared = guess * guess;
	if (guess_squared == n)
		return (guess);
	else if (guess_squared < n)
		return (square_root_wrapper(n, guess + 1, max));
	else
		return (square_root_wrapper(n, min, guess - 1));
	return (guess);
}

/**
 * _sqrt_recursion - function that returns the squared of a value
 * @n: a number
 *
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	return (square_root_wrapper(n, 1, n));
}
