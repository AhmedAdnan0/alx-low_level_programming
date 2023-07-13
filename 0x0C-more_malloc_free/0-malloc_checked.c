#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check malloc
 * @b: no of bytes
 *
 * Return: ptr (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
