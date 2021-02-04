#include <stdlib.h>
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
	char x, y;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
	}
	for (y = 'A' ; y <= 'F' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
