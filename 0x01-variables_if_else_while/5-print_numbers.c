#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Description: Positive anything is better than negative nothing
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
