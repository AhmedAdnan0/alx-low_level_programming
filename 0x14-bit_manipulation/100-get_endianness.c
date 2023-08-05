#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 Big Endinness
 *         1 Little Endinness
 */

int get_endianness(void)
{
	int x, y;
	int *ptr1, *ptr2;

	ptr1 = &x;
	ptr2 = &y;

	if (ptr1 == ++ptr2)
		return (0);
	else
		return (1);
}
