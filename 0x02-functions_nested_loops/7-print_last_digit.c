#include "main.h"

/**
 * _abs - prints int abs
 *@i: int to get its abs
 *Return: int abs
 */

int print_last_digit(int i)
{
	int l = i % 10;

	if (i < 0)
	{
		_putchar('0' + -l);
		return (-l);
	}
	else
	{
		_putchar('0' + l);
		return (l);
	}
}
