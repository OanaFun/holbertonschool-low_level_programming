#include "main.h"

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing chars for
 * Return: a pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes files
 * @file: file to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_error_98 - print error 98
 * @error: error message
 * @argv: holds the file to print
 * @code: error code to exit
 */
void print_error_98(char *error, char *argv, int code)
{
	dprintf(STDERR_FILENO, error, argv);
	exit(code);
}

/**
 * print_error_99 - print error 99
 * @error: error message
 * @argv: holds the file to print
 * @code: error code to exist
 */
void print_error_99(char *error, char *argv, int code)
{
	dprintf(STDERR_FILENO, error, argv);
	exit(code);
}

/**
 * main - copy the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 if successful
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			print_error_98("Error: Can't read from file %s\n", argv[1], 98);
			free(buffer);
		}

		w = write(file_to, buffer, r);

		if (file_to == -1 || w == -1)
		{
			print_error_98("Error: Can't write to %s\n", argv[2], 99);
			free(buffer);
		}

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
