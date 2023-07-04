#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 *          needle in the string haystack
 * @haystack: searched string
 * @needle: search string
 *
 * Return: needle (Success)
 *         NULL   (Failed)
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (; *haystack != '\0'; ++haystack)
	{
		i = 0;

		while (needle[i] != '\0')
		{
			if (haystack[i] == needle[i])
			{
				++i;
			}
			else
			{
				break;
			}

			if (needle[i] == '\0')
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}
