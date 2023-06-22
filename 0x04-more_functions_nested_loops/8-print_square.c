#include "main.h"

/**
 * print_square - print square of #
 * @size: size of the square
 */

void print_square(int size)
{
	int i, j;
	int n = size;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar(' ');
	}
}
