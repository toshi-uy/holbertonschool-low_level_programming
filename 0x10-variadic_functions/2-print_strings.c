#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: constant n.
 * @separator: point to separator.
 * Return nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_string;

	va_start(print_string, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != (n - 1))
		{
			if (va_arg(print_string, char *))
				printf("%s%s", va_arg(print_string, char *), separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (va_arg(print_string, char *))
				printf("%s", va_arg(print_string, char *));
			else
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(print_string);
}
