#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest.
 * @dest: a pointer to an array (the destination)
 * @src: a pointer to the memory or buffer (the source).
 * @n: the number bytes of the memory to copy.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
