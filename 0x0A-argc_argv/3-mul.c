#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: pointer of pointer of charrepresenting arguments.
 *
 * Return: nothing(EXIT_SUCCESS)
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (EXIT_SUCCESS);
}
