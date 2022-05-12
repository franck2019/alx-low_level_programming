#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * mul - program that multiplies two positive numbers.
 * @num1: first number (uint)
 * @num2: second number u(int)
 *
 * Return: Print the result
 */
int mul(unsigned int num1, unsigned int num2)
{
	return (num1 * num2);
}

/**
 * print_text - print a string
 * @s: a pointer of char
 *
 * Return: Nothing
 */
void print_text(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * isonly_digits - check a string is only composed of digits
 * @text: a text representing a number
 *
 * Return: True only composed of digits. otherwise False
 */
bool isonly_digits(char *text)
{
	int i;

	i = 0;
	while (text[i] != '\0')
	{
		if (isdigit(text[i]) == 0)
		{
			return (false);
		}
		i++;
	}
	return (true);
}

/**
 * main - check the code for
 * @ac: number of arguments passed in command line (int)
 * @av: list of argument (char **)
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res = 0;

	if (ac != 3)
	{
		print_text("Error\n");
		exit(98);
	}
	if (!isonly_digits(av[1]) || !isonly_digits(av[2]))
	{
		print_text("Error\n");
		exit(98);
	}

	res = mul(atoi(av[1]), atoi(av[2]));

	printf("%d\n", res);

	return (0);
}
