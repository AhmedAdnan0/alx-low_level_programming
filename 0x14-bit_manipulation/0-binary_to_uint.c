#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input char
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result;

	i = result = 0;

	while (b[i])
	{
		result = result << 1;
		if (b[i] == '1')
			result += 1;
		else if (b[i] != '0')
			return (0);
		++i;
	}
	return (result);
}
