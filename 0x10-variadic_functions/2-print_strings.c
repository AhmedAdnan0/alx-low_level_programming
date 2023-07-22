#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; ++i)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);

		s = va_arg(str, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
	}
	printf("\n");

	va_end(str);
}


