#include "holberton.h"
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: computes and prints the sum of all the multiples of 3 or 5
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int y, x = 0;

	for (y = 0 ; y < 1024 ; y++)
		if (((y % 3) == 0) || ((y % 5) == 0))
		{
			x = (x + y);
		}
			printf("%d\n", x);
	return (0);
}
