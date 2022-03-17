#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	int n;

	for (n  = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
