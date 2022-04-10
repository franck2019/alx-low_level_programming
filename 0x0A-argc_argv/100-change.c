#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * change - helper function that calculates the number of coins
 * @n: an integer representing the amount of money
 *
 * Return: an integer representing the rest of the division
 */
int change(int n)
{
	int ans;

	ans = 0;
	if (n >= 25)
		ans += (n / 25) + change(n % 25);
	else if (n >= 10)
		ans += (n / 10) + change(n % 10);
	else if (n >= 5)
		ans += (n / 5) + change(n % 5);
	else if (n >= 2)
		ans += (n / 2) + change(n % 2);
	else if (n >= 1)
		ans += 1;
	else if (n == 0)
		ans += 0;
	return (ans);
}

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: pointer of pointer of charrepresenting arguments.
 *
 * Return: nothing(EXIT_SUCCESS)
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
		printf("%d\n", change(atoi(argv[1])));
	return (EXIT_SUCCESS);
}
