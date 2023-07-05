#include "main.h"

/**
 * check - helper function
 * @s: input string
 * @a: first char
 * @b: last char
 *
 * Return: 1 palindrome
 *         0 otherwise
 */

int check(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}

	if (s[a] == s[b])
	{
		return (check(s, ++a, --b));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: input
 *
 * Return: 1 palindrome
 *         0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;

	while (s[i])
	{
		++i;
	}

	if (i == 0)
	{
		return (1);
	}

	return (check(s, 0, i - 1));
}
