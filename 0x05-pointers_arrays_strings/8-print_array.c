#include "holberton.h"

/**
 * print_array - Illustrating the array type decay
 *@a: a
 *@n: n
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
			printf(", ");
		x++;
	}
	printf("\n");
}
