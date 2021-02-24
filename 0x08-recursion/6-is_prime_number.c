#include "holberton.h"
/**
 * prime - aux
 * @n: destination parameter
 * @i: destination parameter
 *
 * Return: function that returns 1 if the input integer is a prime number
 */

int prime(int n, int i)
{
	if (n == 1)
		return (0);
	if (n % i == 0)
	{
		return (0);
	}
	if (i > n / 2)
		return (1);
	if (n % i != 0)
	{
		return (prime(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - integer is a prime number
 * @n: destination parameter
 *
 * Return: function that returns 1 if the input integer is a prime number
*/

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else
		return (prime(n, 2));
}
