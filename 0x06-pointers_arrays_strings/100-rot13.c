#include "main.h"

/**
 * rot13 - decode text
 * @s: string
 *
 * Return: coded string
 */

char *rot13(char *s)
{
	char txt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 52; ++j)
		{
			if (s[i] == txt[j])
			{
				s[i] = cod[j];
				break;
			}
		}
	}

	return (s);
}
