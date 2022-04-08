#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: pointer of pointer of charrepresenting arguments.
 *
 * Return: nothing(EXIT_SUCCESS)
 */
int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", --argc);
	return (EXIT_SUCCESS);
}
