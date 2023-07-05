#include "main.h"

/**
 * root - helper function
 * @n: input
 * @i: trial
 *
 * Return: sqrt(num)
 */

int root(int n, int i)
{
	if (i > 46340 || n < i * i)
	{
		return (-1);
	}
	if (n == i * i)
	{
	return (i);
	}
	return (root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 *
 * Return: sqrt(n) (Success)
 *         (-1)    (Error)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (root(n, 1));
}
