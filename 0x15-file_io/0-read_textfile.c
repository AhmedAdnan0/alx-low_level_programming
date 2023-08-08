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
	FILE *fp = NULL;
	size_t l = 0;
	char c;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	for (l = 1; l <= letters; ++l)
	{
		c = fgetc(fp);
		if (feof(fp))
			break;
		printf("%c", c);
	}
	fclose(fp);
	return (l - 1);
}
