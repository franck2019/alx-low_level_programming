#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - a function that compares two strings
 * @s1: the string
 * @s2: the string
 *
 * Return: return 1 if the strings can be considered identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && s1 != NULL)
		return (1);
	return (0);
}

