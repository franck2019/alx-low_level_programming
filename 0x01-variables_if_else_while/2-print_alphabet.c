#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the alphabet.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
