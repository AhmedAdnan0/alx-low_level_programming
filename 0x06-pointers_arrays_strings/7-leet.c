#include "main.h"

/**
 * leet - replaces letters with nums
 * @s: string
 *
 * Return: coded string
 */

char *leet(char *s)
{
	char ltr[] = "AaOoEeTtLl";
	char num[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (s[i] == ltr[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
