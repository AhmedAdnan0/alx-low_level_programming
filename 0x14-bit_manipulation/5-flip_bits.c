#include "main.h"

/**
 * flip_bits - turns the number of bits you would need to
 *             flip to get from one number to another
 * @n: first input
 * @m: second input
 * Return: number of flibbed bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, x;

	a = 0;
	x = n ^ m;

	while (x)
	{
		if (x & 1)
			++a;
		x = x >> 1;
	}
	return (a);
}
