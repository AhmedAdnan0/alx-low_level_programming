#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@i: int to get its last digit
 *Return: last digit of int`
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
