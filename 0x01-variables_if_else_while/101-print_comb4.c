#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			while (z < 10)
			{
				if (y > x && z > y)
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + z);
						if (!(x == 7 && y == 8))
						{
							putchar(',');
							putchar(' ');
						}
				}
			++z;
			}
		z = 0;
		++y;
		}
	y = 0;
	++x;
	}
	putchar('\n');
	return (0);
}
