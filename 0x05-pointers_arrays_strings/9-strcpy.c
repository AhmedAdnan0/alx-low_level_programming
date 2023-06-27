#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 *
 * Return: return value to tpointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		++len;
	}
	dest[len + 1] = '\0';
	return (dest);
}
