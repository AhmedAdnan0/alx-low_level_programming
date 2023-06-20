#include "main.h"

/**
 * print_alphabet- prints alphabe in lower case
 * Return: 0 in success
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 26)
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
}
