#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - function that reverses the content of an array of integers.
 * @s: a pointer to an array of char
 *
 * Return: pointer to an array of char.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (islower(s[i]))
			s[i] = toupper(s[i]);
	}
	return (s);
}
