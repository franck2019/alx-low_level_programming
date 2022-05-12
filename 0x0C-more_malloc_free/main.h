#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* _putchar prototype */
int _putchar(char c);
/* malloc_checked prototype */
void *malloc_checked(unsigned int b);
/* string_nconcat prototype */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/* _calloc prototype */
void *_calloc(unsigned int nmemb, unsigned int size);
/* array_range prototype */
int *array_range(int min, int max);
/* _realloc prototype */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif /* MAIN_H */
