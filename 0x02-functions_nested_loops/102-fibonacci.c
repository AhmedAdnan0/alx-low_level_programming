#include <stdio.h>

/**
 * main - prints the first fibonacci nums
 * Return: 0 (success)
 */

int main(void)
{
	long int i, a, b, f;

	a = 0;
	b = 1;
	f = a + b;
	printf("%ld", f);
	for (i = 1; i < 50; ++i)
	{
		a = b;
		b = f;
		f = a + b;
		printf(", %ld", f);
	}
	printf("\n");
	return (0);
}
