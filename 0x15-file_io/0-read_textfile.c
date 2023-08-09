#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters: no of letters to be printed
 * Return: the actual number of letters it could read and print
 *         (0) Falied
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, w, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);

	if (fd == -1 || r == -1 || w == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (w);
}
