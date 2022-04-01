#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int palindrome(char *s, int min, int max);
/**
 * is_palindrome - function that checks if a string is a plindrome or not.
 * @s: an array of char representing the string.
 *
 * Return: 1 if the string is a palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	int len = 0;

	len = strlen(s);
	if (len == 1)
		return (1);
	len--;
	return (palindrome(s, 0, len));
}

/**
 * palindrome - function which check if charat the beginning of the string
 * is equal to the char at the end of the string
 * @s: the string
 * @min: an integer representing the miniminal indice of an array of char
 * @max: an integer representing the maximal indice of an array of char
 *
 * Return: return 1 the min >= max, 0 if s[min] != s[max], otherwise return
 * (palindrome(s, min + 1, --max))
 */
int palindrome(char *s, int min, int max)
{
	if (min == max)
		return (1);
	if (min < max)
	{
		if (*(s + min) != *(s + max))
			return (0);
		else
			return (palindrome(s, min + 1, --max));
	}
	return (1);
}

