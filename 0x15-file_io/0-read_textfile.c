#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *str;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * (letters + 1));

	if (str == NULL)
		return (0);
	/* read the text file */
	r = read(fd, str, letters);
	if (r == -1)
		return (0);
	str[letters] = '\0';
	/* write on standard output (fd = 1 = STDOUt_FILENO */
	w = write(STDOUT_FILENO, str, r);

	if (w == -1)
		return (0);
	close(fd);
	free(str);
	return (w);
}
