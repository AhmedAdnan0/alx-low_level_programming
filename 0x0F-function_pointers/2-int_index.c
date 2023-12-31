#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: no of elements
 * @cmp: compare function
 *
 * Return: index of first matched array (SUCCESS)
 *         -1 (FAILED)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
