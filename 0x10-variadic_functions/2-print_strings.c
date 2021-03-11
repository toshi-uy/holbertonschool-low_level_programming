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
if (separator)
{
	for (i = 0; i < n - 1; i++)
		printf("%s%s", va_arg(print_string, char *), separator);
	printf("%s", va_arg(print_string, char *));
}
else
{
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(print_string, char *));
	}
}
printf("\n");
va_end(print_string);
}
