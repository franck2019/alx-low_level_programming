#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - function that checks for digit(0 through 9).
 * @c: character as an integer
 *
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
