#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file tocreate
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		w = write(fd, text_content, strlen(text_content) + 1);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
