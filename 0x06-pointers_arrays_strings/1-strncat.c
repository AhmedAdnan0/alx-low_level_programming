#include "main.h"

/**
 * _strcat - concatenates two strings with max n bytes
 * @dest: destinantion
 * @src: source
 * @n: max n bytes
 *
 * Return: dest after concatination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; ++j);

	for (i = 0; src[i] != '\0' && i <= n; ++i)
	{
		*(dest + j + i) = *(src + i);
	}

	*(dest + j + i) = '\0';

	return (dest);
}
