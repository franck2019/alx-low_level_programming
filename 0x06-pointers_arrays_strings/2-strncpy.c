#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies n bytes from the string pointed by src, including the
 * terminating null byte (\0), to the buffer pointed by dest.
 * @dest: the string pointed by dest (the destination)
 * @src: the string pointed by src( the source to copy)
 * @n: the number bytes from src to copy.
 *
 * Return: a pointer of char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/**
	 * If  the  length of src is less than n, strncpy() writes additional null
	 * bytes to dest to ensure that a total of n bytes are written
	 */
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
