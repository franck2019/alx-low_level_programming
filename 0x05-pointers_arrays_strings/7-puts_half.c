#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @s: a pointer of char
 *
 * Return: always nothing.
 */
void puts_half(char *s)
{
	int i, len;

	len = strlen(s);
	if (len % 2 == 0)
		i = len / 2;
	else
		/* the last n element is start from  n+1 =((len-1)/2 +1) */
		i = ((len - 1) / 2) + 1;

	for (; i < len; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
