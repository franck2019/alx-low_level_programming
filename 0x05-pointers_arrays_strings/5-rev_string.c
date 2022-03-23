#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - unction that reverses a string.
 * @s: a pointer of char
 *
 * Return: always nothing.
 */
void rev_string(char *s)
{
	int i;
	int len;
	char temp;

	len = strlen(s);
	/* we put the end of s into the start of res */
	for (i = 0; i < len; i++) /* res[len - (i + 1)] = *(s + i) */
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
