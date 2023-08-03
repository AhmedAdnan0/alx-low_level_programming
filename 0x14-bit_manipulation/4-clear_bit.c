#include "main.h"

/**
 * clear_bit - set the value of the bit to 0
 * @n: input
 * @index: bit index starts from 0
 * Return: (1) SUCCESS
 *         (-1) OTHERWISE
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
