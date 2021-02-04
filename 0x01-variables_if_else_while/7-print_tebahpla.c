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
	char za;

	for (za = 'z' ; za >= 'a' ; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
