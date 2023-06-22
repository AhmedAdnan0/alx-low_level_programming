#include "main.h"

/**
 * print_line - print line
 * @n: num of "_"
 */

void print_line(void n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i == n; ++i)
			_putchar('_');
	}
	_putchar('\n');
}
