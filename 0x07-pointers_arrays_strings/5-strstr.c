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
		for (i = 0; needle[i] != '\0'; ++i)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
			return (haystack);
		}
	}
	return (NULL);
}
