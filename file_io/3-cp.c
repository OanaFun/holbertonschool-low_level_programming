#include "main.h"

/**
 * close_file - closes files
 * @file: file to be closed
 */
void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
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
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
			print_error_98("Error: Can't read from file %s\n", argv[1], 98);

		w = write(file_to, buffer, r);

		if (file_to == -1 || w == -1)
			print_error_98("Error: Can't write to %s\n", argv[2], 99);

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	close_file(file_from);
	close_file(file_to);

	return (0);
}
