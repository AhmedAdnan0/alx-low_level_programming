#include <stdio.h>

/**
 * main - finds out the prime factor of number
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long long i;
	long long n = 612852475143;
	long long pm = 1;

	for (i = 1; i < n; ++i)
	{
		if (n % i == 0)
		{
			pm = i;
		}
	}
	printf("%lli\n", pm);
	return (0);
}
