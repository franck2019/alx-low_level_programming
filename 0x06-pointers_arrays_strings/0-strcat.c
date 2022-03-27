#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - This function appends the src string to the dest string,
 *  overwriting the terminating null byte (\0) at the end of dest, and then
 *  adds a terminating null byte
 * @dest: the string pointed by dest (the destination)
 * @src: the string pointed by src( the source to copy)
 *
 * Return: a pointer of char.
 */
char *_strcat(char *dest, char *src)
{
	int i, len_dest;

	i = 0;
	len_dest = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';
	return (dest);
}
