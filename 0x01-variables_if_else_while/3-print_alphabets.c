#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return : 0 (Success)
 */

int main(void)
{
	int i = 0;
	char a = 'a';

	while (i < 26)
	{
		putchar(a);
		++i;
		++a;
	}
	i = 0;
	a = 'A';

	while (i < 26)
	{
		putchar(a);
		++i;
		++a;
	}
	putchar('\n');
	return (0);
}
