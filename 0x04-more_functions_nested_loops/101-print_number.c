#include "main.h"

/**
 * int_size - gets int size
 * @n: the number
 *
 * Return: nums of digits
 */

int int_size(int n)
{
	int i = 0;

	while (n > 0)
	{
		i = i + 1;
		n = n / 10;
	}
	return (i);
}

/**
 * _pow - gets x to the power of y
 * @x: bass
 * @y: power
 *
 * Return: x to power y
 */

int _pow(int x, int y)
{
	int z = x;

	if (y == 0)
	{
		return (1);
	}
	else
	{
		while (y > 1)
		{
			z = z * x;
			--y;
		}
		return (z);
	}
}

/**
 * print_number - prints the number
 * @n: the number to printed
 */

void print_number(int n)
{
	int i, d;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n != 0)
	{
		i = int_size(n);

		while (i >= 1)
		{
			d =  n % _pow(10, i) / _pow(10, i - 1);
			_putchar('0' + d);
			n = n - (d * _pow(10, i - 1));
			--i;
		}
	}

	else if (n == 0)
	{
		_putchar('0');
	}
}
