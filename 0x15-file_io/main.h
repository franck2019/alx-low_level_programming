#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/* _putchar prototype */
int _putchar(char c);
/* read_textfile prototype */
ssize_t read_textfile(const char *filename, size_t letters);
/* create_file prototype */
int create_file(const char *filename, char *text_content);
#endif /* MAIN_H */
