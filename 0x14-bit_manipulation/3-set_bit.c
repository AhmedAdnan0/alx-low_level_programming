#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: input
 * @index: bit index starts from 0
 * Return: (1) SUCCESS
 *         (-1) OTHERWISE
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
