#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: ptr to the concatenated string
 *         NULL (failed)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	for (i = 0; s1[i] != '\0'; )
		++i;
	for (j = 0; s2[j] != '\0'; )
		++j;

	ptr = malloc(i + j + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; ++i)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; ++j)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
