#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0.
 *
 * Return: Always nothing.
 */
void times_table(void)
{
	int times, number, res, next;

	for (times = 0; times < 10; times++)
	{
		for (number = 0; number < 10; number++)
		{
			res = times * number;
			next = times * (number + 1); /* the next value */

			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			_putchar((res % 10) + '0');
			if (number < 9) /* if the loop range < 9, add a comma and a space */
			{
				_putchar(',');
				_putchar(' ');
			}
			if (next < 10 && number < 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
