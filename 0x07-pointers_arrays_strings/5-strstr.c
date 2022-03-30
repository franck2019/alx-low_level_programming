#include "main.h"
#include <stdio.h>

/**
 * _strstr - function finds the first occurrence of the substring needle in the
 *  string haystack
 * @haystack: a pointer to a string (the source).
 * @needle: a pointer to a substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 *  if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	for (; *haystack != '\0';  haystack++)
	{
		s1 = haystack;
		s2 = needle;
		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (haystack);
	}
	return (NULL);
}
