#include "main.h"

/**
 * _strpbrk - locates the first occurance in the string s of any of
 *            the bytes in the string accept
 * @s: pointer
 * @accept: search string
 *
 * Return: s    (Success)
 *         NULL (Failed)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; ++s)
	{
		for (i = 0; accept[i] != '\0'; ++i)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
