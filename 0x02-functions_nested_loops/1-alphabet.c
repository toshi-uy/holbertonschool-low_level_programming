#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{	char az;

    	for (az = 'a' ; az <= 'z' ; az++)
	{
	_putchar(az);
	}
	_putchar('\n');
    return (0);
}
