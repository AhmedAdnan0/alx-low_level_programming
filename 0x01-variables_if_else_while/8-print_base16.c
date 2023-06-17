#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	char x = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		++i;
	}
	while (x <= 'f')
	{
		putchar(x);
		++x;
	}
	putchar('\n');
	return (0);
}
