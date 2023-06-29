#include "main.h"

/**
 * _strcpy - copies 2 strings with max n byts
 * @dest: destinantion
 * @src: source
 * @n: max n bytes
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; ++j)
	{
	}

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; ++i)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
