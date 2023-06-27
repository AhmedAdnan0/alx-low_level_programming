#include <stdio.h>
#include "main.h"

/**
* print_array - prints the first n elements of the array
* @a: Array to be printed
* @n: is the number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	++i;
	}
	printf("\n");
}
