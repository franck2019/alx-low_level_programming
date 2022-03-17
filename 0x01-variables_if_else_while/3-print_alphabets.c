#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print the alphabet lowercas and uppercase.
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

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(toupper(letter));
	}
	putchar('\n');
	return (0);
}
