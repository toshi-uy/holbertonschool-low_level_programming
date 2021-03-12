B#include "variadic_functions.h"

/**
 * print_char - prints chars
 * @print: parameter print.
 * Return nothing
 */

void print_char(va_list print)
{
	printf("%c", va_arg(print, int));
}

/**
 * print_int - prints integrer
 * @print: parameter print.
 * Return nothing
 */

void print_int(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 * print_float - prints floats
 * @print: parameter print.
 * Return nothing
 */

void print_float(va_list print)
{
	printf("%f", va_arg(print, double));
}

/**
 * print_string - prints string
 * @print: parameter pritn
 * Return nothing
 */

void print_string(va_list print)
{
	char *chequeo;

	chequeo = va_arg(print, char*);
	if (chequeo == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", chequeo);
}

/**
 * print_all - prints all
 * @format: parameter format
 * Return nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list print;
	char *seperator;
	opt options[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(print, format);
	seperator = "";
	while (format && format[i])
	{
		j = 0;
		while (options[j].c != NULL)
		{
			if (format[i] == options[j].c[0])
			{
				printf("%s", seperator);
				options[j].function(print);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(print);
}
