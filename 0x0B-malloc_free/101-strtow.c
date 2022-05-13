#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that splits a string into words.
 * @str: a string
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **res;
	int i, word_counter, keeper;

	if (str == NULL || str == "")
		return (NULL);

	word_counter = 0;
	keeper = 0;

	for (i = 0; str[i] = '\0'; i++)
	{
		if (str[i] == ' ')
		{
			keeper = 0;
		}
		else if (keeper == 0)
		{
			keeper = 1;
			word_counter++;
		}
	}

	res = (char **) malloc(sizeof(char) * (word_counter + 1));

	if (res == NULL)
		return (NULL);

	return (res);
}
