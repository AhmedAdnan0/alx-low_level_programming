#include "main.h"

/**
 * print_rev_recursion - prints out a string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(++s);
	_putchar(s[0]);
	}
}
