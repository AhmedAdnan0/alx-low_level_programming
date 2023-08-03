#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input
 * @i: bit index starts from 0
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int i)
{
	if ((n >> i) & 1)
		return (1);
	else if (!((n >> i) & 1))
		return (0);
	else
		return (-1);
}
