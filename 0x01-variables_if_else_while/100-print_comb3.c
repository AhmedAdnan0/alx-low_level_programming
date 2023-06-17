#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			if (y > x)
			{
				putchar('0' + x);
				putchar('0' + y);
					if (x  != 8)
					{
						putchar(',');
						putchar(' ');
					}
			}
		++y;
		}
	y = 0;
	++x;
	}
	putchar('\n');
	return (0);
}
