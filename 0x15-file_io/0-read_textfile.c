#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it
 *@filename: name of the file
 *@letters: number of letters
 *Return: number of char
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fileRead, i = 0;
	size_t  fileWrite;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(buf);
		return (0);
	}

	fileRead = read(fd, buf, letters);

	if (fileRead < 0)
	{
		free(buf);
		return (0);
	}

	while (buf && buf[i])
		i++;

	fileWrite = write(STDOUT_FILENO, buf, i);
	free(buf);
	close(fd);
	if (!fileWrite)
		return (0);

	return (fileWrite);
}
