#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: content
 * Return: 1 Success
 *        -1 Failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content)
		w = write(fd, text_content, strlen(text_content));

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
