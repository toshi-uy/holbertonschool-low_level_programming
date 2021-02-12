B#include "holberton.h"

/**
 * print_number - checks for uppercase character.
 * @n: description for n.
 * Description: checks if parameter (int c) is a uppercase character
 *
 * Return: Always 1 if c is uppercase.
 */
void print_number(int n)
{
	int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
		x = n;
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar('0' + (x % 10));
}
