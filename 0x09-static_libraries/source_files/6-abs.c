#include <stdlib.h>
#include "main.h"
/**
 * _abs - Compute the absolute value of an integer.
 * @n: The number to compute.
 *
 * Return: n if @n > 0, -n if @n < 0, 0 otherwise.
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
