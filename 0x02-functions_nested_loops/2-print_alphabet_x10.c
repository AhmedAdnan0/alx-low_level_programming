#include "main.h"

/**
 * print_alphabet- prints alphabe in lower case
 * Return: 0 in success
 */

void print_alphabet(void)
{
	char ltr;
	int i = 0;

	while (i < 10)
	{
		for (ltr = 'a'; ltr <= 'z'; ++ltr)
			_putchar(ltr);

		_putchar('\n');
	++i;
	}
}
