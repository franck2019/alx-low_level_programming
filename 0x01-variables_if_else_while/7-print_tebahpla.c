#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the reversed alphabet.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
