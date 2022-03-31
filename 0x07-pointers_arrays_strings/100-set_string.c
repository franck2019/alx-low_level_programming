#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: a pointer to an array of array of char
 * @to: a pointer to an array of char.
 *
 * Return: Always Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
