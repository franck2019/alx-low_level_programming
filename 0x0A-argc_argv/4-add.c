#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: pointer of pointer of charrepresenting arguments.
 *
 * Return: nothing(EXIT_SUCCESS)
 */
int main(int argc, char **argv)
{
	int i, j, sum, len;
	char arg;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);
			for (j = 0; j < len; j++)
			{
				arg = argv[i][j];
				if (!isdigit(arg))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (EXIT_SUCCESS);
}
