#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: file content
 * Return: = 1 success
 *          -1 failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		w = write(fd, text_content, strlen(text_content));

		if (w == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
