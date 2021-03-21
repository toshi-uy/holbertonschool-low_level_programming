#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a, b, res, i;

	a = 1;
	b = 2;
	printf("%lu, ", a);
	printf("%lu, ", b);
	for (i = 3 ; i <= 97 ; i++)
	{
		res = a + b;
		printf("%lu", res);
		if (i != 97)
		{
			printf(", ");
		}
		a = b;
		b = res;
	}
	printf("\n");
	return (0);
}
