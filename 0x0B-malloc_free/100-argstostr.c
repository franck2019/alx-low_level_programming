#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: the number of arguments
 * @av: the list of arguments.
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i, len, j, len_word, k;
	char *res;

	k = 0;
	len = 0;
	len_word = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac ; i++)
		len += strlen(av[i]) + 1;

	len += 1;
	res = malloc(len * sizeof(char));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len_word = strlen(av[i]);

		for (j = 0; j < len_word; j++)
		{
			res[k] = av[i][j];
			k++;
		}

		res[k] = '\n';
		k++;
	}

	res[k] = '\0';
	return (res);
}
