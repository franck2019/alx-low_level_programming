#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* _putchar prototype */
int _putchar(char c);
/* _islower prototype */
int _islower(int c);
/* _isalpha prototype */
int _isalpha(int c);
/* _abs prototype */
int _abs(int n);
/* _isupper prototype */
int _isupper(int c);
/* _isdigit prototype */
int _isdigit(int c);
/* _strlen prototype */
int _strlen(char *s);
/* _puts prototype */
void _puts(char *s);
/* _strcpy prototype */
char *_strcpy(char *dest, char *src);
/* _atoi prototype */
int _atoi(char *s);
/* _strcat prototype */
char *_strcat(char *dest, char *src);
/* _strncat prototype */
char *_strncat(char *dest, char *src, int n);
/* _strncpy prototype */
char *_strncpy(char *dest, char *src, int n);
/* _strcmp prototype */
int _strcmp(char *s1, char *s2);
/* _memset prototype */
char *_memset(char *s, char b, unsigned int n);
/* _memcmp prototype */
char *_memcpy(char *dest, char *src, unsigned int n);
/* _strchr prototype */
char *_strchr(char *s, char c);
/* _strspn prototype */
unsigned int _strspn(char *s, char *accept);
/* _strpbrk prototype */
char *_strpbrk(char *s, char *accept);
/* _strstr prototype */
char *_strstr(char *haystack, char *needle);
#endif /* MAIN_H */
