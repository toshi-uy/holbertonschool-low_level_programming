#include "holberton.h"

/**
 * _print_line - checks for lowercase character
 * @n: parameter n checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
		_putchar('_');
		n--;
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
