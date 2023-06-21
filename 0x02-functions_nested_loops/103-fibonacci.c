#include <stdio.h>

/**
 * main - prints the sum of even fibonacci nums below 4M
 * Return: 0 (success)
 */

int main(void)
{
	long int i, a, b, f, sum;

	a = 0;
	b = 1;
	f = a + b;
	sum = 0;
	for (i = 1; f < 4000000; ++i)
	{
		a = b;
		b = f;
		f = a + b;
		if (f % 2 == 0)
		{
			sum = sum + f;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
