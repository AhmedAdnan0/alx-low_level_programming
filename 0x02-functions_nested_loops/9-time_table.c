#include "main.h"

/**
 * times_table - prints every minute of the day
 */

void times_table(void);
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		_putchar('0');
		for (j = 1; j <= 9; ++j)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (i * j) / 10);
			}
			_putchar('0' + (i * j) % 10);
		}
			_putchar('\n');
	}
}
