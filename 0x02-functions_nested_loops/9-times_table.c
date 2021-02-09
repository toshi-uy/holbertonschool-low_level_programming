#include "holberton.h"

/**
 * num_chico - part of the code
 * @mul: x * y
 * @y: parameter y
 * Description: checks if parameter (int c) is a lowercase character
 */
void num_chico(int mul, int y)
{
	if (y != 9)
	{
		_putchar('0' + mul);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar('0' + mul);
		_putchar('\n');
	}
}
/**
 * times_table - prints the 9 times table
 *
 *Description: checsadsa
 */
void times_table(void)
{
	int x, y, mul, u, d;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			mul = x * y;
			if (mul <= 9)
			{
				num_chico(mul, y);
			}
			else
			{
				u = mul % 10;
				d = mul / 10;
				_putchar('0' + d);
				_putchar('0' + u);
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
