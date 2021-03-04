#include "holberton.h"

/**
 * _realloc - Entry point
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 *
 * Description: function that creates an array of integers
 *
 * Return: the pointer to the newly created space in memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;
	char *PTR = ptr;

	if (!PTR)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size == old_size)
		return (PTR);
	if (new_size == 0 && PTR != NULL)
	{
		free(PTR);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			new[i] = PTR[i];
		free(PTR);
	}
	return (new);
}
