#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - that prints a string, followed by a new line, to stdout.
 * @s: a pointer of char
 *
 * Return: always nothing.
 */
void _puts(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
