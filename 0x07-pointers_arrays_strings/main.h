#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* _putchar prototype */
int _putchar(char c);
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
/* print_chessboard prototype */
void print_chessboard(char (*a)[8]);
/* print_diagsums prototype */
void print_diagsums(int *a, int size);
/* set_string prototype */
void set_string(char **s, char *to);
#endif /* MAIN_H */
