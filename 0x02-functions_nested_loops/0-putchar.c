#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char word[] = "_putchar\n";
	int len = strlen(word);

	for (i = 0; i < len; i++)
	{
		_putchar(word[i]);
	}
	return (0);
}
