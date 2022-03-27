#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - This function appendsn n bytes from the src string to the dest
 * string, overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: the string pointed by dest (the destination)
 * @src: the string pointed by src( the source to copy)
 * @n: the number of bytes from the source (src)
 *
 * Return: a pointer of char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest;

	i = 0;
	len_dest = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';
	return (dest);
}
