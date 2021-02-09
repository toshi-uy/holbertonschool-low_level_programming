#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	/* never increments so it will always be less than 10 */
	i = 0;
	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
