#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: a pointer to a string (the source).
 * @c: the char to locate
 *
 * Return: a pointer to the first occurence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i, len;
	char *res = NULL;

	len = strlen(s); /* Below we need to take in count the '\0' */
	for (i = 0; i < (len + 1); i++) /* i < len + 1 to include '\0' */
	{
		if (s[i] == c)
			return (s + i);
	}
	return (res);
}
