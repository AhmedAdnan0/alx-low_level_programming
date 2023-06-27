#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	while (str[len] != '\0')
	{
		++len;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n + 1; i < len; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
