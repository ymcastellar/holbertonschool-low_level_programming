#include "holberton.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, fileWrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		fileWrite = write(fd, text_content, i);
		if (fileWrite == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
