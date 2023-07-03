#include "main.h"

/**
 * _memcpy - opies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: Source
 * @n: size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}

	return (dest);
}
