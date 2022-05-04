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
/* append_text_to_file prototype */
int append_text_to_file(const char *filename, char *text_content);
/* cp prototype */
int cp(const char *file_from, const char *file_to);
/* fd_checker prototype */
void fd_checker(int fd,const char *filename, int code);
/* fd_closer prototype */
void fd_closer(int fd);
#endif /* MAIN_H */
