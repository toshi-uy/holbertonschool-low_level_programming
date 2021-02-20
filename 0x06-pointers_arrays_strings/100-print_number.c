#include "holberton.h"

/**
 * print_number - prints number
 * @n: destination parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
		a = n;
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar('0' + (a % 10));
}
