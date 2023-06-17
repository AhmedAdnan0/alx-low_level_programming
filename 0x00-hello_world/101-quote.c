#include <stdio.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: 1 (Success)
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int I = sizeof(quote);
	int i;

	for (i = 0; i <= I; ++i)
	{
		putchar(quote[i]);
	}
	putchar('\n');
	return (1);
}
