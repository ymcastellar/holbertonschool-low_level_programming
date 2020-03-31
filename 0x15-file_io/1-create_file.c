#include "holberton.h"

/**
 *create_file -create a file
 *@filename: name of the file
 *@text_content: text to put in the file
 *Return: 1-succes, -1-fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fileWrite, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
	{
		return (-1);
	}

	while (text_content[i] != '\0')
		i++;

	fileWrite = write(fd, text_content, i);
	close(fd);

	if (fileWrite < 0)
		return (-1);

	return (1);
}
