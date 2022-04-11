#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: the pointer of char representing the destination string
 * @s2: the pointer of char representing the source string to add to
 * destination
 *
 * Return: a pointer to new string, otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *newchar;
	unsigned int len1, len2;

	if (s1)
		len1 = strlen(s1);
	else
		len1 = 0;
	if (s2)
		len2 = strlen(s2);
	else
		len2 = 0;
	newchar = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (newchar == NULL)
		return (NULL);
	strcat(newchar, s1);
	strcat(newchar, s2);
	return (newchar);
}
