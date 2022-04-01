#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * more_than_two_divider - function verify if a number has more than 1 divider.
 * @n: the number to check it has other divider other than 1 and itself.
 * @min: the min divider to test
 * @max: the max divider to test
 *
 * Return: true if there true more divider, otherwise false
 */
bool more_than_two_divider(int n, int min, int max)
{
	if (min <= max)
	{
		if (n % min == 0)
			return (true);
		else
			return (more_than_two_divider(n, min + 1, max));
	}
	return (false);
}

/**
 * is_prime_number - function that tell if a number is prime or not
 * @n: a number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (more_than_two_divider(n, 2, n / 2))
		return (0);
	return (1);
}
