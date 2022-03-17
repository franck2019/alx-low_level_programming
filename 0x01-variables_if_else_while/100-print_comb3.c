#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 1; m < 10; m++)
		{
			if (n < m)
			{
				putchar(n + '0');
				putchar(m + '0');
			}

			if (n < 8 && (n < m))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
