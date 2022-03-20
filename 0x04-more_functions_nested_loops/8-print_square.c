#include <stdio.h>
#include "main.h"

/**
 * print_square - function that draws a square.
 * @n: an integer, the number of character '_' that should be printed.
 *
 * Return: Always nothing.
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
