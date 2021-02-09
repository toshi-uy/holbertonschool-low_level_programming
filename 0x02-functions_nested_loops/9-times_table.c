#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x, y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			if (y != 9)
			{
			_putchar('0' + (x * y));
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else
			{
				_putchar('0' + (x * y));
				_putchar('\n');
			}
		}
	}
}
