#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	int a, b, c;

	while (i < 1000)
	{
		a = i / 100;
		b = (i % 100) / 10;
		c = (i % 100) % 10;
		if (b > a && c > b)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar('0' + c);
				if (!(a == 7 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
		}
	++i;
	}
	putchar('\n');
	return (0);
}
