#include <ctype.h>
#include "main.h"
/**
 * _islower - test if a char represented by his int value is lower or not
 * @c: The number representing the char to be checked
 *
 * Return: 1 if the number or char c is lowercase. 0 otherwise.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
