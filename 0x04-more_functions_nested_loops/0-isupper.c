#include "main.h"

/**
 * _isupper - checks if char is uppercase
 * @c: char to be checked
 *
 * Return: 1 in case of uppercase
 *         0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
