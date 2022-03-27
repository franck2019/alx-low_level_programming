#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: -15 if s1 < s2, 15 if s1 > s2 and otherwise 0
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len, s2_len, res;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	for (res = 0; res < s1_len && res < s2_len; res++)
	{
		if (s1[res] != s2[res])
			return (s1[res] - s2[res]);
	}
	return (0);
}
