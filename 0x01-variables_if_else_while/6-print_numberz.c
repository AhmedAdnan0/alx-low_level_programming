#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	char a = '0';

	while (i < 10)
	{
		putchar(a);
		++i;
		++a;
	}
	putchar('\n');
	return (0);
}
