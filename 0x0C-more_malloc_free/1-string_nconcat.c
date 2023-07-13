#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: copied bytes of string 2
 *
 * Return: ptr to the new location of the strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		i = strlen(s1) + strlen(s2) + 1;
	i = strlen(s1) + n + 1;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; ++i)
		ptr[i] = s1[i];
	for (j = 0; j < n; ++i, ++j)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
