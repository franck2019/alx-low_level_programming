#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * No parameter
 *
 * Return: Always nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
