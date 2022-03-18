#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a >= b && b >= c) || (a >= c && c >= b))
		largest = a;
	else if ((b >= a && a >= c) || (b >= c && c >= a))
		largest = b;
	else if (a >= b && c >= b && a >= c)
		largest = a;
	else if (a >= b && c >= b && c >= a)
		largest = c;
	else if (a >= c && b >= c && a >= b)
		largest = a;
	else if (a >= c && b >= c && b >= a)
		largest = b;
	else if (b >= a && c >= a && b >= c)
		largest = b;
	else if (b >= a && c >= a && c >= b)
		largest = c;
	else if (b >= c && a >= c && b >= a)
		largest = b;
	else if (b >= c && a >= c && a >= b)
		largest = c;
	else
		largest = c;
	return (largest);
}
