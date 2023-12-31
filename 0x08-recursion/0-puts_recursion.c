#include "main.h"

/**
 * _puts_recursion - prints out a string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	++s;
	_puts_recursion(s);
}
