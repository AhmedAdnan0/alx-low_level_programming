#include <stdio.h>

/**
 * main - finds out the prime factor of number
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long long int i, n = 612852475143;

	for (i = 3; i < n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lli\n", n);
	return (0);
}
