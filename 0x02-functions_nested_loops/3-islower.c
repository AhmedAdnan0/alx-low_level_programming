#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c: char to be checked
 * Return: 1 in case of lowercase
 *         0 otherwise
 */

int _islower(char c)
{
	if (c >= "a" && c <= "z")
	{
		return (1);
	}
	return (0);
}
