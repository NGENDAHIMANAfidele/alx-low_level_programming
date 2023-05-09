#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024
/**
 * print_error - print error filename
 * @error_code:size code
 * @message:pointer for size
 * @file_name:pointer for filename
 */
void print_error(int error_code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(error_code);
}
/**
 * main - main function
 * @argc:input
 * @argv:pointer
 * Return:the file
 */
int main(int argc, char *argv[])
{
	int from, to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (argc != 3)
	{
	print_error(97, "Usage: %s file_from file_to\n", argv[0]);
	}

	if (from == -1)
	{
	print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (to == -1)
	{
	print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytes_read = read(from, buffer, BUFFER_SIZE)) > 0)
	{
	if (write(to, buffer, bytes_read) != bytes_read)
	{
	print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	}

	if (bytes_read == -1)
	{
	print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(from) == -1)
	{
	char file_from_str[20];

	sprintf(file_from_str, "%d", from);
	print_error(100, "Error: Can't close fd %s\n", file_from_str);
	}

	if (close(to) == -1)
	{
	char file_to_str[20];

	sprintf(file_to_str, "%d", to);
	print_error(100, "Error: Can't close fd %s\n", file_to_str);
	}

	return (0);
}
