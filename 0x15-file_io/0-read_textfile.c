#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - read the file
 * @filename:file name
 * @letters:print the character
 * Return:out put
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read1;
	ssize_t written;

	buf = malloc(letters);
	fd = open(filename, O_RDONLY);
	if (filename == NULL)
	{
	return (0);
	}

	if (fd == -1)
	{
	return (0);
	}
	if (buf == NULL)
	{
	close(fd);
	return (0);
	}
	read1 = read(fd, buf, letters);
	if (read1 == -1)
	{
	close(fd);
	free(buf);
	return (0);
	}
	written = write(STDOUT_FILENO, buf, read1);
	if (written == -1 || written != read1)
	{
	close(fd);
	free(buf);
	return (0);
	}
	close(fd);
	free(buf);
	return (read1);
}
