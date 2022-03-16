#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * print_last_digit - Print the lastt digit of a number.
 * @n: The number to compute.
 *
 * Return:the last digit of the number @n.
 */
int print_last_digit(int n)
{
	int res;

	res = abs(n % 10);
	_putchar('0' + res);
	return (res);
}
