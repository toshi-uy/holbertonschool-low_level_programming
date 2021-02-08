#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{       char a;
	char az;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (az = 'a' ; az <= 'z' ; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
