#include "main.h"

/**
* _strlen - returns string length
* @s: string to be checked
*
* Return: string length
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		++i;
	}
	return (i);
}

/**
 * rev_string - reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char p[10000];
	int i, j = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		p[i] = s[i];
	}

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		s[j] = p[i];
		++j;
	}
}
