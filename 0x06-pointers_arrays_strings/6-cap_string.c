#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: a pointer to an array of char
 *
 * Return: pointer to an array of char.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && isalpha(s[i]))
			s[i] = toupper(s[i]);
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && isalpha(s[i + 1]))
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
	}
	return (s);
}
