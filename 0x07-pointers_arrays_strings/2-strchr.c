#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: a pointer to a string (the source).
 * @c: the char to locate
 *
 * Return: a pointer to the first occurence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
