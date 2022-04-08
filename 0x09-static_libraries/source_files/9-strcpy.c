#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: the string pointed by dest (the destination)
 * @src: the string pointed by src( the source to copy)
 *
 * Return: a pointer of char.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
