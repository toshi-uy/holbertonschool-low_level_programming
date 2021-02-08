#include "holberton.h"
#include <stdio.h>

/**
 *print_alphabet - Entry point
 *
 *Description: Prints alphabet
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
