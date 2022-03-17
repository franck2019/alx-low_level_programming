#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all the numbers of base 16 in lowercase.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	char letter;
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
