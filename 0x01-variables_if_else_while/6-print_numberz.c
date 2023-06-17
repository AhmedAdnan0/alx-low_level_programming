#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		++i;
	}
	putchar('\n');
	return (0);
}
