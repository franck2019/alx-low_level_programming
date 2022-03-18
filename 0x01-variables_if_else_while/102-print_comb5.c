#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 99; n++)
	{
		for (m = 0; m < 100; m++)
		{
			if (m > n)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
			}
			if (n < 98 && (m > n))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
