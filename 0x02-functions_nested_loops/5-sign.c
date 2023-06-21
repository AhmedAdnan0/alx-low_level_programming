#include "main.h"

/**
 * print_sign - prints int sign (+ 0 -)
 * @n: int to be checked
 *
 * Return: 1 in case of +ve num
 *         0 in case of zero
 *        -1 in case of -ve num
 */

int print_sign(int n)
{
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
	_putchar('0')
	return (0);
	}
	else
	{
	_putchar('+');
	return (1);
	}
}
