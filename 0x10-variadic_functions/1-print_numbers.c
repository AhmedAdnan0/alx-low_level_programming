#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator between numbers
 * @n: no of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; ++i)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		printf("%d", va_arg(num, int));
	}
	printf("\n");

	va_end(num);
}
