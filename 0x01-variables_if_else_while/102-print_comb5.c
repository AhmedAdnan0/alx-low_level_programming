#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 100)
	{
		while (y < 100)
		{
			if (y > x)
			{
				putchar('0' + (x / 10));
				putchar('0' + (x % 10));
				putchar(' ');
				putchar('0' + (y / 10));
				putchar('0' + (y % 10));
					if (!(x == 98 && y == 99))
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
