#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: a pointer of char
 *
 * Return: always nothing.
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
