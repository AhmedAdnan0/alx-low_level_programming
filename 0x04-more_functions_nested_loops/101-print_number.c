#include "main.h"

/**
 * int_size - gets int size
 * @n: the number
 *
 * Return: nums of digits
 */

int int_size(int n)
{
	int i;

	if (n > 10000)
	{
		i = 5;
	}
	else if (n > 1000)
	{
		i = 4;
	}
	else if (n > 100)
	{
		i = 3;
	}
	else if (n > 10)
	{
		i = 2;
	}
	else if (n > 0)
	{
		i = 1;
	}
	return (i);
}

/**
 * print_number - prints the number
 * @n: the number to printed
 */

void print_number(int n)
{
	int a, b, c, d, e, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	i = int_size(n);
	a = (n / 10000);
	b = (n % 10000) / 1000;
	c = (n % 1000) / 100;
	d = (n % 100) / 10;
	e = (n % 10) / 1;
	if (n != 0)
	{
		if (i >= 5)
		{
			_putchar('0' + a);
		}
		if (i >= 4)
		{
			_putchar('0' + b);
		}
		if (i >= 3)
		{
			_putchar('0' + c);
		}
		if (i >= 2)
		{
			_putchar('0' + d);
		}
		if (i >= 1)
		{
			_putchar('0' + e);
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
