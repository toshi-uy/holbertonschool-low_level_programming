#include "holberton.h"

/**
 * print_number - prints any number
 * @n: description for n.
 * Description: prints any number.
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar('0' + (x % 10));
}

/**
 * print_small - part of the code
 * @mul: i * j
 * @n: description for n.
 * @j: parameter j
 * Description: prints numbers < 10.
 */

void print_small(int j, int mul, int n)
{
	if (j != n)
	{
		if (j != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		print_number(mul);
		_putchar(',');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		print_number(mul);
		_putchar('\n');
	}
}

/**
 * decimal_number - part of the code
 * @mul: i * j
 * @n: description for n.
 * @j: parameter j
 * Description: prints numbers with decimals
 */

void decimal_number(int j, int mul, int n)
{
	if (j != n)
	{
		_putchar(' ');
		_putchar(' ');
		print_number(mul);
		_putchar(',');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		print_number(mul);
		_putchar('\n');
	}
}

/**
 * over_hundred - part of the code
 * @mul: i * j
 * @n: description for n.
 * @j: parameter j
 * Description: prints numbers over 100.
 */

void over_hundred(int j, int mul, int n)
{
	if (j != n)
	{
		if (j != 0)
			_putchar(' ');
		print_number(mul);
		_putchar(',');
	}
	else
	{
		_putchar(' ');
		print_number(mul);
		_putchar('\n');
	}

}

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: number of time tables to print between 0 and 15
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n == 0)
	{
		_putchar('0');
		_putchar(10);
	}
	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (mul <= 9)
				{

					print_small(j, mul, n);
				}
				if (mul > 9 && mul <= 99)
				{
					decimal_number(j, mul, n);
				}
				if (mul > 99)
				{
					over_hundred(j, mul, n);
				}
			}
		}
	}
}
