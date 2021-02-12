#include "holberton.h"

/**
 * print_triangle - checks for lowercase character
 * @size: parameter n checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 1 ; a <= size ; a++)
	{
		for (b = 1 ; b <= size ; b++)
		{
			if (b <= size - a)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar(10);
	}
	if (size < 1)
		_putchar(10);
}
