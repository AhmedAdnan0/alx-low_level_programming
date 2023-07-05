#include "main.h"

/**
 * _strlen_recursion - prints out a string in reverse
 * @s: input string
 *
 * Return: string 's' length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
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
	int i = _strlen_recursion(s);

	if (i == 0)
	{
		return (1);
	}

	return (check(s, 0, i - 1));
}
