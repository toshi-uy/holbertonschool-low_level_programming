#ifndef SEARCH_A
#define SEARCH_A

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Prototypes for advanced task*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/* Auxiliary prototypes */
int binary_search_2(int *array, size_t size, size_t pos, int value);
int advanced_binary_rec(int *array, int low, int high, int value);

#endif /* ends SEARCH_A */
