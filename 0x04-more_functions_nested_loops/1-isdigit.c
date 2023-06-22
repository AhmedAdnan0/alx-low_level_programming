#include "main.h"

/**
 * _isdigit- checks if int is a digit
 * @c: int to be checked
 *
 * Return: 1 in case of digit
 *         0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
