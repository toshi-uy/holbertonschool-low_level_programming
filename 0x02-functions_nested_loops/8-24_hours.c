#include "holberton.h"

/**
 * jack_bauer - 8-24_hours
 *
 * Description: prints every minute of the day, starting from 00:00 to 23:59
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hs, min;

	for (hs = 0 ; hs <= 23 ; hs++)
	{
		for (min = 0 ; min <= 59 ; min++)
		{
			_putchar((hs / 10) + '0');
			_putchar((hs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
