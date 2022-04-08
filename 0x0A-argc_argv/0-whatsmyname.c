#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: pointer of pointer of char representing arguments
 *
 * Return: nothing(EXIT_SUCCESS)
 */
int main(int argc, char **argv)
{
	while (argc--)
		if (argc == 0)
			printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
