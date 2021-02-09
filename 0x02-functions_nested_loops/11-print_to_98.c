#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - checks for alpha character
 * @n: parameter c checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 */

void print_to_98(int n)
{
	for (n = n ; n > 98 ; n--)
		printf("%d , ", n);
	for (n = n ; n < 98 ; n++)
		printf("%d , ", n);
	printf("%d \n", n);
}
