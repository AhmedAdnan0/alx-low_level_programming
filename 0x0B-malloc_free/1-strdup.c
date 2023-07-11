#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a new string which
 *            is a duplicate of a string
 * @str: string to be duplicated
 *
 * Return: ptr to the coppied str (Success)
 *         NULL (if str = NULL) or (Failed)
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; str[i]; )
		++i;

	ptr = malloc(i + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; ++i)
		ptr[i] = str[i];

	ptr[i] = str[i];
	return (ptr);
}
