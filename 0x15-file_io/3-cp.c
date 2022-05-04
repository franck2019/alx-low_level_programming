#include "main.h"

/**
 * cp - a program that copies the content of a file to another file.
 *  Usage: cp file_from file_to
 * @file_from: the name of the source file.
 * @file_to: the name of the destination file.
 *
 * Return: 1 on success, -1 on failure
 */
int cp(const char *file_from, const char *file_to)
{
	int fd, r, w;
	char *text;

	/* read from the source file: file_from */
	fd = open(file_from, O_RDONLY);

	fd_checker(fd, file_from, 98);

	text = malloc(sizeof(char) * 1024);

	if (text == NULL)
		return (0);
	r = read(fd, text, 1024);

	fd_checker(r, file_from, 98);
	fd_closer(fd);

	/* write inside the destination file: file_to */
	fd = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	fd_checker(fd, file_to, 99);
	w = write(fd, text, 1024);
	fd_checker(w, file_to, 99);
	fd_closer(fd);
	free(text);
	return (1);
}

/**
 * fd_checker - function which checks the file descriptor value
 * @fd: file descriptor to check
 * @filename: the file for which we check
 * @code: the exit code
 *
 * Return: Nothing.
 */
void fd_checker(int fd, const char *filename, int code)
{
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(code);
	}
}

/**
 * fd_closer - function to check the close operation status
 * @fd: file descriptor
 *
 * Return: Nothing
 */
void fd_closer(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - run your code
 * @ac: number of argument
 * @av: the list of argument
 *
 * Return: always return 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
