#include "lists.h"

/**
 * dlistint_len - function that returns the length of a double linked list
 * @h: pointer to header
 *
 * Return: the number of nodes of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
