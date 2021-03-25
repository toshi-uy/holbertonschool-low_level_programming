#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip.
 * @n: number to check
 * @m: number to convert
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = 0;
	unsigned int cont = 0;

	sum = n ^ m;

	while (sum > 0)
	{
		if (sum & 1)
			cont++;
		sum >>= 1;
	}
	return (cont);
}
