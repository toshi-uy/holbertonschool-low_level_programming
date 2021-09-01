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
int binary_search_rec(int *array, size_t min, size_t max, int value);
size_t minimum(size_t first, size_t second);

#endif /* ends SEARCH_A */
