#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the alphabet without 'e' and 'q'.
 *
 * Return: 0 - if ok.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
