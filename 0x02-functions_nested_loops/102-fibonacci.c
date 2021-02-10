#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Positive anything is better than negative nothing
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int f1 = 0, f2 = 1, i;

	printf("%d, ", f1);
	for (i = 1; i < 50; i++)
	{
		printf("%d, ", f2);

		int next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
	printf("\n");
	return (0);
}
