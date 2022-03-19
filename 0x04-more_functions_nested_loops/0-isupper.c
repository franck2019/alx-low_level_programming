#include <ctype.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character as an integer
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}

