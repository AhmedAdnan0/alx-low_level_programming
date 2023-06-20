#include "main.h"

/**
 * main - prints "_putchar"
 * return: 1 in success
 */

int main(void)
{
	char fun[] = "_putchar";
	int i = 0;

	for (i < 8; ++i;)
	{
		_putchar(fun[i]);
	}
	_putchar('\n');
	return (0);
}
