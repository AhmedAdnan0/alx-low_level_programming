#include "main.h"

/**
 * _isalpha - checks if the letter is alphabetic or not
 * @c: char to be checked
 *
 * Return: 1 in case of alphabetic char
 *         0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 112) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
