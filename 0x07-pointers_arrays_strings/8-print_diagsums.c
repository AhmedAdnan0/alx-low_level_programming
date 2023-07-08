#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the 2 diagonals of an array
 * @a: array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumD1 = 0;
	int sumD2 = 0;

	for (i = 0; i < size; ++i)
	{
		sumD1 += *(a + (i * (size + 1)));
		sumD2 += *(a + ((i + 1) * (size - 1)));
	}
	printf("%d, %d\n", sumD1, sumD2);
}
