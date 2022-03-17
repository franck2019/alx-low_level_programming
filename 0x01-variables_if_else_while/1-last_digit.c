#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Random a number, tell if his last digit is >5,<6 or =0.
 *
 * Return: 0 - if  every is ok.
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* ld = last_digit */
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	else
		printf("Last digit of %d is %d and is 0\n", n, ld);
	return (0);
}
