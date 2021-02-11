#include "holberton.h"

/**
 * print_square - checks for lowercase character
 * @size: parameter n checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int a, b;

	for (a = 0 ; a < size ; a++)
	{
		for (b = 0 ; b < size ; b++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size < 1)
		_putchar(10);
}
