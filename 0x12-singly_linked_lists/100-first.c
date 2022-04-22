#include <stdio.h>


void _startup_fun(void) __attribute__ ((constructor));
/**
 * _startup_fun - a function that prints a text before the main
 * function is executed
 *
 * Return:Always 0.
 */
void _startup_fun(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
