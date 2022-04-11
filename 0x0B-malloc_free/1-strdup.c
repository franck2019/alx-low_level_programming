#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the pointer of char representing the duplicate string
 *
 * Return: a pointer to the duplicated string, otherwise NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup = (char *) malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		*(dup + i) = str[i];
		i++;
	}
	*(dup + i) = '\0';
	return (dup);
}
