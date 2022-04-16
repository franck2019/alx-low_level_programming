#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/* _putchar prototype */
int _putchar(char c);
/* create_array prototype */
char *create_array(unsigned int size, char c);
/* _strdup prototype */
char *_strdup(char *str);
/* str_concat prototype */
char *str_concat(char *s1, char *s2);
/* alloc_grid prototype */
int **alloc_grid(int width, int height);
/* free_grid prototype */
void free_grid(int **grid, int height);
#endif /* HOLBERTON_H */
