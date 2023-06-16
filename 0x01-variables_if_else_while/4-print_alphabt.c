#include <stdio.h>

/**
 * main - This ffunction prints the alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	char a = 'a';

	while (i < 26)
	{
		if (a != 'q' && a!= 'e')
		{
			putchar(a);
		}
		++i;
		++a;
	}
	putchar('\n');
	return (0);
}
