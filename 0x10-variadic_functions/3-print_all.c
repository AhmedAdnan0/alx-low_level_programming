#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_all - prints all arguments
 * @format: format of args
 */

void print_all(const char * const format, ...)
{
	int i = 0, n, check;
	char *str;
	va_list arg;

	va_start(arg, format);

	n = strlen(format);
	while (i < n)
	{
		check = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				check = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				check = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				check = 1;
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str  == NULL)
					str = "(nil)";
				printf("%s", str);
				check = 1;
				break;
		}
		if (check == 1 && i != n - 1)
			printf(", ");
		++i;
	}
	printf("\n");
	va_end(arg);
}
