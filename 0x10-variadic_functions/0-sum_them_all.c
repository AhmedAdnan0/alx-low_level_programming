#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: no. of parameters
 *
 * Return: summation of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list par;

	if (n == 0)
		return (0);

	va_start(par, n);

	for (i = 0; i < n; ++i)
	{
		sum = sum + va_arg(par, int);
	}
	va_end(par);
	return (sum);
}
