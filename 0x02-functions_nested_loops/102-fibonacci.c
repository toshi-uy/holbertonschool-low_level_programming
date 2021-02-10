#include <stdio.h>
/**
 *printFibonacciNumbers- Entry point
 *@n: bal
 *Description: Positive anything is better than negative nothing
 *
 */
void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;

	if (n < 1)
		return;
	printf("%d ", f1);
	for (i = 1; i < n; i++)
	{
		printf("%d ", f2);

		int next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
}
/**
 *main - Entry point
 *
 *Description: Positive anything is better than negative nothing
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printFibonacciNumbers(50);
	return (0);
}
