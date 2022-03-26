#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: a pointer to an array of char.
 *
 * Return: an int.
 */
int _atoi(char *s)
{
	int i, sign, res;

	res = 0;
	sign = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			if (isdigit(s[i + 1]))
				sign = -1;
			continue;
		}
		else if (s[i] == '+')
		{
			if (isdigit(s[i + 1]))
				sign = 1;
			continue;
		}
		if (!isdigit(s[i]))
			continue;
		res = res * 10 + (s[i] - '0');
		if (isdigit(s[i]) && !isdigit(s[i + 1]))
			break;
	}
	if (res >= INT_MAX)
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	return (res * sign);
}
