#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of character took from s2
 *
 * Return: the new string concatenated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp;
	unsigned int len1, len2, i = 0;

	len1 = s1 == NULL ? 1 : strlen(s1);
	len2 = s2 == NULL ? 1 : strlen(s2);
	if (n >= len2)
		n = len2;
	tmp = malloc(sizeof(char) * (len1 + n + 1));

	if (tmp == NULL)
		return (NULL);

	if (s1 == NULL)
		tmp[0] = '\0';
	else
		for (i = 0; s1[i] != '\0'; i++)
			tmp[i] = s1[i];

	if (s2 == NULL)
	{
		tmp[1] = '\0';
		tmp[2] = '\0';
		return (tmp);
	}

	for (i = 0; i < n && s2[i] != '\0'; i++)
		tmp[len1 + i] = s2[i];

	tmp[len1 + n] = '\0';

	return (tmp);
}
