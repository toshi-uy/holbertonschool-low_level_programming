#include "holberton.h"

/**
 * main - Entry
 *
 *Description: prints the alphabert 10 times
 *
 *Return (0) Success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 99; n++)
	{
		if (n % 3 == 0)
		{
			if (n % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else
		{
			if (n % 5 == 0)
				printf("Buzz ");
			else
				printf("%d ", n);
		}
	}
	printf("Buzz\n");
	return (0);
}
