#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print  all single digit numbers of base 10.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
