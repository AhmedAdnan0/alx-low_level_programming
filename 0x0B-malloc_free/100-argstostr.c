#include <stdlib.h>
#include "main.h"

/**
 * argstostr - prints arguments
 * @ac: arg count
 * @av: arg value
 *
 * Return: pointer to the string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *s, *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		s = av[i];
		for (j = 0; s[j] != '\0'; ++j)
			++size;
	}

	ptr = (char *)malloc(sizeof(char) * (size + i + 1));

	for (i = 0; i < ac; ++i, ++k)
	{
		s = av[i];
		for (j = 0; s[j] != '\0'; ++j, ++k)
		{
			ptr[k] = s[j];
		}
		ptr[k] = '\n';
	}
	ptr[k] = '\0';

	return (ptr);
}
