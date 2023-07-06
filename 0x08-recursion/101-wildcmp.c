#include "main.h"
#include <stdio.h>

/**
 * cmp - helper function
 * @s1: input 1
 * @s2: input 2
 * @i:  s1 index
 * @j:  s2 index
 *
 * Return: 1 (identical)
 *         0 (otherwise)
 */

int cmp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);

	if (s1[i] == s2[j])
		return (cmp(s1, s2, i + 1, j + 1));

	if (s2[j] == '*')
		return (cmp(s1, s2, i, j + 1));

	if (s2[j] == '\0' && s2[j - 1] == '*')
		return (1);

	if (s2[j - 1] == '*')
		return (cmp(s1, s2, i + 1, j));

	return (0);
}

/**
 * wildcmp - checks if 2 strings are identical or not
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 (identical)
 *         0 (otherwise)
 */

int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2, 0, 0));
}
