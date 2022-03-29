#include "main.h"
#include <stdio.h>

/**
 * _strspn -function that gets the length of a prefix substring.
 * @s: a pointer to a string (the source).
 * @accept: the prefix  to kook into the source s.
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len, j, k, stop;

	len = 0;
	stop = 0;
	for (i = 0; s[i] != '\0';  i++)
	{
		if (s[i] == ' ')
		{
			stop = i;
			break;
		}
	}
	for (j = 0; j < stop; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				len++;
			}
		}
	}
	return (len);
}
