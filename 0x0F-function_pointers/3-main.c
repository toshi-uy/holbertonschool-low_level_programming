#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - program that performs simple operations
 * @argc: destination parameter
 * @argv: parameter
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (op[0] == '/' || op[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
