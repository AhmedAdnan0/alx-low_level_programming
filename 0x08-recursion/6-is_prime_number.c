#include "main.h"

/**
 * prime - helper function
 * @n: input
 * @i: increment
 *
 * Return: 1 if prime
 *         0 otherwise
 */

int prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n < i * 2)
	{
		return (1);
	}
	return (prime(n, i + 2));
}

/**
 * is_prime_number - check if the input is prime num or not
 * @n: input
 *
 * Return: 1 if prime
 *         0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	return (prime(n, 3));
}
