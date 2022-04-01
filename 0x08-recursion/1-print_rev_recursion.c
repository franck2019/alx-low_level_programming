#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: a pointer to an array of char
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	char temp;

	if (*s == '\0')
	{
		return;
	}
	temp = *s;
	_print_rev_recursion(++s);
	_putchar(temp);
}
