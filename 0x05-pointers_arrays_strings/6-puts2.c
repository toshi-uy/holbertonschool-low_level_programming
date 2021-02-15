#include "holberton.h"

/**
 * puts2 - checks for digits
 * @str: parameter str
 * Description: checks if parameter (int c) is digit
 *
 */
void puts2(char *str)
{
	int count = 0;

	while (*(str + count))
	{
		if ((*str + count) % 2 == 0)
		{
			_putchar(*(str + count));
		}
		count++;
	}
	_putchar(10);
}
