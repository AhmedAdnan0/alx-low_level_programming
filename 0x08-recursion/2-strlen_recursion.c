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
