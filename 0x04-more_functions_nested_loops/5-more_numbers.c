#include "main.h"

/**
 * more_numbers- print nums from 0 to 14 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 14; ++j)
	{
		for (i = 0; i < 14; ++i)
		{
			if (i >= 10)
			{
				_putchar('0' + 1);
			}
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
