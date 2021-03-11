#include "variadic_functions.h"

/**
 * sum_them_all - Sum all its parameters
 * @n: constant n.
 *
 * Return: int of the sum of all.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list suma_t;

	va_start(suma_t, n);

	if (n != 0)
		for (i = 0; i < n; i++)
			sum += va_arg(suma_t, int);
	va_end(suma_t);
	return (sum);
}
