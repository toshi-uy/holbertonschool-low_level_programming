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
	int a;
	unsigned int f1, f2, fibo;

	f1 = 1;
	f2 = 2;
	for (a = 0; a < 98; a++)
	{
		printf("%#x", f1);
		if (a != 97)
		{
			printf(", ");
		}
		fibo = f1 + f2;
		f1 = f2;
		f2 = fibo;
	}
	printf("\n");
	return (0);
}
