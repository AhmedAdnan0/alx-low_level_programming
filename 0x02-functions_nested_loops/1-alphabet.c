#include "main.h"

/**
 * print_alphabet- prints alphabe in lower case
 * Return: 0 in success
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ++ltr)
		_putchar(ltr);

	_putchar('\n');
}
