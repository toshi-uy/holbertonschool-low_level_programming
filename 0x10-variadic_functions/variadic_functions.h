#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list argument);
void print_int(va_list argument);
void print_float(va_list argument);
void print_string(va_list argument);

/**
 *struct op - struct op
 *@c: string
 *@function: pointer to function
 */
typedef struct op
{
	char *c;
	void (*function)();
} opt;
#endif
