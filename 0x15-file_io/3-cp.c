#include <string.h>
#include "main.h"

/**
 * err98 - Error message
 * @ff: file name
 */

void err98(char *ff)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ff);
	exit(98);
}

/**
 * err99 - Error message
 * @ff: file name
 */

void err99(char *ff)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ff);
	exit(99);
}

/**
 * main - copies the content of a file to another file
 * @argc: no of arguments
 * @argv: file names
 * Return: 0 if success
 * Usage: cp file_from file_to
 */

int main(int argc, char *argv[])
{
	int ffd, ftd, r, w, cf, ct;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffd = open(argv[1], O_RDONLY);
	if (ffd == -1)
		err98(argv[1]);
	ftd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (ftd == -1)
		err99(argv[2]);
	r = 1024;
	while (r == 1024)
	{
		r = read(ffd, buffer, 1024);
		if (r == -1)
			err98(argv[1]);
		w = write(ftd, buffer, r);
		if (w == -1)
			err99(argv[2]);
	}
	cf = close(ffd);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffd);
		exit(100);
	}
	ct = close(ftd);
	if (ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftd);
		exit(100);
	}
	return (0);
}
