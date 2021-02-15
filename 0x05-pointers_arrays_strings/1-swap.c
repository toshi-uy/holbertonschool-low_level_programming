#include "holberton.h"
/**
 * swap_int - swaps parameters
 * @a: parameter of pointer a
 * @b: parameter of pointer b
 *
 * Description: swaps two values
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
