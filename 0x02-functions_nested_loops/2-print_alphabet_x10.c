#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always nothing.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;
	int j = 10;

	for (i = 0; i < j; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
