#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * leet - function that encodes a string into 1337.
 * @s: a pointer to an array of char
 *
 * Return: pointer to an array of char.
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int ints[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j] || s[i] == toupper(letters[j]))
			{
				s[i] = ints[j] + '0';
			}
		}
	}
	return (s);
}
