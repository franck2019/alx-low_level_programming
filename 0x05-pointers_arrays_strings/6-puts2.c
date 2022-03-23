#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string.
 * @s: a pointer of char
 *
 * Return: always nothing.
 */
void puts2(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(*(s + i));
	}
	_putchar('\n');
}
