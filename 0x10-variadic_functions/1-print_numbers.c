#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: pointer to char
 * @n: constant number.
 *
 * Return nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_char;

	va_start(print_char, n);
	if (separator)
	{
		for (i = 0; i < n - 1; i++)
			printf("%i%s", va_arg(print_char, int), separator);
		printf("%i", va_arg(print_char, int));
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%i", va_arg(print_char, int));
	}
	printf("\n");
	va_end(print_char);
}
