#include "main.h"
/**
 * read_textfile - read a text file and print it to the POSIX standard output
 * @filename: the name of the text file to be read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;

	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
