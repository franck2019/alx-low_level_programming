#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: a pointer of char
 *
 * Return: return the length of the string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
