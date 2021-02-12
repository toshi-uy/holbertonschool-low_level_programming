#include "holberton.h"

/**
 * main - Entry point
 *
 * Description - PRIMER NUMBERS
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int p, n;

	n = 612852475143;
	for (p = 2; p < n; p++)
		if (n % p == 0)
			n = n / p;
	printf("%ld\n", p);
	return (0);
}
