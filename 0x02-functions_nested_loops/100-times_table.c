#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n * n time table
 * @n: size of the time table
 */

void print_times_table(int n)
{
	int i, j;

	if (n <= 0 || n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			printf("0");
			for (j = 0; j <= n; ++j)
			{
				printf(", ");
				if (i * j < 10)
				{
					printf(" ");
				}
				else if (i * j < 100)
				{
					printf(" ");
				}
			printf("%d", i * j);
			}
		printf("\n");
		}
	}
}
