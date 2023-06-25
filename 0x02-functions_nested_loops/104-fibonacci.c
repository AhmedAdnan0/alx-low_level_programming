#include <stdio.h>

/**
 * main - prints the first fibonacci nums
 * Return: 0 (success)
 */


int main(void)
{
	int i;
	unsigned long a, a1, a2;
	unsigned long b, b1, b2;
	unsigned long f, f1, f2;

	a = 0;
	b = 1;
	f = a + b;

	printf("%ld", f);

	for (i = 0; i < 45; ++i)
	{
		a = b;
		b = f;
		f = a + b;

		printf(", %ld", f);
	}
	a1 = a % 1000000000;
	a2 = a / 1000000000;
	b1 = b % 1000000000;
	b2 = b / 1000000000;
	f1 = f % 1000000000;
	f2 = f / 1000000000;

	for (i = 45; i < 98; ++i)
	{
		a1 = b1;
		a2 = b2;
		b1 = f1;
		b2 = f2;
		f1 = (a1 + b1) % 1000000000;
		f2 = (a2 + b2) + (a1 + b1) / 1000000000;

		printf(", %ld%ld", f2, f1);
	}
	printf("\n");
	return (0);
}
