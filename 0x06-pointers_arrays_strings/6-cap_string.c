#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized
 *
 * Reture: capitalized string
 */

char *cap_string(char *s)
{
	int i, j, chk = 1;
	char sep[13] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (chk == 1 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}

		chk = 0;
		
		for (j = 0; j < 13; ++j)
		{
			if (s[i] == sep[j])
			{
				chk = 1;
			}
		}
	}
	return (s);
}
