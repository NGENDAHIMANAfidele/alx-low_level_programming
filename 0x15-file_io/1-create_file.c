#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - create the file
 * @filename:name of the file
 * @text_content:space
 * Return:return the file
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (filename == NULL)
	return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
	return (-1);

	if (text_content != NULL)
	{
	if (write(f, text_content, strlen(text_content)) == -1)
	{
	close(f);
	return (-1);
	}
	}
	close(f);
	return (1);
}
