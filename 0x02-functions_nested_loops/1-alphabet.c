#include "main.h"

/**
 * print_alphabet- prints alphabe in lower case
 * Return: 0 in success
 */

void print_alphabet(void)
{
	char ltr = "a";
	int i = 0;

	while (i < 26)
	{
		return (_putchar(ltr));
		++i;
		++ltr;
	}
	return (_putchar("\n"));
}
