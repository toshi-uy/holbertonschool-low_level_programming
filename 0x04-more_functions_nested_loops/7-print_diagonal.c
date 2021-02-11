#include "holberton.h"

/**
 * print_diagonal - checks for lowercase character
 * @n: parameter n checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a, b;
	for (a = 0 ; a < n ; a++)
	{
		for (b = 0 ; b < a ; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar(10);
	}
	if (n < 1)
		_putchar(10);
}
