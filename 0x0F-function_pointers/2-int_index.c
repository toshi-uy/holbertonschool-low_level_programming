#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array.
 * @size: size of array.
 * @cmp: pointer to function.
 *
 * Return: the index of the first element for which the cmp function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && size > 0 && array)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp(array[i])))
				return (i);
		}
	}
	return (-1);
}
