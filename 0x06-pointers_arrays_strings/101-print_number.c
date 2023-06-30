#include "main.h"

/**
 * int_size - gets int size
 * @n: the number
 *
 * Return: nums of digits
 */

int int_size(unsigned int n)
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

unsigned int _pow(int x, int y)
{
	unsigned int z = x;

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
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
	{
		x = n;
	}

	if (x != 0)
	{
		i = int_size(x);

		if (i == 10)
		{
			d = x / _pow(10, 9);
			_putchar('0' + d);
			x = x - (d * _pow(10, 9));
			i = 9;
		}
		while (i >= 1)
		{
			d =  x % _pow(10, i) / _pow(10, i - 1);
			_putchar('0' + d);
			x = x - (d * _pow(10, i - 1));
			--i;
		}
	}

	else if (x == 0)
	{
		_putchar('0');
	}
}
