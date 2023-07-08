#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: intial segmant
 * @accept: prefix string
 *
 * Return: Num of bytes in 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, result;

	result = 1;

	for (i = 0; accept[i] != '\0'; ++i)
	{
		for (j = 0; s[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				++result;
				break;
			}
		}
	}
	return (result);
}
