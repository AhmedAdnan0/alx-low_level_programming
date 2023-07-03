#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence
 *            of the character c in the string s
 * @s: pointer
 * @c: search char
 *
 * Return: s    (Success)
 *         NULL (Failed)
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
