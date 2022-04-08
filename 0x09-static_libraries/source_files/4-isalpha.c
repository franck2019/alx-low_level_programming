#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Check for alphabetic character
 * @c: The number representing the char to be checked
 *
 * Return: 1 if the number or char c is alphabetic. 0 otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
