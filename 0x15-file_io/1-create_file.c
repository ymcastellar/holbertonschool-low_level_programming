#include "holberton.h"

/**
 *create_file -create a file
 *@filename: name of the file
 *@text_content: text to put in the file
 *Return: 1-succes, -1-fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fileWrite;

	int *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(text_content));

	if (!buf)
		return (0);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
	{
		free(buf);
		return (-1);
	}

	fileWrite = write(fd, text_content, (size_t)buf);
	close(fd);

	if (fileWrite < 0)
		return (-1);

	return (1);
}
