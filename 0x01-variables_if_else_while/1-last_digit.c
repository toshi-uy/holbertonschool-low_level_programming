#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: 1. The last digit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
int J;
srand(time(0));
n = rand() - RAND_MAX / 2;

J = (n % 10);

if (J > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, J);
else if (J == 0)
printf("Last digit of %d is %d and is 0\n", n, J);
else if (J < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, J);
return (0);
}
