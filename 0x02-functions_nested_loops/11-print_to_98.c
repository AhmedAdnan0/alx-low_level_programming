#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural nums from n to 98
 * @n: the num to print from
 */

void print_to_98(int n)
{
	for (n > 98; --n)
	{
		printf("%d, ", n);
	}
	for (n < 98; ++n)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}
