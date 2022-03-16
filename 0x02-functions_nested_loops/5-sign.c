#include "main.h"
/**
 * print_sign - Print the sign of a number.
 * @n: The number for which we want to print the sign.
 *
 * Return: 1 if @n > 0, -1 if @n = -1, 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
